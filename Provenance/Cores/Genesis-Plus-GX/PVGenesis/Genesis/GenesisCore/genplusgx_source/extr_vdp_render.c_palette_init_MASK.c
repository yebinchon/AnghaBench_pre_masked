
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int,int,int) ;
 void*** VAR_0 ;
 void** VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
  int VAR_2, VAR_3, VAR_4, VAR_5;
  for (VAR_5 = 0; VAR_5 < 0x200; VAR_5++)
  {

    VAR_2 = (VAR_5 >> 0) & 7;
    VAR_3 = (VAR_5 >> 3) & 7;
    VAR_4 = (VAR_5 >> 6) & 7;


    VAR_0[0][VAR_5] = FUNC_0(VAR_2,VAR_3,VAR_4);
    VAR_0[1][VAR_5] = FUNC_0(VAR_2<<1,VAR_3<<1,VAR_4<<1);
    VAR_0[2][VAR_5] = FUNC_0(VAR_2+7,VAR_3+7,VAR_4+7);
  }


  for (VAR_5 = 0; VAR_5 < 0x40; VAR_5++)
  {

    VAR_2 = (VAR_5 >> 0) & 3;
    VAR_3 = (VAR_5 >> 2) & 3;
    VAR_4 = (VAR_5 >> 4) & 3;


    VAR_1[VAR_5] = FUNC_0(VAR_2 << 2,VAR_3 << 2,VAR_4<< 2);
  }
}
