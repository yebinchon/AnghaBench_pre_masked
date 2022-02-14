
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcms_hardware {int maccontrol; } ;


 int FUNC_0 (struct brcms_hardware*) ;

void FUNC_1(struct brcms_hardware *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;

 if (VAR_2 & ~VAR_1)
  return;
 VAR_3 = VAR_0->maccontrol;
 VAR_4 = (VAR_3 & ~VAR_1) | VAR_2;


 if (VAR_4 == VAR_3)
  return;


 VAR_0->maccontrol = VAR_4;


 FUNC_0(VAR_0);
}
