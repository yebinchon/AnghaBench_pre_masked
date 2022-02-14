
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct nvbios_ocfg {scalar_t__ match; } ;
struct nouveau_bios {int dummy; } ;


 scalar_t__ FUNC_0 (struct nouveau_bios*,scalar_t__,int ,int *,int *,int *,int *,struct nvbios_ocfg*) ;

u16
FUNC_1(struct nouveau_bios *VAR_0, u16 VAR_1, u16 VAR_2,
    u8 *VAR_3, u8 *VAR_4, u8 *VAR_5, u8 *VAR_6,
    struct nvbios_ocfg *VAR_7)
{
 u16 VAR_8, VAR_9 = 0;
 while ((VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_9++, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7))) {
  if (VAR_7->match == VAR_2)
   break;
 }
 return VAR_8;
}
