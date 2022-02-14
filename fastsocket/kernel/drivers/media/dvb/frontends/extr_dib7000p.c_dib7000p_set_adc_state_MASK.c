
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int disable_sample_and_hold; int enable_current_mirror; } ;
struct dib7000p_state {TYPE_1__ cfg; } ;
typedef enum dibx000_adc_states { ____Placeholder_dibx000_adc_states } dibx000_adc_states ;
 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (struct dib7000p_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dib7000p_state *VAR_0, enum dibx000_adc_states VAR_1)
{
 u16 VAR_2 = FUNC_0(VAR_0, 908),
        VAR_3 = FUNC_0(VAR_0, 909);

 switch (VAR_1) {
  case 130:
   VAR_3 |= (1 << 1) | (1 << 0);
   FUNC_1(VAR_0, 909, VAR_3);
   VAR_3 &= ~(1 << 1);
   break;

  case 131:
   VAR_3 |= (1 << 1) | (1 << 0);
   break;

  case 132:
   VAR_2 &= 0x0fff;
   VAR_3 &= 0x0003;
   break;

  case 133:
   VAR_2 |= (1 << 14) | (1 << 13) | (1 << 12);
   VAR_3 |= (1 << 5) | (1 << 4) | (1 << 3) | (1 << 2);
   break;

  case 128:
   VAR_2 &= ~(1 << 15);
   break;

  case 129:
   VAR_2 |= (1 << 15);
   break;

  default:
   break;
 }



 VAR_3 |= (VAR_0->cfg.disable_sample_and_hold & 1) << 4;
 VAR_2 |= (VAR_0->cfg.enable_current_mirror & 1) << 7;

 FUNC_1(VAR_0, 908, VAR_2);
 FUNC_1(VAR_0, 909, VAR_3);
}
