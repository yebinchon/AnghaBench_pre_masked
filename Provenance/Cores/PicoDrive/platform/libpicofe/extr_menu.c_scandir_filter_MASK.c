
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_type; int * d_name; } ;


 scalar_t__ VAR_0 ;
 char** VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (int *,char) ;

__attribute__((used)) static int FUNC_2(const struct dirent *VAR_2)
{
 const char **VAR_3 = VAR_1;
 const char *VAR_4;
 int VAR_5;

 if (VAR_2 == ((void*)0) || VAR_2->d_name == ((void*)0))
  return 0;

 if (VAR_2->d_type == VAR_0)
  return 1;

 VAR_4 = FUNC_1(VAR_2->d_name, '.');
 if (VAR_4 == ((void*)0))
  return 0;

 VAR_4++;
 for (VAR_5 = 0; VAR_3[VAR_5] != ((void*)0); VAR_5++)
  if (FUNC_0(VAR_4, VAR_3[VAR_5]) == 0)
   return 1;

 return 0;
}
