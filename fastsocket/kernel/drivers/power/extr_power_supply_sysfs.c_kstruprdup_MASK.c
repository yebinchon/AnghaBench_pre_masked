
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 char* FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_0, gfp_t VAR_1)
{
 char *VAR_2, *VAR_3;

 VAR_3 = VAR_2 = FUNC_0(FUNC_1(VAR_0) + 1, VAR_1);

 if (!VAR_2)
  return ((void*)0);

 while (*VAR_0)
  *VAR_3++ = FUNC_2(*VAR_0++);

 *VAR_3 = 0;

 return VAR_2;
}
