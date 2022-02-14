
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_hardware {scalar_t__ mute_override; scalar_t__ wake_override; scalar_t__ suspended_fifos; scalar_t__ maccontrol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcms_hardware*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct brcms_hardware *VAR_2)
{

 VAR_2->maccontrol = 0;
 VAR_2->suspended_fifos = 0;
 VAR_2->wake_override = 0;
 VAR_2->mute_override = 0;
 FUNC_0(VAR_2, ~0, VAR_0 | VAR_1);
}
