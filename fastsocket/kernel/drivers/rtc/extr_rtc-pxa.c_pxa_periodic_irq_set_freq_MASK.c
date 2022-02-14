
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pxa_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct pxa_rtc*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3, int VAR_4)
{
 struct pxa_rtc *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 if (VAR_4 < 1 || VAR_4 > VAR_1)
  return -VAR_0;

 VAR_6 = 1000 / VAR_4;
 FUNC_1(VAR_5, VAR_2, VAR_6);

 return 0;
}
