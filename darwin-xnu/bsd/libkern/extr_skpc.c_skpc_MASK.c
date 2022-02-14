
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



int
FUNC_0(int VAR_0, int VAR_1, char *VAR_2)
{
 u_char *VAR_3, *VAR_4, VAR_5;

 VAR_5 = VAR_0;
 VAR_3 = (u_char *)VAR_2;
 for (VAR_4 = &VAR_3[VAR_1]; VAR_3 < VAR_4 && *VAR_3 == VAR_5; ++VAR_3);
 return (VAR_4 - VAR_3);
}
