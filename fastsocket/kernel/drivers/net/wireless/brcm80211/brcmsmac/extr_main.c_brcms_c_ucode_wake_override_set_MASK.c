
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcms_hardware {int maccontrol; scalar_t__ wake_override; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_hardware*) ;
 int FUNC_1 (struct brcms_hardware*) ;
 int FUNC_2 (scalar_t__,int ) ;

void FUNC_3(struct brcms_hardware *VAR_1,
     u32 VAR_2)
{
 if (VAR_1->wake_override || (VAR_1->maccontrol & VAR_0)) {
  FUNC_2(VAR_1->wake_override, VAR_2);
  return;
 }

 FUNC_2(VAR_1->wake_override, VAR_2);

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
