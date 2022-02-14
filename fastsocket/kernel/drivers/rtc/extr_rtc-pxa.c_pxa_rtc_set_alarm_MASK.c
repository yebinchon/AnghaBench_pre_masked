
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct pxa_rtc {int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pxa_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pxa_rtc*,int ) ;
 int FUNC_3 (struct pxa_rtc*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct pxa_rtc *VAR_6 = FUNC_0(VAR_4);
 u32 VAR_7;

 FUNC_5(&VAR_6->lock);

 FUNC_3(VAR_6, VAR_3, FUNC_4(&VAR_5->time));
 FUNC_3(VAR_6, VAR_0, FUNC_1(&VAR_5->time));

 VAR_7 = FUNC_2(VAR_6, VAR_1);
 if (VAR_5->enabled)
  VAR_7 |= VAR_2;
 else
  VAR_7 &= ~VAR_2;
 FUNC_3(VAR_6, VAR_1, VAR_7);

 FUNC_6(&VAR_6->lock);

 return 0;
}
