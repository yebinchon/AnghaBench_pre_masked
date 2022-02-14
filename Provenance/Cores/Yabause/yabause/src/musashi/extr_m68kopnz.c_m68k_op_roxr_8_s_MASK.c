
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int,int) ;
 int VAR_7 ;
 int FUNC_4 () ;

void FUNC_5(void)
{
 uint* VAR_8 = &VAR_0;
 uint VAR_9 = (((VAR_6 >> 9) - 1) & 7) + 1;
 uint VAR_10 = FUNC_0(*VAR_8);
 uint VAR_11 = FUNC_3(VAR_10 | (FUNC_4() << 8), VAR_9);

 VAR_1 = VAR_4 = VAR_11;
 VAR_11 = FUNC_0(VAR_11);

 *VAR_8 = FUNC_1(*VAR_8) | VAR_11;

 VAR_2 = FUNC_2(VAR_11);
 VAR_5 = VAR_11;
 VAR_3 = VAR_7;
}
