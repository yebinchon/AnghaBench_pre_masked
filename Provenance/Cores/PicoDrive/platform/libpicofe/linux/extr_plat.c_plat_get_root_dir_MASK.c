
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,char*,char const*,int ) ;

int FUNC_4(char *VAR_1, int VAR_2)
{

 const char *VAR_3 = FUNC_0("HOME");
 int VAR_4;

 if (VAR_3 != ((void*)0)) {
  VAR_4 = FUNC_3(VAR_1, VAR_2, "%s%s", VAR_3, VAR_0);
  if (VAR_4 >= VAR_2)
   VAR_4 = VAR_2 - 1;
  FUNC_1(VAR_1, 0755);
  return VAR_4;
 }

 return FUNC_2(VAR_1, VAR_2);
}
