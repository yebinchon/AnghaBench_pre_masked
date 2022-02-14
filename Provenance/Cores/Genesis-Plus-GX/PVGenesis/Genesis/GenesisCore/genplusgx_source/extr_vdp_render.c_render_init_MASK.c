
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16 ;


 int ** VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

void FUNC_9(void)
{
  int VAR_1, VAR_2;


  uint16 VAR_3;
  for (VAR_1 = 0; VAR_1 < 0x100; VAR_1++)
  {
    for (VAR_2 = 0; VAR_2 < 0x100; VAR_2++)
    {
      VAR_3 = (VAR_1 << 8) | (VAR_2);

      VAR_0[0][VAR_3] = FUNC_1(VAR_1, VAR_2);
      VAR_0[1][VAR_3] = FUNC_3(VAR_1, VAR_2);
      VAR_0[2][VAR_3] = FUNC_2(VAR_1, VAR_2);
      VAR_0[3][VAR_3] = FUNC_6(VAR_1, VAR_2);
      VAR_0[4][VAR_3] = FUNC_5(VAR_1, VAR_2);
      VAR_0[5][VAR_3] = FUNC_4(VAR_1,VAR_2);
    }
  }


  FUNC_8();


  FUNC_7();


  FUNC_0();
}
