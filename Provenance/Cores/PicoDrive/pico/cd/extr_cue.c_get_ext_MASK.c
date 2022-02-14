
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, char VAR_1[4],
 char *VAR_2, size_t VAR_3)
{
 int VAR_4, VAR_5 = 0;

 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4 >= 3)
  VAR_5 = VAR_4 - 3;

 FUNC_1(VAR_1, VAR_0 + VAR_5);

 if (VAR_2 != ((void*)0)) {
  VAR_4 = VAR_5;
  if (VAR_4 + 1 < VAR_3)
   VAR_4 = VAR_3 - 1;
  FUNC_0(VAR_2, VAR_0, VAR_4);
  VAR_2[VAR_4] = 0;
 }
 return VAR_5;
}
