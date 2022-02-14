
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_rtc {unsigned int periodic_freq; int lock; scalar_t__ regbase; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct sh_rtc* FUNC_0 (struct device*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_5, int VAR_6)
{
 struct sh_rtc *VAR_7 = FUNC_0(VAR_5);
 unsigned int VAR_8;

 FUNC_2(&VAR_7->lock);

 VAR_8 = FUNC_1(VAR_7->regbase + VAR_2);

 if (VAR_6) {
  VAR_7->periodic_freq |= VAR_1;
  VAR_8 &= ~VAR_3;
  VAR_8 |= (VAR_7->periodic_freq & ~VAR_0);
 } else {
  VAR_7->periodic_freq &= ~VAR_1;
  VAR_8 &= ~(VAR_4 | VAR_3);
 }

 FUNC_4(VAR_8, VAR_7->regbase + VAR_2);

 FUNC_3(&VAR_7->lock);

 return 0;
}
