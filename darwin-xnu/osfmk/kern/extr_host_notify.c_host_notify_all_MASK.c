
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef TYPE_3__* queue_t ;
struct TYPE_22__ {TYPE_2__* prev; TYPE_1__* next; } ;
typedef TYPE_3__ queue_head_t ;
typedef int mach_msg_size_t ;
struct TYPE_23__ {TYPE_6__* msgh_remote_port; int msgh_id; void* msgh_voucher_port; void* msgh_local_port; int msgh_bits; } ;
typedef TYPE_5__ mach_msg_header_t ;
typedef TYPE_6__* ipc_port_t ;
typedef scalar_t__ ipc_kobject_t ;
typedef TYPE_7__* host_notify_t ;
typedef size_t host_flavor_t ;
struct TYPE_25__ {TYPE_6__* port; } ;
struct TYPE_24__ {scalar_t__ ip_kobject; } ;
struct TYPE_21__ {TYPE_3__* next; } ;
struct TYPE_20__ {TYPE_3__* prev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_5__*,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ,TYPE_7__*) ;

__attribute__((used)) static void
FUNC_13(
 host_flavor_t VAR_10,
 mach_msg_header_t *VAR_11,
 mach_msg_size_t VAR_12)
{
 queue_t VAR_13 = &VAR_7[VAR_10];

 FUNC_7(&VAR_6);

 if (!FUNC_10(VAR_13)) {
  queue_head_t VAR_14;
  host_notify_t VAR_15;

  VAR_14 = *VAR_13;
  FUNC_11(VAR_13);

  VAR_14.next->prev = &VAR_14;
  VAR_14.prev->next = &VAR_14;

  VAR_11->msgh_bits =
      FUNC_0(VAR_4, 0, 0, 0);
  VAR_11->msgh_local_port = VAR_5;
  VAR_11->msgh_voucher_port = VAR_5;
  VAR_11->msgh_id = VAR_8[VAR_10];

  while ((VAR_15 = (host_notify_t)FUNC_2(&VAR_14)) != ((void*)0)) {
   ipc_port_t VAR_16;

   VAR_16 = VAR_15->port;
   FUNC_1(VAR_16 != VAR_3);

   FUNC_4(VAR_16);
   FUNC_1(FUNC_3(VAR_16) == VAR_0);
   FUNC_1(VAR_16->ip_kobject == (ipc_kobject_t)VAR_15);
   FUNC_6(VAR_16, VAR_2, VAR_1);
   FUNC_5(VAR_16);

   FUNC_8(&VAR_6);
   FUNC_12(VAR_9, VAR_15);

   VAR_11->msgh_remote_port = VAR_16;

   (void) FUNC_9(VAR_11, VAR_12);

   FUNC_7(&VAR_6);
  }
 }

 FUNC_8(&VAR_6);
}
