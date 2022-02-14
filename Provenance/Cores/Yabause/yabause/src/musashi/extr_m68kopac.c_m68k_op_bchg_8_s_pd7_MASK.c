
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

void FUNC_4(void)
{
 uint VAR_1 = 1 << (FUNC_1() & 7);
 uint VAR_2 = FUNC_0();
 uint VAR_3 = FUNC_2(VAR_2);

 VAR_0 = VAR_3 & VAR_1;
 FUNC_3(VAR_2, VAR_3 ^ VAR_1);
}
