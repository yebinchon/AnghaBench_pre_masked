
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvbios_dpcfg {void* unk; void* pre; void* drv; } ;
struct nouveau_bios {int dummy; } ;


 void* FUNC_0 (struct nouveau_bios*,int) ;
 int FUNC_1 (struct nouveau_bios*,int,int,int*,int*,int*,int*) ;

u16
FUNC_2(struct nouveau_bios *VAR_0, u16 VAR_1, u8 VAR_2,
     u8 *VAR_3, u8 *VAR_4, u8 *VAR_5, u8 *VAR_6,
     struct nvbios_dpcfg *VAR_7)
{
 u16 VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8) {
  switch (*VAR_3) {
  case 0x21:
   VAR_7->drv = FUNC_0(VAR_0, VAR_8 + 0x02);
   VAR_7->pre = FUNC_0(VAR_0, VAR_8 + 0x03);
   VAR_7->unk = FUNC_0(VAR_0, VAR_8 + 0x04);
   break;
  case 0x30:
  case 0x40:
   VAR_7->drv = FUNC_0(VAR_0, VAR_8 + 0x01);
   VAR_7->pre = FUNC_0(VAR_0, VAR_8 + 0x02);
   VAR_7->unk = FUNC_0(VAR_0, VAR_8 + 0x03);
   break;
  default:
   VAR_8 = 0x0000;
   break;
  }
 }
 return VAR_8;
}
