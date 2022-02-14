
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 size_t* VAR_8 ;

void FUNC_2(void)
{
 uint* VAR_9 = &VAR_0;
 uint VAR_10 = (((VAR_6 >> 9) - 1) & 7) + 1;
 uint VAR_11 = *VAR_9;
 uint VAR_12 = VAR_11 >> VAR_10;

 if(FUNC_0(VAR_11))
  VAR_12 |= VAR_8[VAR_10];

 *VAR_9 = VAR_12;

 VAR_2 = FUNC_1(VAR_12);
 VAR_5 = VAR_12;
 VAR_3 = VAR_7;
 VAR_4 = VAR_1 = VAR_11 << (9-VAR_10);
}
