
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int scsi_qla_host_t ;
typedef int int32_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int *,int ,char*) ;
 int FUNC_2 (int) ;

void
FUNC_3(uint32_t VAR_0, scsi_qla_host_t *VAR_1, int32_t VAR_2,
 uint8_t *VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;
 uint8_t VAR_6;

 if (!FUNC_2(VAR_0))
  return;

 FUNC_1(VAR_0, VAR_1, VAR_2, " 0   1   2   3   4   5   6   7   8   "
     "9  Ah  Bh  Ch  Dh  Eh  Fh\n");
 FUNC_1(VAR_0, VAR_1, VAR_2, "----------------------------------"
     "----------------------------\n");

 FUNC_1(VAR_0, VAR_1, VAR_2, " ");
 for (VAR_5 = 0; VAR_5 < VAR_4;) {
  VAR_6 = *VAR_3++;
  FUNC_0("%02x", (uint32_t) VAR_6);
  VAR_5++;
  if (!(VAR_5 % 16))
   FUNC_0("\n");
  else
   FUNC_0("  ");
 }
 if (VAR_5 % 16)
  FUNC_1(VAR_0, VAR_1, VAR_2, "\n");
}
