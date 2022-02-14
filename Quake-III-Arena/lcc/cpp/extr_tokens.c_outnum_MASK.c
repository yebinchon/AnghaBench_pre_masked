
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char *VAR_0, int VAR_1)
{
 if (VAR_1>=10)
  VAR_0 = FUNC_0(VAR_0, VAR_1/10);
 *VAR_0++ = VAR_1%10 + '0';
 return VAR_0;
}
