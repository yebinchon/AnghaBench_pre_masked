
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct nvbios_dpout {void** script; void* lnkcmp; void* flags; void* mask; void* type; } ;
struct nouveau_bios {int dummy; } ;


 void* FUNC_0 (struct nouveau_bios*,int) ;
 void* FUNC_1 (struct nouveau_bios*,int) ;
 int FUNC_2 (struct nouveau_bios*,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;

u16
FUNC_3(struct nouveau_bios *VAR_0, u8 VAR_1,
     u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5,
     struct nvbios_dpout *VAR_6)
{
 u16 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7 && *VAR_2) {
  VAR_6->type = FUNC_1(VAR_0, VAR_7 + 0x00);
  VAR_6->mask = FUNC_1(VAR_0, VAR_7 + 0x02);
  switch (*VAR_2) {
  case 0x21:
  case 0x30:
   VAR_6->flags = FUNC_0(VAR_0, VAR_7 + 0x05);
   VAR_6->script[0] = FUNC_1(VAR_0, VAR_7 + 0x06);
   VAR_6->script[1] = FUNC_1(VAR_0, VAR_7 + 0x08);
   VAR_6->lnkcmp = FUNC_1(VAR_0, VAR_7 + 0x0a);
   VAR_6->script[2] = FUNC_1(VAR_0, VAR_7 + 0x0c);
   VAR_6->script[3] = FUNC_1(VAR_0, VAR_7 + 0x0e);
   VAR_6->script[4] = FUNC_1(VAR_0, VAR_7 + 0x10);
   break;
  case 0x40:
   VAR_6->flags = FUNC_0(VAR_0, VAR_7 + 0x04);
   VAR_6->script[0] = FUNC_1(VAR_0, VAR_7 + 0x05);
   VAR_6->script[1] = FUNC_1(VAR_0, VAR_7 + 0x07);
   VAR_6->lnkcmp = FUNC_1(VAR_0, VAR_7 + 0x09);
   VAR_6->script[2] = FUNC_1(VAR_0, VAR_7 + 0x0b);
   VAR_6->script[3] = FUNC_1(VAR_0, VAR_7 + 0x0d);
   VAR_6->script[4] = FUNC_1(VAR_0, VAR_7 + 0x0f);
   break;
  default:
   VAR_7 = 0x0000;
   break;
  }
 }
 return VAR_7;
}
