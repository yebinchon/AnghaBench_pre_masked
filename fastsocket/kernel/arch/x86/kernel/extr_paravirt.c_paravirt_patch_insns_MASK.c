
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char const*,unsigned int) ;

unsigned FUNC_1(void *VAR_0, unsigned VAR_1,
         const char *VAR_2, const char *VAR_3)
{
 unsigned VAR_4 = VAR_3 - VAR_2;

 if (VAR_4 > VAR_1 || VAR_2 == ((void*)0))
  VAR_4 = VAR_1;
 else
  FUNC_0(VAR_0, VAR_2, VAR_4);

 return VAR_4;
}
