
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dummy; } ;
struct platform_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 struct rtc_device* FUNC_0 (struct platform_device*) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rtc_device*,int,unsigned long) ;
 int VAR_10 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct platform_device* FUNC_6 (void*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_11, void *VAR_12)
{
 struct platform_device *VAR_13 = FUNC_6(VAR_12);
 struct rtc_device *VAR_14 = FUNC_0(VAR_13);
 unsigned int VAR_15;
 unsigned long VAR_16 = 0;

 FUNC_4(&VAR_10);

 VAR_15 = VAR_4;

 VAR_4 = 0;
 VAR_4 = (VAR_5 | VAR_7) & (VAR_15 >> 2);


 if (VAR_15 & VAR_5)
  VAR_15 &= ~VAR_6;
 VAR_4 = VAR_15 & (VAR_6 | VAR_8);


 if (VAR_15 & VAR_5)
  VAR_16 |= VAR_1 | VAR_2;
 if (VAR_15 & VAR_7)
  VAR_16 |= VAR_3 | VAR_2;

 FUNC_3(VAR_14, 1, VAR_16);

 if (VAR_15 & VAR_5 && FUNC_1(&VAR_9))
  FUNC_2(&VAR_9);

 FUNC_5(&VAR_10);

 return VAR_0;
}
