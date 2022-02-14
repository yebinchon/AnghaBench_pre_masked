
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633_rtc {int rtc_dev; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(int VAR_3, void *VAR_4)
{
 struct pcf50633_rtc *VAR_5 = VAR_4;

 switch (VAR_3) {
 case 129:
  FUNC_0(VAR_5->rtc_dev, 1, VAR_0 | VAR_1);
  break;
 case 128:
  FUNC_0(VAR_5->rtc_dev, 1, VAR_2 | VAR_1);
  break;
 }
}
