
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int32_t ;
struct port_args {int server_num; int port; int reply_size; TYPE_3__* reply_msg; int req_size; TYPE_3__* req_msg; } ;
typedef int mach_port_t ;
struct TYPE_8__ {int msgh_id; int msgh_local_port; int msgh_size; scalar_t__ msgh_bits; int msgh_remote_port; } ;
typedef TYPE_3__ mach_msg_header_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_7__ {int size; int type; int copy; int deallocate; void* address; } ;
struct TYPE_6__ {int msgh_descriptor_count; } ;
struct TYPE_9__ {TYPE_2__ descriptor; TYPE_1__ body; } ;
typedef TYPE_4__ ipc_complex_message ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 long* VAR_14 ;
 int VAR_15 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (char*,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int,int ,int ,int ,int ,int ) ;
 int FUNC_8 () ;
 void* FUNC_9 (int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_10 (char*,int,...) ;
 char** VAR_21 ;
 int FUNC_11 (struct port_args*) ;
 int VAR_22 ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (int) ;
 scalar_t__ VAR_23 ;

void *FUNC_14(void *VAR_24)
{
 struct port_args VAR_25;
 int VAR_26;
 mach_msg_header_t *VAR_27, *VAR_28;
 mach_port_t VAR_29, VAR_30;
 kern_return_t VAR_31;
 int VAR_32 = (int) VAR_24;
 void *VAR_33 = FUNC_9(sizeof(u_int32_t) * VAR_18);

 if (VAR_23)
  FUNC_10("client(%d) started, server port name %s\n",
   VAR_32, VAR_21[VAR_32]);

 VAR_25.server_num = VAR_32;
 FUNC_13(VAR_32 + 1);


 VAR_31 = FUNC_12(FUNC_8(), &VAR_29);
 if (VAR_1 != VAR_31) {
  FUNC_6("task_get_bootstrap_port(): ", VAR_31);
  FUNC_3(1);
 }
 VAR_31 = FUNC_1(VAR_29,
    VAR_21[VAR_32],
    &VAR_30);
 if (VAR_1 != VAR_31) {
  FUNC_6("bootstrap_look_up(): ", VAR_31);
  FUNC_3(1);
 }

 FUNC_11(&VAR_25);


 if (VAR_15) {
  unsigned VAR_34;
  VAR_14 = (long *) FUNC_9(VAR_15 * VAR_13);
  for (VAR_34 = 0; VAR_34 < VAR_15; VAR_34++)
   VAR_14[VAR_34 * VAR_13 / sizeof(long)] = 0;
 }


 for (VAR_26 = 0; VAR_26 < VAR_19; VAR_26++) {
  VAR_27 = VAR_25.req_msg;
  VAR_28 = VAR_25.reply_msg;

  VAR_27->msgh_bits = FUNC_0(VAR_6,
    VAR_7);
  VAR_27->msgh_size = VAR_25.req_size;
  VAR_27->msgh_remote_port = VAR_30;
  VAR_27->msgh_local_port = VAR_25.port;
  VAR_27->msgh_id = VAR_20 ? 0 : 1;
  if (VAR_16 == VAR_17) {
   (VAR_27)->msgh_bits |= VAR_2;
   ((ipc_complex_message *)VAR_27)->body.msgh_descriptor_count = 1;
   ((ipc_complex_message *)VAR_27)->descriptor.address = VAR_33;
   ((ipc_complex_message *)VAR_27)->descriptor.size =
    VAR_18 * sizeof(u_int32_t);
   ((ipc_complex_message *)VAR_27)->descriptor.deallocate = VAR_0;
   ((ipc_complex_message *)VAR_27)->descriptor.copy = VAR_8;
   ((ipc_complex_message *)VAR_27)->descriptor.type = VAR_3;
  }
  if (VAR_23)
   FUNC_10("client sending message %d\n", VAR_26);
  VAR_31 = FUNC_7(VAR_27,
    VAR_12,
    VAR_25.req_size,
    0,
    VAR_9,
    VAR_5,
    VAR_9);
  if (VAR_4 != VAR_31) {
   FUNC_6("mach_msg (send): ", VAR_31);
   FUNC_4(VAR_22, "bailing after %u iterations\n", VAR_26);
   FUNC_3(1);
   break;
  }
  if (!VAR_20) {
   if (VAR_23)
    FUNC_10("client awaiting reply %d\n", VAR_26);
   VAR_28->msgh_bits = 0;
   VAR_28->msgh_size = VAR_25.reply_size;
   VAR_28->msgh_local_port = VAR_25.port;
   VAR_31 = FUNC_7(VAR_25.reply_msg,
     VAR_11|VAR_10,
     0,
     VAR_25.reply_size,
     VAR_25.port,
     VAR_5,
     VAR_9);
   if (VAR_4 != VAR_31) {
    FUNC_6("mach_msg (receive): ", VAR_31);
    FUNC_4(VAR_22, "bailing after %u iterations\n",
      VAR_26);
    FUNC_3(1);
   }
   if (VAR_23)
    FUNC_10("client received reply %d\n", VAR_26);
  }

  FUNC_2();
 }

 FUNC_5(VAR_33);
 return ((void*)0);
}
