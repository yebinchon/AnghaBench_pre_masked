
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const*,unsigned int) ;

size_t FUNC_1(const char *VAR_0)
{
 unsigned int VAR_1, VAR_2;
 VAR_1 = (((*VAR_0) & 2) == 2) ? 4 : 1;
 VAR_2 = FUNC_0(VAR_0 + 1, VAR_1);
 VAR_2 = VAR_2 & (0xffffffff >> ((4 - VAR_1)*8));
 return VAR_2;
}
