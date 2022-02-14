
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ period; scalar_t__ offset; scalar_t__ width; scalar_t__ iu; scalar_t__ dt; scalar_t__ qas; int check_nego; } ;
struct sym_tcb {TYPE_1__ tprint; struct scsi_target* starget; } ;
struct scsi_target {int dummy; } ;


 int FUNC_0 (struct scsi_target*) ;
 scalar_t__ FUNC_1 (struct scsi_target*) ;
 scalar_t__ FUNC_2 (struct scsi_target*) ;
 scalar_t__ FUNC_3 (struct scsi_target*) ;
 scalar_t__ FUNC_4 (struct scsi_target*) ;
 scalar_t__ FUNC_5 (struct scsi_target*) ;
 scalar_t__ FUNC_6 (struct scsi_target*) ;

__attribute__((used)) static void FUNC_7(struct sym_tcb *VAR_0)
{
 struct scsi_target *VAR_1 = VAR_0->starget;

 if (VAR_0->tprint.period != FUNC_4(VAR_1) ||
     VAR_0->tprint.offset != FUNC_3(VAR_1) ||
     VAR_0->tprint.width != FUNC_6(VAR_1) ||
     VAR_0->tprint.iu != FUNC_2(VAR_1) ||
     VAR_0->tprint.dt != FUNC_1(VAR_1) ||
     VAR_0->tprint.qas != FUNC_5(VAR_1) ||
     !VAR_0->tprint.check_nego) {
  VAR_0->tprint.period = FUNC_4(VAR_1);
  VAR_0->tprint.offset = FUNC_3(VAR_1);
  VAR_0->tprint.width = FUNC_6(VAR_1);
  VAR_0->tprint.iu = FUNC_2(VAR_1);
  VAR_0->tprint.dt = FUNC_1(VAR_1);
  VAR_0->tprint.qas = FUNC_5(VAR_1);
  VAR_0->tprint.check_nego = 1;

  FUNC_0(VAR_1);
 }
}
