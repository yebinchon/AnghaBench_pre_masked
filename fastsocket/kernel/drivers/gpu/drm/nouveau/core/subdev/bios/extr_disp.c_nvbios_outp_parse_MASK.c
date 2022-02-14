
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvbios_outp {int mask; int* script; void* type; } ;
struct nouveau_bios {int dummy; } ;


 void* FUNC_0 (struct nouveau_bios*,int) ;
 int FUNC_1 (struct nouveau_bios*,int) ;
 int FUNC_2 (struct nouveau_bios*,int,int*,int*,int*,int*) ;

u16
FUNC_3(struct nouveau_bios *VAR_0, u8 VAR_1,
    u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5,
    struct nvbios_outp *VAR_6)
{
 u16 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7 && *VAR_3 >= 0x0a) {
  VAR_6->type = FUNC_0(VAR_0, VAR_7 + 0x00);
  VAR_6->mask = FUNC_1(VAR_0, VAR_7 + 0x02);
  if (*VAR_2 <= 0x20)
   VAR_6->mask |= 0x00c0;
  VAR_6->script[0] = FUNC_0(VAR_0, VAR_7 + 0x06);
  VAR_6->script[1] = FUNC_0(VAR_0, VAR_7 + 0x08);
  VAR_6->script[2] = 0x0000;
  if (*VAR_3 >= 0x0c)
   VAR_6->script[2] = FUNC_0(VAR_0, VAR_7 + 0x0a);
  return VAR_7;
 }
 return 0x0000;
}
