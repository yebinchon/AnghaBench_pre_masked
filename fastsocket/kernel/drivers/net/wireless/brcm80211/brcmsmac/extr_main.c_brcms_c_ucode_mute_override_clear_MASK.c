
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_hardware {scalar_t__ mute_override; int maccontrol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcms_hardware*) ;

__attribute__((used)) static void FUNC_1(struct brcms_hardware *VAR_2)
{
 if (VAR_2->mute_override == 0)
  return;

 VAR_2->mute_override = 0;




 if ((VAR_2->maccontrol & (VAR_0 | VAR_1)) == VAR_1)
  return;

 FUNC_0(VAR_2);
}
