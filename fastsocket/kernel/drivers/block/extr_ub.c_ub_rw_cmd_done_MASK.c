
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_scsi_cmd {scalar_t__ act_len; scalar_t__ len; scalar_t__ key; int error; struct ub_request* back; struct ub_lun* lun; } ;
struct ub_request {struct request* rq; } ;
struct ub_lun {TYPE_1__* disk; } ;
struct ub_dev {scalar_t__* top_sense; } ;
struct request {scalar_t__ cmd_type; scalar_t__ resid_len; int sense_len; int sense; } ;
struct TYPE_2__ {int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__*,int ) ;
 int FUNC_2 (struct request*,unsigned int) ;
 int FUNC_3 (struct ub_lun*,struct ub_scsi_cmd*) ;
 scalar_t__ FUNC_4 (struct ub_dev*,struct ub_lun*,struct ub_request*,struct ub_scsi_cmd*) ;

__attribute__((used)) static void FUNC_5(struct ub_dev *VAR_7, struct ub_scsi_cmd *VAR_8)
{
 struct ub_lun *VAR_9 = VAR_8->lun;
 struct ub_request *VAR_10 = VAR_8->back;
 struct request *VAR_11;
 unsigned int VAR_12;

 VAR_11 = VAR_10->rq;

 if (VAR_8->error == 0) {
  if (VAR_11->cmd_type == VAR_3) {
   if (VAR_8->act_len >= VAR_11->resid_len)
    VAR_11->resid_len = 0;
   else
    VAR_11->resid_len -= VAR_8->act_len;
   VAR_12 = 0;
  } else {
   if (VAR_8->act_len != VAR_8->len) {
    VAR_12 = VAR_4;
   } else {
    VAR_12 = 0;
   }
  }
 } else {
  if (VAR_11->cmd_type == VAR_3) {

   FUNC_1(VAR_11->sense, VAR_7->top_sense, VAR_5);
   VAR_11->sense_len = VAR_5;
   if (VAR_7->top_sense[0] != 0)
    VAR_12 = VAR_4;
   else
    VAR_12 = VAR_0 << 16;
  } else {
   if (VAR_8->error == -VAR_1 &&
       (VAR_8->key == 0 ||
        VAR_8->key == VAR_2 ||
        VAR_8->key == VAR_6)) {
    if (FUNC_4(VAR_7, VAR_9, VAR_10, VAR_8) == 0)
     return;
   }
   VAR_12 = VAR_4;
  }
 }

 VAR_10->rq = ((void*)0);

 FUNC_3(VAR_9, VAR_8);
 FUNC_2(VAR_11, VAR_12);
 FUNC_0(VAR_9->disk->queue);
}
