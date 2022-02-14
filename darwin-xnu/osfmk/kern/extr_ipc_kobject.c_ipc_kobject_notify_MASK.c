
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_22__ {int RetCode; } ;
typedef TYPE_2__ mig_reply_error_t ;
typedef int mach_port_mscount_t ;
struct TYPE_23__ {int not_count; } ;
typedef TYPE_3__ mach_no_senders_notification_t ;
struct TYPE_24__ {int msgh_sender; int msgh_audit; } ;
typedef TYPE_4__ mach_msg_max_trailer_t ;
struct TYPE_25__ {int msgh_id; int msgh_remote_port; scalar_t__ msgh_size; } ;
typedef TYPE_5__ mach_msg_header_t ;
typedef TYPE_6__* ipc_port_t ;
typedef int boolean_t ;
struct TYPE_21__ {int imq_seqno; } ;
struct TYPE_26__ {TYPE_1__ ip_messages; int ip_mscount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_5__*) ;

boolean_t
FUNC_14(
 mach_msg_header_t *VAR_6,
 mach_msg_header_t *VAR_7)
{
 mach_msg_max_trailer_t * VAR_8;
 ipc_port_t VAR_9 = (ipc_port_t) VAR_6->msgh_remote_port;

 ((mig_reply_error_t *) VAR_7)->RetCode = VAR_4;

 VAR_8 = (mach_msg_max_trailer_t *)
           ((vm_offset_t)VAR_6 + VAR_6->msgh_size);






 if (0 != FUNC_1(&VAR_8->msgh_audit, &VAR_1,
   sizeof(VAR_8->msgh_audit))) {
  return VAR_0;
 }
 if (0 != FUNC_1(&VAR_8->msgh_sender, &VAR_2,
   sizeof(VAR_8->msgh_sender))) {
  return VAR_0;
 }

 switch (VAR_6->msgh_id) {
  case 131:
   switch (FUNC_4(VAR_9)) {
   case 135:
    FUNC_8(VAR_6);
    return VAR_5;

   case 134:
    FUNC_7(VAR_6);
    return VAR_5;

   case 139:
    FUNC_9(VAR_6);
    return VAR_5;

   case 138:
    FUNC_10(VAR_6);
    return VAR_5;

   case 140:
    FUNC_5(VAR_9);





    VAR_9->ip_mscount = 0;
    VAR_9->ip_messages.imq_seqno = 0;
    FUNC_6(VAR_9);
    return VAR_5;

   case 136:
    FUNC_12(
     VAR_6->msgh_remote_port,
     (mach_port_mscount_t)
     ((mach_no_senders_notification_t *)
      VAR_6)->not_count);
    VAR_7->msgh_remote_port = VAR_3;
    return VAR_5;






   case 144:
    FUNC_2(VAR_6);
    return VAR_5;

   case 133:
    FUNC_13(VAR_6);
    return VAR_5;

   }
  break;

  case 130:
  case 129:
  case 128:
  case 132:
  break;

  default:
  return VAR_0;
 }
 switch (FUNC_4(VAR_9)) {
  case 137:
  {
   return FUNC_11(VAR_6);
  }

  default:
                return VAR_0;
        }
}
