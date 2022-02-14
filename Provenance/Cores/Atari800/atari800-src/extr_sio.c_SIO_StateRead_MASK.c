
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SIO_UnitStatus ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;


 scalar_t__* VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*,int) ;
 int VAR_3 ;

void FUNC_3(void)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  int VAR_5;
  char VAR_6[VAR_1];

  FUNC_2(&VAR_5, 1);
  VAR_2[VAR_4] = (SIO_UnitStatus)VAR_5;

  FUNC_1(VAR_6);
  if (VAR_6[0] == 0)
   continue;



  switch (VAR_5) {
  case 129:
   FUNC_0(VAR_4 + 1, VAR_6, VAR_3);
   break;
  case 128:
   FUNC_0(VAR_4 + 1, VAR_6, VAR_0);
   break;
  default:
   break;
  }
 }
}
