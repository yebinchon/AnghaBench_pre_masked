
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvbios_disp {int data; } ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nouveau_bios*,int) ;
 int FUNC_1 (struct nouveau_bios*,int,int*,int*,int*) ;

u16
FUNC_2(struct nouveau_bios *VAR_0, u8 VAR_1,
    u8 *VAR_2, u8 *VAR_3, u8 *VAR_4,
    struct nvbios_disp *VAR_5)
{
 u16 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_6 && *VAR_3 >= 2) {
  VAR_5->data = FUNC_0(VAR_0, VAR_6 + 0);
  return VAR_6;
 }
 return 0x0000;
}
