
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int VAR_6 ;

void FUNC_2(void)
{
 uint* VAR_7 = &VAR_0;
 uint VAR_8 = (((VAR_5 >> 9) - 1) & 7) + 1;
 uint64 VAR_9 = *VAR_7;
 uint VAR_10 = FUNC_1(VAR_9, VAR_8);

 *VAR_7 = VAR_10;

 VAR_2 = FUNC_0(VAR_10);
 VAR_4 = VAR_10;
 VAR_1 = VAR_9 << (9-VAR_8);
 VAR_3 = VAR_6;
}
