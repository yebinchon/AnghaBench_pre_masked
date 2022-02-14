
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_type; char* d_name; } ;
typedef int path ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (char const*) ;
 struct dirent* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char**,int) ;
 int FUNC_5 (char*,int,char*,char const*,char*) ;
 int FUNC_6 (char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char const*) ;

void FUNC_9(const char *VAR_1, char ***VAR_2, int *VAR_3)
{
 DIR *VAR_4;
 struct dirent *VAR_5;
 int VAR_6;

 if (!(VAR_4 = FUNC_2(VAR_1)))
  return;

 while ((VAR_5 = FUNC_3(VAR_4)) != ((void*)0)) {
  if (VAR_5->d_type == VAR_0) {
   char VAR_7[1024];
   if (FUNC_7(VAR_5->d_name, ".") == 0 || FUNC_7(VAR_5->d_name, "..") == 0)
    continue;
   FUNC_5(VAR_7, sizeof(VAR_7), "%s/%s", VAR_1, VAR_5->d_name);
   FUNC_9(VAR_7, VAR_2, VAR_3);
  } else {
   VAR_6 = *VAR_3;
   *VAR_2 = (char **)FUNC_4(*VAR_2, sizeof(char *) * (VAR_6 + 1));
   (*VAR_2)[VAR_6] = (char *)FUNC_1(sizeof(char) * ( FUNC_8(VAR_1) + 1 + FUNC_8(VAR_5->d_name) + 10));
   FUNC_6((*VAR_2)[VAR_6], "%s/%s", VAR_1, VAR_5->d_name);
   VAR_6 ++;
   *VAR_3 = VAR_6;
  }
 }

 FUNC_0(VAR_4);
}
