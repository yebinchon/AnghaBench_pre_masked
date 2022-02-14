
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bfin_rtc {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bfin_rtc*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 struct bfin_rtc* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4, unsigned int VAR_5, unsigned long VAR_6)
{
 struct bfin_rtc *VAR_7 = FUNC_5(VAR_4);
 int VAR_8 = 0;

 FUNC_4(VAR_4);

 FUNC_3(VAR_4);

 switch (VAR_5) {
 case 128:
  FUNC_4(VAR_4);
  FUNC_1(VAR_3);
  break;
 case 129:
  FUNC_4(VAR_4);
  FUNC_0(~VAR_3);
  break;

 case 130:
  FUNC_4(VAR_4);
  FUNC_2(VAR_7);
  break;
 case 131:
  FUNC_4(VAR_4);
  FUNC_0(~(VAR_1 | VAR_2));
  break;

 default:
  FUNC_4(VAR_4);
  VAR_8 = -VAR_0;
 }

 return VAR_8;
}
