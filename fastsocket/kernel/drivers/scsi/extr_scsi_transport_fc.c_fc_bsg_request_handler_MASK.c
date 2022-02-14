
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct request_queue {int queue_lock; } ;
struct request {int errors; struct fc_bsg_job* special; } ;
struct fc_rport {scalar_t__ port_state; int flags; } ;
struct fc_bsg_job {int request_len; int reply_len; TYPE_1__* reply; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef enum fc_dispatch_result { ____Placeholder_fc_dispatch_result } fc_dispatch_result ;
struct TYPE_2__ {int result; scalar_t__ reply_payload_rcv_len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct request*,int) ;
 struct request* FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request_queue*,struct Scsi_Host*,struct fc_bsg_job*) ;
 int FUNC_5 (struct fc_bsg_job*) ;
 int FUNC_6 (struct request_queue*,struct Scsi_Host*,struct fc_rport*,struct fc_bsg_job*) ;
 int FUNC_7 (struct Scsi_Host*,struct fc_rport*,struct request*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(struct request_queue *VAR_7, struct Scsi_Host *VAR_8,
         struct fc_rport *VAR_9, struct device *VAR_10)
{
 struct request *VAR_11;
 struct fc_bsg_job *VAR_12;
 enum fc_dispatch_result VAR_13;

 if (!FUNC_8(VAR_10))
  return;

 while (!FUNC_3(VAR_7)) {
  if (VAR_9 && (VAR_9->port_state == VAR_4) &&
      !(VAR_9->flags & VAR_6))
   break;

  VAR_11 = FUNC_2(VAR_7);
  if (!VAR_11)
   break;

  if (VAR_9 && (VAR_9->port_state != VAR_5)) {
   VAR_11->errors = -VAR_1;
   FUNC_11(VAR_7->queue_lock);
   FUNC_1(VAR_11, -VAR_1);
   FUNC_10(VAR_7->queue_lock);
   continue;
  }

  FUNC_11(VAR_7->queue_lock);

  VAR_13 = FUNC_7(VAR_8, VAR_9, VAR_11);
  if (VAR_13) {
   VAR_11->errors = VAR_13;
   FUNC_1(VAR_11, VAR_13);
   FUNC_10(VAR_7->queue_lock);
   continue;
  }

  VAR_12 = VAR_11->special;


  if (VAR_12->request_len < sizeof(uint32_t)) {
   FUNC_0(VAR_12->reply_len < sizeof(uint32_t));
   VAR_12->reply->reply_payload_rcv_len = 0;
   VAR_12->reply->result = -VAR_0;
   VAR_12->reply_len = sizeof(uint32_t);
   FUNC_5(VAR_12);
   FUNC_10(VAR_7->queue_lock);
   continue;
  }


  if (VAR_9)
   VAR_13 = FUNC_6(VAR_7, VAR_8, VAR_9, VAR_12);
  else
   VAR_13 = FUNC_4(VAR_7, VAR_8, VAR_12);


  if (VAR_13 == VAR_2)
   break;


  if (VAR_13 == VAR_3)
   FUNC_10(VAR_7->queue_lock);
 }

 FUNC_11(VAR_7->queue_lock);
 FUNC_9(VAR_10);
 FUNC_10(VAR_7->queue_lock);
}
