
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ card_type; int chipset; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (void*) ;
 int FUNC_1 (void*,char*) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (void*,int,int) ;

u8
FUNC_4(void *VAR_1)
{
 if (FUNC_0(VAR_1)->card_type < VAR_0) {
  if (FUNC_0(VAR_1)->chipset == 0x11) {
   u32 VAR_2 = FUNC_2(VAR_1, 0x001084) & 0x10000000;
   if (VAR_2 == 0) {
    u8 VAR_3 = FUNC_3(VAR_1, 0, 0x28) & 0x80;
    u8 VAR_4 = FUNC_3(VAR_1, 0, 0x33) & 0x01;
    u8 VAR_5 = FUNC_3(VAR_1, 1, 0x28) & 0x80;
    u8 VAR_6 = FUNC_3(VAR_1, 1, 0x33) & 0x01;
    if (VAR_3 && !VAR_4) return 0x00;
    if (VAR_5 && !VAR_6) return 0x03;
    if (VAR_3) return 0x00;
    if (VAR_5) return 0x03;
    return 0x00;
   }
   return 0x04;
  }

  return FUNC_3(VAR_1, 0, 0x44);
 }

 FUNC_1(VAR_1, "rdvgaowner after nv4x\n");
 return 0x00;
}
