
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;





 int FUNC_0 (int) ;
 int VAR_1 ;
 int** VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;

void FUNC_3(void)
{
 int VAR_3;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < 24; VAR_4++) {
  for (VAR_3 = 0; VAR_3 < 40; VAR_3++) {
   int VAR_5 = VAR_2[VAR_4][VAR_3];
   switch (VAR_1) {
   default:
   case 131:
    FUNC_1(VAR_4, VAR_3);
    break;
   case 132:
    FUNC_1(VAR_4, 20 + VAR_3);
    break;
   case 130:
    FUNC_1(VAR_4, 40 + VAR_3);
    break;
   case 129:
    FUNC_1(VAR_4, VAR_3 + VAR_3);
    break;
   case 128:
    FUNC_1(VAR_4, VAR_3 + VAR_3);
    FUNC_0(VAR_5);
    VAR_5 = ' ' + (VAR_5 & VAR_0);
    break;
   }
   FUNC_0(VAR_5);
  }
 }
 FUNC_2();
}
