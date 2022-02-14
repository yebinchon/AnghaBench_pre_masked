
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_rtc {int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 struct pxa_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct pxa_rtc*,int ) ;
 int FUNC_2 (struct pxa_rtc*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, unsigned int VAR_4,
  unsigned long VAR_5)
{
 struct pxa_rtc *VAR_6 = FUNC_0(VAR_3);
 int VAR_7 = 0;

 FUNC_3(&VAR_6->lock);
 switch (VAR_4) {
 case 131:
  FUNC_1(VAR_6, VAR_2);
  break;
 case 130:
  FUNC_2(VAR_6, VAR_2);
  break;
 case 129:
  FUNC_1(VAR_6, VAR_1);
  break;
 case 128:
  FUNC_2(VAR_6, VAR_1);
  break;
 default:
  VAR_7 = -VAR_0;
 }

 FUNC_4(&VAR_6->lock);
 return VAR_7;
}
