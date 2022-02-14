
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char,int) ;

__attribute__((used)) static void FUNC_1(int (*VAR_0) (const char *VAR_1, int VAR_2),
      const char *VAR_3, int VAR_4)
{
 const char *VAR_5;


 while ((VAR_5 = FUNC_0(VAR_3, '\n', VAR_4)) != ((void*)0)) {
  VAR_0(VAR_3, VAR_5 - VAR_3);
  VAR_0("\r\n", 2);
  VAR_4 -= VAR_5 + 1 - VAR_3;
  VAR_3 = VAR_5 + 1;
 }
 VAR_0(VAR_3, VAR_4);
}
