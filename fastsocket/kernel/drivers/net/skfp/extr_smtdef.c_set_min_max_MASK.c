
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;



__attribute__((used)) static int FUNC_0(int VAR_0, u_long VAR_1, u_long VAR_2, u_long *VAR_3)
{
 u_long VAR_4 ;
 VAR_4 = *VAR_3 ;
 if ((VAR_2 > VAR_1) ^ VAR_0)
  *VAR_3 = VAR_2 ;
 else
  *VAR_3 = VAR_1 ;
 return(VAR_4 != *VAR_3) ;
}
