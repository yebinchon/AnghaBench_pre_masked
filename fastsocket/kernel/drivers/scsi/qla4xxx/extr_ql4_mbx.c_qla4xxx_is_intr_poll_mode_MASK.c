
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct scsi_qla_host *VAR_5)
{
 int VAR_6 = 1;

 if (FUNC_0(VAR_5)) {
  if (FUNC_1(VAR_3, &VAR_5->flags) &&
      FUNC_1(VAR_0, &VAR_5->flags))
   VAR_6 = 0;
 } else {
  if (FUNC_1(VAR_3, &VAR_5->flags) &&
      FUNC_1(VAR_2, &VAR_5->flags) &&
      FUNC_1(VAR_4, &VAR_5->flags) &&
      !FUNC_1(VAR_1, &VAR_5->flags))
   VAR_6 = 0;
 }

 return VAR_6;
}
