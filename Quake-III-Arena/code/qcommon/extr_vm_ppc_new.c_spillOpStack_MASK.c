
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static void FUNC_2(int VAR_6)
{

 int VAR_7;

 for(VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  FUNC_1(VAR_5[VAR_7]);
  FUNC_1(VAR_5[VAR_7] == 1);
  switch(VAR_5[VAR_7])
  {
   case 1:
    FUNC_0( "stw", VAR_1, VAR_4[VAR_7], VAR_2, VAR_7*4+4);
    break;
   case 2:
    FUNC_0( "stfs", VAR_0, VAR_3[VAR_7], VAR_2, VAR_7*4+4);
    break;
  }
  VAR_5[VAR_7] = 0;
 }
}
