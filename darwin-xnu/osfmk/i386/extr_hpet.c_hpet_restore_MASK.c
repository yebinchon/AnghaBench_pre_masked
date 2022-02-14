
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int GEN_CONF; unsigned long long GINTR_STA; int MAIN_CNT; int TIM2_COMP; int TIM2_CONF; int TIM1_COMP; int TIM1_CONF; int TIM0_COMP; int TIM0_CONF; } ;
typedef TYPE_1__ hpetReg_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;

void
FUNC_1(void)
{
 hpetReg_t *VAR_4 = &VAR_3;
 hpetReg_t *VAR_5 = (hpetReg_t *) VAR_0;





 uint32_t *VAR_6 = (uint32_t *)(VAR_2 + 0x3404);
 uint32_t VAR_7 = *VAR_6;
 if(!(VAR_7 & VAR_1)) {
  FUNC_0("HPET memory is not enabled, "
      "enabling and assigning to 0xFED00000 (hope that's ok)\n");
  *VAR_6 = (VAR_7 & ~3) | VAR_1;
 }

 VAR_5->GEN_CONF = VAR_4->GEN_CONF & ~1;

 VAR_5->TIM0_CONF = VAR_4->TIM0_CONF;
 VAR_5->TIM0_COMP = VAR_4->TIM0_COMP;
 VAR_5->TIM1_CONF = VAR_4->TIM1_CONF;
 VAR_5->TIM1_COMP = VAR_4->TIM1_COMP;
 VAR_5->TIM2_CONF = VAR_4->TIM2_CONF;
 VAR_5->TIM2_COMP = VAR_4->TIM2_COMP;
 VAR_5->GINTR_STA = -1ULL;
 VAR_5->MAIN_CNT = VAR_4->MAIN_CNT;

 VAR_5->GEN_CONF = VAR_4->GEN_CONF;
}
