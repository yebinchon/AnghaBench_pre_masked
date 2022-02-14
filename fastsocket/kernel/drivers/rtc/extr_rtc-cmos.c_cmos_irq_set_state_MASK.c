
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cmos_rtc {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmos_rtc*,int ) ;
 int FUNC_1 (struct cmos_rtc*,int ) ;
 struct cmos_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3, int VAR_4)
{
 struct cmos_rtc *VAR_5 = FUNC_2(VAR_3);
 unsigned long VAR_6;

 if (!FUNC_3(VAR_5->irq))
  return -VAR_0;

 FUNC_4(&VAR_2, VAR_6);

 if (VAR_4)
  FUNC_1(VAR_5, VAR_1);
 else
  FUNC_0(VAR_5, VAR_1);

 FUNC_5(&VAR_2, VAR_6);
 return 0;
}
