
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct nvbios_dpout {scalar_t__ type; scalar_t__ mask; } ;
struct nouveau_bios {int dummy; } ;


 scalar_t__ FUNC_0 (struct nouveau_bios*,int ,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,struct nvbios_dpout*) ;

u16
FUNC_1(struct nouveau_bios *VAR_0, u16 VAR_1, u16 VAR_2,
     u8 *VAR_3, u8 *VAR_4, u8 *VAR_5, u8 *VAR_6,
     struct nvbios_dpout *VAR_7)
{
 u16 VAR_8, VAR_9 = 0;
 while ((VAR_8 = FUNC_0(VAR_0, VAR_9++, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7)) || *VAR_3) {
  if (VAR_8 && VAR_7->type == VAR_1) {
   if ((VAR_7->mask & VAR_2) == VAR_2)
    break;
  }
 }
 return VAR_8;
}
