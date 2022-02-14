
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sym_trans {int renego; int period; scalar_t__ qas; scalar_t__ dt; scalar_t__ iu; scalar_t__ width; scalar_t__ offset; scalar_t__ check_nego; } ;
struct sym_tcb {struct sym_ccb* nego_cp; struct sym_trans tgoal; struct scsi_target* starget; } ;
struct sym_hcb {struct sym_tcb* target; } ;
struct sym_ccb {size_t target; int nego_status; } ;
struct scsi_target {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int *,int,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct sym_hcb*,struct scsi_target*,struct sym_trans*) ;
 int FUNC_4 (struct sym_hcb*,size_t,char*,int *) ;

__attribute__((used)) static int FUNC_5(struct sym_hcb *VAR_5, struct sym_ccb *VAR_6, u_char *VAR_7)
{
 struct sym_tcb *VAR_8 = &VAR_5->target[VAR_6->target];
 struct scsi_target *VAR_9 = VAR_8->starget;
 struct sym_trans *VAR_10 = &VAR_8->tgoal;
 int VAR_11 = 0;
 int VAR_12;

 FUNC_3(VAR_5, VAR_9, VAR_10);





 if (VAR_10->renego == 130 || (VAR_10->offset &&
     (VAR_10->iu || VAR_10->dt || VAR_10->qas || (VAR_10->period < 0xa)))) {
  VAR_12 = 130;
 } else if (VAR_10->renego == 128 || VAR_10->width) {
  VAR_12 = 128;
 } else if (VAR_10->renego == 129 || VAR_10->offset) {
  VAR_12 = 129;
 } else {
  VAR_10->check_nego = 0;
  VAR_12 = 0;
 }

 switch (VAR_12) {
 case 129:
  VAR_11 += FUNC_1(VAR_7 + VAR_11, VAR_10->period,
    VAR_10->offset);
  break;
 case 128:
  VAR_11 += FUNC_2(VAR_7 + VAR_11, VAR_10->width);
  break;
 case 130:
  VAR_11 += FUNC_0(VAR_7 + VAR_11, VAR_10->period,
    VAR_10->offset, VAR_10->width,
    (VAR_10->iu ? VAR_3 : 0) |
     (VAR_10->dt ? VAR_2 : 0) |
     (VAR_10->qas ? VAR_4 : 0));
  break;
 }

 VAR_6->nego_status = VAR_12;

 if (VAR_12) {
  VAR_8->nego_cp = VAR_6;
  if (VAR_0 & VAR_1) {
   FUNC_4(VAR_5, VAR_6->target,
       VAR_12 == 129 ? "sync msgout" :
       VAR_12 == 128 ? "wide msgout" :
       "ppr msgout", VAR_7);
  }
 }

 return VAR_11;
}
