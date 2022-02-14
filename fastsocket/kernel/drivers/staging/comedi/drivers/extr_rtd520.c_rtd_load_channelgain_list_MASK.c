
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (struct comedi_device*,unsigned int,int) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_0,
          unsigned int VAR_1, unsigned int *VAR_2)
{
 if (VAR_1 > 1) {
  int VAR_3;
  FUNC_0(VAR_0);
  FUNC_1(VAR_0, 1);
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
   FUNC_3(VAR_0, FUNC_4(VAR_0, VAR_2[VAR_3],
        VAR_3));
  }
 } else {
  FUNC_1(VAR_0, 0);
  FUNC_2(VAR_0, FUNC_4(VAR_0, VAR_2[0], 0));
 }
}
