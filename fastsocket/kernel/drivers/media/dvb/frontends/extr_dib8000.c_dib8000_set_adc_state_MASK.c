
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib8000_state {int dummy; } ;
typedef enum dibx000_adc_states { ____Placeholder_dibx000_adc_states } dibx000_adc_states ;
 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dib8000_state *VAR_0, enum dibx000_adc_states VAR_1)
{
 int VAR_2 = 0;
 u16 VAR_3 = FUNC_0(VAR_0, 907), VAR_4 = FUNC_0(VAR_0, 908);

 switch (VAR_1) {
 case 130:
  VAR_4 |= (1 << 1) | (1 << 0);
  VAR_2 |= FUNC_1(VAR_0, 908, VAR_4);
  VAR_4 &= ~(1 << 1);
  break;

 case 131:
  VAR_4 |= (1 << 1) | (1 << 0);
  break;

 case 132:
  VAR_3 &= 0x0fff;
  VAR_4 &= 0x0003;
  break;

 case 133:
  VAR_3 |= (1 << 14) | (1 << 13) | (1 << 12);
  VAR_4 |= (1 << 5) | (1 << 4) | (1 << 3) | (1 << 2);
  break;

 case 128:
  VAR_3 &= ~(1 << 15);
  break;

 case 129:
  VAR_3 |= (1 << 15);
  break;

 default:
  break;
 }

 VAR_2 |= FUNC_1(VAR_0, 907, VAR_3);
 VAR_2 |= FUNC_1(VAR_0, 908, VAR_4);

 return VAR_2;
}
