
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

void FUNC_5(void)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < 256; VAR_4++)
  VAR_0[VAR_4] = FUNC_0(FUNC_3(VAR_4));

 for (VAR_4 = 0; VAR_4 < 256; VAR_4++)
  VAR_3[VAR_4] = FUNC_4(FUNC_3(VAR_4));

 for (VAR_4 = 0; VAR_4 < 256; VAR_4++) {
  VAR_1[VAR_4] =
   FUNC_2(VAR_0[VAR_4]);
  VAR_2[VAR_4] =
   FUNC_1(VAR_3[VAR_4]);
 }
}
