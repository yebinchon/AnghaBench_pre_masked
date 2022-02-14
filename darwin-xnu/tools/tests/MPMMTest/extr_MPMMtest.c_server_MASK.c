
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_address_t ;
typedef int uint64_t ;
struct port_args {int server_num; int* set; int reply_size; TYPE_3__* reply_msg; TYPE_3__* req_msg; int req_size; int port; int rcv_set; } ;
typedef int mach_port_t ;
typedef int kern_return_t ;
struct TYPE_4__ {int size; scalar_t__ address; } ;
struct TYPE_5__ {TYPE_1__ descriptor; } ;
typedef TYPE_2__ ipc_complex_message ;
struct TYPE_6__ {int msgh_bits; int msgh_id; int msgh_local_port; int msgh_remote_port; int msgh_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (TYPE_3__*,int,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int,int ,int) ;
 int FUNC_7 () ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_8 (char*,int,...) ;
 struct port_args* VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (struct port_args*) ;
 int FUNC_10 (int) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_11 (int ,int ,int ) ;

void *
FUNC_12(void *VAR_19)
{
 int VAR_20;
 kern_return_t VAR_21;
 int VAR_22 = VAR_13 * VAR_12;
 mach_port_t VAR_23;
 uint64_t VAR_24, VAR_25;

 int VAR_26 = (int)(uintptr_t)VAR_19;
 struct port_args *VAR_27 = &VAR_15[VAR_26];

 VAR_27->server_num = VAR_26;
 FUNC_9(VAR_27);

 FUNC_10(VAR_27->server_num + 1);

 VAR_23 = (VAR_17) ? VAR_27->rcv_set : VAR_27->port;

 for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++) {
  if (VAR_18 > 2)
   FUNC_8("server awaiting message %d\n", VAR_20);
  VAR_21 = FUNC_5(VAR_27->req_msg,
    VAR_10|VAR_7|VAR_9,
    0,
    VAR_27->req_size,
    VAR_23,
    VAR_3,
    VAR_5);
  if (VAR_8 == VAR_21)
   break;
  if (VAR_2 != VAR_21) {
   if (VAR_18)
    FUNC_8("mach_msg() ret=%d", VAR_21);
   FUNC_4("mach_msg (receive): ", VAR_21);
   FUNC_2(1);
  }
  if (VAR_18 > 2)
   FUNC_8("server received message %d\n", VAR_20);
  if (VAR_27->req_msg->msgh_bits & VAR_1) {
   VAR_21 = FUNC_11(FUNC_7(),
     (vm_address_t)((ipc_complex_message *)VAR_27->req_msg)->descriptor.address,
     ((ipc_complex_message *)VAR_27->req_msg)->descriptor.size);
  }

  if (1 == VAR_27->req_msg->msgh_id) {
   if (VAR_18 > 2)
    FUNC_8("server sending reply %d\n", VAR_20);
   VAR_27->reply_msg->msgh_bits = FUNC_0(VAR_4, 0);
   VAR_27->reply_msg->msgh_size = VAR_27->reply_size;
   VAR_27->reply_msg->msgh_remote_port = VAR_27->req_msg->msgh_remote_port;
   VAR_27->reply_msg->msgh_local_port = VAR_5;
   VAR_27->reply_msg->msgh_id = 2;
   VAR_21 = FUNC_5(VAR_27->reply_msg,
     VAR_11,
     VAR_27->reply_size,
     0,
     VAR_5,
     VAR_3,
     VAR_5);
   if (VAR_2 != VAR_21) {
    FUNC_4("mach_msg (send): ", VAR_21);
    FUNC_2(1);
   }
  }
 }

 if (!VAR_17)
  return ((void*)0);

 if (VAR_18 < 1)
  return ((void*)0);

 uint64_t VAR_28 = 0;




 for (int VAR_29 = 0; VAR_29 < VAR_16; VAR_29++) {
  if (VAR_18 > 1)
   FUNC_8("\tTearing down set[%d] %#x...\n", VAR_29, VAR_27->set[VAR_29]);
  VAR_24 = FUNC_3();
  VAR_21 = FUNC_6(FUNC_7(), VAR_27->set[VAR_29], VAR_6, -1);
  VAR_25 = FUNC_3();
  VAR_28 += FUNC_1(VAR_25 - VAR_24);
  if (VAR_21 != VAR_0) {
   FUNC_4("mach_port_mod_refs(): ", VAR_21);
   FUNC_2(1);
  }
 }

 uint64_t VAR_30 = (uint64_t)VAR_16 * (uint64_t)VAR_14;

 FUNC_8("\tteardown of %llu links took %llu ns\n", VAR_30, VAR_28);
 FUNC_8("\t%lluns per set\n", VAR_28 / (uint64_t)VAR_16);

 return ((void*)0);
}
