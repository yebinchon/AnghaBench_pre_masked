
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int volatile* VAR_0 ;
 int volatile* VAR_1 ;

int FUNC_0(void)
{
 volatile u32 VAR_2;

 VAR_2 = *VAR_1;




 if (VAR_2 & ((1 << 8) | (1 << 5)))
  *VAR_1 = VAR_2;

 VAR_2 = *VAR_0;

 if (VAR_2 & (1 << 29))
  *VAR_0 = VAR_2;

 return 0;
}
