
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_rtc {int periodic_freq; int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sh_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, int VAR_4)
{
 struct sh_rtc *VAR_5 = FUNC_0(VAR_3);
 int VAR_6, VAR_7 = 0;

 FUNC_1(&VAR_5->lock);
 VAR_6 = VAR_5->periodic_freq & VAR_2;

 switch (VAR_4) {
 case 0:
  VAR_5->periodic_freq = 0x00;
  break;
 case 1:
  VAR_5->periodic_freq = 0x60;
  break;
 case 2:
  VAR_5->periodic_freq = 0x50;
  break;
 case 4:
  VAR_5->periodic_freq = 0x40;
  break;
 case 8:
  VAR_5->periodic_freq = 0x30 | VAR_1;
  break;
 case 16:
  VAR_5->periodic_freq = 0x30;
  break;
 case 32:
  VAR_5->periodic_freq = 0x20 | VAR_1;
  break;
 case 64:
  VAR_5->periodic_freq = 0x20;
  break;
 case 128:
  VAR_5->periodic_freq = 0x10 | VAR_1;
  break;
 case 256:
  VAR_5->periodic_freq = 0x10;
  break;
 default:
  VAR_7 = -VAR_0;
 }

 if (VAR_7 == 0)
  VAR_5->periodic_freq |= VAR_6;

 FUNC_2(&VAR_5->lock);
 return VAR_7;
}
