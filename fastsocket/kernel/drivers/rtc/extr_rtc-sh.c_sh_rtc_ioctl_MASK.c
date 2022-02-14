
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_rtc {int periodic_freq; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;




 struct sh_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, unsigned int VAR_3, unsigned long VAR_4)
{
 struct sh_rtc *VAR_5 = FUNC_0(VAR_2);
 unsigned int VAR_6 = 0;

 switch (VAR_3) {
 case 131:
 case 130:
  FUNC_1(VAR_2, VAR_3 == 130);
  break;
 case 129:
  VAR_5->periodic_freq &= ~VAR_1;
  FUNC_2(VAR_2, 0);
  break;
 case 128:
  VAR_5->periodic_freq |= VAR_1;
  FUNC_2(VAR_2, 1);
  break;
 default:
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
