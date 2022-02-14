
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct scsi_qla_host*,char*) ;
 scalar_t__ FUNC_3 (struct scsi_qla_host*,int,int*) ;
 scalar_t__ FUNC_4 (struct scsi_qla_host*) ;
 int FUNC_5 (struct scsi_qla_host*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static uint32_t *
FUNC_7(struct scsi_qla_host *VAR_1, uint32_t *VAR_2,
    uint32_t VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6;
 int VAR_7 = 0;
 while ((FUNC_4(VAR_1) != 0) && (VAR_7 < 50000)) {
  FUNC_6(100);
  FUNC_1();
  VAR_7++;
 }
 if (VAR_7 >= 50000) {
  FUNC_2(VAR_0, VAR_1, "ROM lock failed\n");
  return VAR_2;
 }


 for (VAR_5 = 0; VAR_5 < VAR_4/4; VAR_5++, VAR_3 += 4) {
  if (FUNC_3(VAR_1, VAR_3, &VAR_6)) {
   FUNC_2(VAR_0, VAR_1,
       "Do ROM fast read failed\n");
   goto done_read;
  }
  VAR_2[VAR_5] = FUNC_0(VAR_6);
 }

done_read:
 FUNC_5(VAR_1);
 return VAR_2;
}
