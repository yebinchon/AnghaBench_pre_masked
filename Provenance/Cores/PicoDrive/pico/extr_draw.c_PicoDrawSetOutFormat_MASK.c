
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdso_t ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_6 ;

void FUNC_2(pdso_t VAR_7, int VAR_8)
{
  switch (VAR_7)
  {
    case 129:
      VAR_0 = VAR_3;
      break;

    case 128:
      if ((VAR_5 & VAR_4) && VAR_8)
        VAR_0 = VAR_1;
      else
        VAR_0 = VAR_2;
      break;

    default:
      VAR_0 = ((void*)0);
      break;
  }
  FUNC_0(VAR_7, VAR_8);
  FUNC_1(VAR_7);
  VAR_6 = -1;
}
