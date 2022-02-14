
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 scalar_t__ FUNC_0 (char*,size_t,char const*,int ) ;

size_t FUNC_1(char *VAR_0, size_t VAR_1, size_t VAR_2, const char *VAR_3, va_list VAR_4)
{
   size_t VAR_5 = (VAR_2 < VAR_1) ? (VAR_1 - VAR_2) : 0;

   VAR_2 += FUNC_0(VAR_0 ? (VAR_0 + VAR_2) : ((void*)0), VAR_5, VAR_3, VAR_4);

   return VAR_2;
}
