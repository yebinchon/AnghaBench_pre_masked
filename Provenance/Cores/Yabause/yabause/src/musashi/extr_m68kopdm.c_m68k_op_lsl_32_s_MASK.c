
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
 int VAR_6 ;
 int VAR_7 ;

void FUNC_2(void)
{
 uint* VAR_8 = &VAR_0;
 uint VAR_9 = (((VAR_6 >> 9) - 1) & 7) + 1;
 uint VAR_10 = *VAR_8;
 uint VAR_11 = FUNC_0(VAR_10 << VAR_9);

 *VAR_8 = VAR_11;

 VAR_2 = FUNC_1(VAR_11);
 VAR_5 = VAR_11;
 VAR_4 = VAR_1 = VAR_10 >> (24-VAR_9);
 VAR_3 = VAR_7;
}
