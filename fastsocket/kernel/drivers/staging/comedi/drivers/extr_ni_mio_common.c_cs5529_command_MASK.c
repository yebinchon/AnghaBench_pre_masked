
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,unsigned short,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_3, unsigned short VAR_4)
{
 static const int VAR_5 = 100;
 int VAR_6;

 FUNC_2(VAR_3, VAR_4, VAR_0);




 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if ((FUNC_1(VAR_3, VAR_1) & VAR_2))
   break;
  FUNC_3(1);
 }

 if (VAR_6 == VAR_5) {
  FUNC_0(VAR_3, "possible problem - never saw adc go busy?");
 }
}
