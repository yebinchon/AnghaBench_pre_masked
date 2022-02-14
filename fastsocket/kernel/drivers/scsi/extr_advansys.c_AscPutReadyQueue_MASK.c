
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ushort ;
typedef int uchar ;
struct TYPE_11__ {int init_sdtr; int sdtr_done; int max_sdtr_index; int use_tagged_qng; int * sdtr_period_tbl; int iop_base; } ;
struct TYPE_9__ {int target_id; scalar_t__ q_no; int cntl; int status; } ;
struct TYPE_8__ {int cdb_len; int tag_code; int target_ix; } ;
struct TYPE_10__ {TYPE_2__ q1; TYPE_1__ q2; scalar_t__ cdbptr; } ;
typedef int PortAddr ;
typedef TYPE_3__ ASC_SCSI_Q ;
typedef int ASC_SCSIQ_2 ;
typedef int ASC_SCSIQ_1 ;
typedef TYPE_4__ ASC_DVC_VAR ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int*,int) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_7(ASC_DVC_VAR *VAR_8, ASC_SCSI_Q *VAR_9, uchar VAR_10)
{
 ushort VAR_11;
 uchar VAR_12;
 uchar VAR_13;
 uchar VAR_14;
 uchar VAR_15;
 PortAddr VAR_16;

 VAR_16 = VAR_8->iop_base;
 if (((VAR_8->init_sdtr & VAR_9->q1.target_id) != 0) &&
     ((VAR_8->sdtr_done & VAR_9->q1.target_id) == 0)) {
  VAR_12 = FUNC_1(VAR_9->q2.target_ix);
  VAR_13 = FUNC_2(VAR_16, VAR_12);
  VAR_14 =
      (VAR_13 >> 4) & (VAR_8->max_sdtr_index - 1);
  VAR_15 = VAR_13 & VAR_3;
  FUNC_4(VAR_8,
         VAR_8->sdtr_period_tbl[VAR_14],
         VAR_15);
  VAR_9->q1.cntl |= VAR_5;
 }
 VAR_11 = FUNC_0(VAR_10);
 if ((VAR_9->q1.target_id & VAR_8->use_tagged_qng) == 0) {
  VAR_9->q2.tag_code &= ~VAR_4;
 }
 VAR_9->q1.status = VAR_6;
 FUNC_3(VAR_16,
    VAR_11 + VAR_1,
    (uchar *)VAR_9->cdbptr, VAR_9->q2.cdb_len >> 1);

 FUNC_6(VAR_16,
      VAR_11 + VAR_2,
      (uchar *)&VAR_9->q1.cntl,
      ((sizeof(ASC_SCSIQ_1) + sizeof(ASC_SCSIQ_2)) / 2) - 1);
 FUNC_5(VAR_16,
    (ushort)(VAR_11 + (ushort)VAR_0),
    (ushort)(((ushort)VAR_9->q1.
       q_no << 8) | (ushort)VAR_7));
 return 1;
}
