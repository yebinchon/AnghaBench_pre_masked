
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(char *VAR_0, long VAR_1)
{
 VAR_0 += 8;

 *VAR_0-- = '\0';
 *VAR_0-- = VAR_1 % 10 + '0';
 VAR_1 /= 10;
 *VAR_0-- = VAR_1 % 10 + '0';
 VAR_1 /= 10;
 *VAR_0-- = '.';
 *VAR_0-- = VAR_1 % 10 + '0';
 VAR_1 /= 10;
 *VAR_0-- = VAR_1 % 6 + '0';
 VAR_1 /= 6;
 *VAR_0-- = ':';
 *VAR_0-- = VAR_1 % 10 + '0';
 VAR_1 /= 10;
 *VAR_0-- = VAR_1 % 10 + '0';
 return 8;
}
