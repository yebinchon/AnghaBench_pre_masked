
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_16__ {int * cur_dvc_qng; int cur_total_qng; scalar_t__ last_q_shortage; int iop_base; } ;
struct TYPE_14__ {int q_no; } ;
struct TYPE_12__ {int target_ix; } ;
struct TYPE_15__ {TYPE_3__ q1; TYPE_2__* sg_head; TYPE_1__ q2; } ;
struct TYPE_13__ {int queue_cnt; } ;
typedef int PortAddr ;
typedef TYPE_4__ ASC_SCSI_Q ;
typedef TYPE_5__ ASC_DVC_VAR ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*,int) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7(ASC_DVC_VAR *VAR_1, ASC_SCSI_Q *VAR_2, uchar VAR_3)
{
 PortAddr VAR_4;
 uchar VAR_5;
 uchar VAR_6;
 uchar VAR_7;
 uchar VAR_8;
 int VAR_9;

 VAR_4 = VAR_1->iop_base;
 VAR_8 = VAR_2->q2.target_ix;
 VAR_7 = FUNC_0(VAR_8);
 VAR_9 = 0;
 VAR_5 = (uchar)FUNC_3(VAR_4);
 if (VAR_3 > 1) {
  VAR_6 = FUNC_2(VAR_4, VAR_5,
          (uchar)VAR_3);
  if (VAR_6 != VAR_0) {
   VAR_1->last_q_shortage = 0;
   VAR_2->sg_head->queue_cnt = VAR_3 - 1;
   VAR_2->q1.q_no = VAR_5;
   VAR_9 = FUNC_5(VAR_1, VAR_2,
           VAR_5);
  }
 } else if (VAR_3 == 1) {
  VAR_6 = FUNC_1(VAR_4, VAR_5);
  if (VAR_6 != VAR_0) {
   VAR_2->q1.q_no = VAR_5;
   VAR_9 = FUNC_4(VAR_1, VAR_2, VAR_5);
  }
 }
 if (VAR_9 == 1) {
  FUNC_6(VAR_4, VAR_6);
  VAR_1->cur_total_qng += VAR_3;
  VAR_1->cur_dvc_qng[VAR_7]++;
 }
 return VAR_9;
}
