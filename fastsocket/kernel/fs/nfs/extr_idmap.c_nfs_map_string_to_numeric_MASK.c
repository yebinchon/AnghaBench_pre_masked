
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef unsigned long __u32 ;


 int * FUNC_0 (char const*,char,size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 scalar_t__ FUNC_2 (char*,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, size_t VAR_1, __u32 *VAR_2)
{
 unsigned long VAR_3;
 char VAR_4[16];

 if (FUNC_0(VAR_0, '@', VAR_1) != ((void*)0) || VAR_1 >= sizeof(VAR_4))
  return 0;
 FUNC_1(VAR_4, VAR_0, VAR_1);
 VAR_4[VAR_1] = '\0';
 if (FUNC_2(VAR_4, 0, &VAR_3) != 0)
  return 0;
 *VAR_2 = VAR_3;
 return 1;
}
