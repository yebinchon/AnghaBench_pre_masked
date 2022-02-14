
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvbios_xpio {void* flags; void* addr; void* type; } ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nouveau_bios*,int,int*,int*,int*,int*) ;
 void* FUNC_1 (struct nouveau_bios*,int) ;

u16
FUNC_2(struct nouveau_bios *VAR_0, u8 VAR_1,
        u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5,
        struct nvbios_xpio *VAR_6)
{
 u16 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7 && *VAR_5 >= 6) {
  VAR_6->type = FUNC_1(VAR_0, VAR_7 + 0x04);
  VAR_6->addr = FUNC_1(VAR_0, VAR_7 + 0x05);
  VAR_6->flags = FUNC_1(VAR_0, VAR_7 + 0x06);
 }
 return 0x0000;
}
