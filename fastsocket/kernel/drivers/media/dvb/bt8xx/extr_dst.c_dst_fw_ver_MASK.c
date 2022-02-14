
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dst_state {int* fw_version; int rxbuffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*,...) ;
 int FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 (struct dst_state*,int*,int) ;
 int FUNC_3 (int**,int *,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct dst_state *VAR_3)
{
 u8 VAR_4[] = { 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
 VAR_4[7] = FUNC_1(VAR_4, 7);
 if (FUNC_2(VAR_3, VAR_4, 8) < 0) {
  FUNC_0(VAR_2, VAR_1, 1, "Unsupported Command");
  return -1;
 }
 FUNC_3(&VAR_3->fw_version, &VAR_3->rxbuffer, 8);
 FUNC_0(VAR_2, VAR_0, 1, "Firmware Ver = %x.%x Build = %02x, on %x:%x, %x-%x-20%02x",
  VAR_3->fw_version[0] >> 4, VAR_3->fw_version[0] & 0x0f,
  VAR_3->fw_version[1],
  VAR_3->fw_version[5], VAR_3->fw_version[6],
  VAR_3->fw_version[4], VAR_3->fw_version[3], VAR_3->fw_version[2]);

 return 0;
}
