
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cmos_rtc {int irq; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cmos_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_5, int VAR_6)
{
 struct cmos_rtc *VAR_7 = FUNC_1(VAR_5);
 int VAR_8;
 unsigned long VAR_9;

 if (!FUNC_5(VAR_7->irq))
  return -VAR_1;

 if (!FUNC_4(VAR_6))
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8-- > 16)
  return -VAR_0;
 VAR_8 = 16 - VAR_8;

 FUNC_6(&VAR_4, VAR_9);
 FUNC_3(VAR_6);
 FUNC_0(VAR_3 | VAR_8, VAR_2);
 FUNC_7(&VAR_4, VAR_9);

 return 0;
}
