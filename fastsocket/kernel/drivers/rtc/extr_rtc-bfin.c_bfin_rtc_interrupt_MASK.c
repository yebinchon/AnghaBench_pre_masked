
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct device {int dummy; } ;
struct bfin_rtc {int rtc_dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 struct bfin_rtc* FUNC_5 (struct device*) ;
 int FUNC_6 (int ,int,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_10, void *VAR_11)
{
 struct device *VAR_12 = VAR_11;
 struct bfin_rtc *VAR_13 = FUNC_5(VAR_12);
 unsigned long VAR_14 = 0;
 bool VAR_15 = 0;
 u16 VAR_16, VAR_17;

 FUNC_4(VAR_12);

 VAR_16 = FUNC_1();
 VAR_17 = FUNC_0();

 if (VAR_16 & VAR_7) {
  FUNC_2(VAR_7);
  VAR_15 = 1;
  FUNC_3(&VAR_9);
 }

 if (VAR_17 & (VAR_4 | VAR_5)) {
  if (VAR_16 & (VAR_4 | VAR_5)) {
   FUNC_2(VAR_4 | VAR_5);
   VAR_14 |= VAR_2 | VAR_3;
  }
 }

 if (VAR_17 & VAR_6) {
  if (VAR_16 & VAR_6) {
   FUNC_2(VAR_6);
   VAR_14 |= VAR_8 | VAR_3;
  }
 }

 if (VAR_14)
  FUNC_6(VAR_13->rtc_dev, 1, VAR_14);

 if (VAR_15 || VAR_14)
  return VAR_0;
 else
  return VAR_1;
}
