
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_lun {int dummy; } ;
struct bfa_tskim_s {int tm_cmnd; int lun; } ;
typedef int lun ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct scsi_lun*,int) ;

__attribute__((used)) static bfa_boolean_t
FUNC_2(struct bfa_tskim_s *VAR_2, struct scsi_lun VAR_3)
{
 switch (VAR_2->tm_cmnd) {
 case 128:
  return VAR_1;

 case 132:
 case 130:
 case 129:
 case 131:
  return !FUNC_1(&VAR_2->lun, &VAR_3, sizeof(VAR_3));

 default:
  FUNC_0(1);
 }

 return VAR_0;
}
