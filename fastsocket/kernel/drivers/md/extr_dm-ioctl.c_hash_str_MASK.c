
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(const char *VAR_1)
{
 const unsigned int VAR_2 = 2654435387U;
 unsigned int VAR_3 = 0;

 while (*VAR_1)
  VAR_3 = (VAR_3 + (unsigned int) *VAR_1++) * VAR_2;

 return VAR_3 & VAR_0;
}
