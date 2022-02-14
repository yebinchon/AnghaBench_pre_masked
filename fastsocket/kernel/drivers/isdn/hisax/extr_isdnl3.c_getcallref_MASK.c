
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



int
FUNC_0(u_char * VAR_0)
{
 int VAR_1, VAR_2 = 0;

 VAR_0++;
 if (*VAR_0 & 0xfe)
  return(-2);
 VAR_1 = 0xf & *VAR_0++;
 if (!VAR_1)
  return(-1);
 VAR_2 = *VAR_0++;
 return (VAR_2);
}
