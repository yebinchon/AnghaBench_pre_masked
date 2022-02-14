
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa_rtc {int lock; int rtc; } ;
struct platform_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct pxa_rtc* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct pxa_rtc*,int ) ;
 int FUNC_2 (int ,int,unsigned long) ;
 int FUNC_3 (struct pxa_rtc*,int ,int) ;
 int FUNC_4 (struct pxa_rtc*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct platform_device* FUNC_7 (void*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_13, void *VAR_14)
{
 struct platform_device *VAR_15 = FUNC_7(VAR_14);
 struct pxa_rtc *VAR_16 = FUNC_0(VAR_15);
 u32 VAR_17;
 unsigned long VAR_18 = 0;

 FUNC_5(&VAR_16->lock);


 VAR_17 = FUNC_1(VAR_16, VAR_5);
 FUNC_3(VAR_16, VAR_5, VAR_17);


 FUNC_4(VAR_16, VAR_11 | VAR_9 | VAR_7);


 if (VAR_17 & VAR_10)
  VAR_17 &= ~VAR_11;


 if (VAR_17 & VAR_10)
  VAR_18 |= VAR_1 | VAR_2;
 if (VAR_17 & VAR_6)
  VAR_18 |= VAR_4 | VAR_2;
 if (VAR_17 & VAR_8)
  VAR_18 |= VAR_3 | VAR_2;

 FUNC_2(VAR_16->rtc, 1, VAR_18);


 FUNC_3(VAR_16, VAR_5, VAR_17 & ~VAR_12);

 FUNC_6(&VAR_16->lock);
 return VAR_0;
}
