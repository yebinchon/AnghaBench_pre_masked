
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ushort ;
typedef void* uchar ;
struct TYPE_16__ {int iop_base; } ;
struct TYPE_12__ {int sg_queue_cnt; void* data_cnt; void* data_addr; int cntl; } ;
struct TYPE_15__ {int next_sg_index; TYPE_2__ q1; scalar_t__ remain_sg_entry_cnt; TYPE_4__* sg_head; } ;
struct TYPE_14__ {scalar_t__ entry_cnt; int queue_cnt; TYPE_1__* sg_list; } ;
struct TYPE_13__ {int seq_no; int sg_list_cnt; int sg_cur_list_cnt; void* q_no; int cntl; void* sg_head_qp; } ;
struct TYPE_11__ {scalar_t__ bytes; scalar_t__ addr; } ;
typedef int PortAddr ;
typedef TYPE_3__ ASC_SG_LIST_Q ;
typedef TYPE_4__ ASC_SG_HEAD ;
typedef TYPE_5__ ASC_SCSI_Q ;
typedef void* ASC_PADDR ;
typedef TYPE_6__ ASC_DVC_VAR ;
typedef void* ASC_DCNT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,void**,int) ;
 int FUNC_2 (int ,int,void**,int) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*,void*) ;
 void* FUNC_4 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_5(ASC_DVC_VAR *VAR_9, ASC_SCSI_Q *VAR_10, uchar VAR_11)
{
 int VAR_12;
 int VAR_13;
 ASC_SG_HEAD *VAR_14;
 ASC_SG_LIST_Q VAR_15;
 ASC_DCNT VAR_16;
 ASC_DCNT VAR_17;
 PortAddr VAR_18;
 ushort VAR_19;
 ushort VAR_20;
 ushort VAR_21;
 ushort VAR_22;
 uchar VAR_23;

 VAR_18 = VAR_9->iop_base;
 VAR_14 = VAR_10->sg_head;
 VAR_16 = VAR_10->q1.data_addr;
 VAR_17 = VAR_10->q1.data_cnt;
 VAR_10->q1.data_addr = (ASC_PADDR) VAR_14->sg_list[0].addr;
 VAR_10->q1.data_cnt = (ASC_DCNT) VAR_14->sg_list[0].bytes;
  VAR_21 = VAR_14->entry_cnt - 1;



 if (VAR_21 != 0) {
  VAR_10->q1.cntl |= VAR_8;
  VAR_22 = FUNC_0(VAR_11);
  VAR_20 = 1;
  VAR_10->q1.sg_queue_cnt = VAR_14->queue_cnt;
  VAR_15.sg_head_qp = VAR_11;
  VAR_15.cntl = VAR_6;
  for (VAR_13 = 0; VAR_13 < VAR_14->queue_cnt; VAR_13++) {
   VAR_15.seq_no = VAR_13 + 1;
   if (VAR_21 > VAR_4) {
    VAR_19 = (uchar)(VAR_4 * 2);
    VAR_21 -= VAR_4;
    if (VAR_13 == 0) {
     VAR_15.sg_list_cnt =
         VAR_4;
     VAR_15.sg_cur_list_cnt =
         VAR_4;
    } else {
     VAR_15.sg_list_cnt =
         VAR_4 - 1;
     VAR_15.sg_cur_list_cnt =
         VAR_4 - 1;
    }
   } else {
     VAR_15.cntl |= VAR_5;



    VAR_19 = VAR_21 << 1;
    if (VAR_13 == 0) {
     VAR_15.sg_list_cnt = VAR_21;
     VAR_15.sg_cur_list_cnt =
         VAR_21;
    } else {
     VAR_15.sg_list_cnt =
         VAR_21 - 1;
     VAR_15.sg_cur_list_cnt =
         VAR_21 - 1;
    }
    VAR_21 = 0;
   }
   VAR_23 = FUNC_4(VAR_18,
        (ushort)(VAR_22 +
          VAR_1));
   VAR_15.q_no = VAR_23;
   VAR_22 = FUNC_0(VAR_23);
   FUNC_2(VAR_18,
      VAR_22 + VAR_2,
      (uchar *)&VAR_15,
      sizeof(ASC_SG_LIST_Q) >> 1);
   FUNC_1(VAR_18,
       VAR_22 + VAR_3,
       (uchar *)&VAR_14->
       sg_list[VAR_20],
       VAR_19);
   VAR_20 += VAR_4;
   VAR_10->next_sg_index = VAR_20;
  }
 } else {
  VAR_10->q1.cntl &= ~VAR_8;
 }
 VAR_12 = FUNC_3(VAR_9, VAR_10, VAR_11);
 VAR_10->q1.data_addr = VAR_16;
 VAR_10->q1.data_cnt = VAR_17;
 return (VAR_12);
}
