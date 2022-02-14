
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pxa_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct pxa_rtc*,int) ;
 int FUNC_2 (struct pxa_rtc*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, int VAR_3)
{
 struct pxa_rtc *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3)
  FUNC_2(VAR_4, VAR_0 | VAR_1);
 else
  FUNC_1(VAR_4, VAR_0 | VAR_1);

 return 0;
}
