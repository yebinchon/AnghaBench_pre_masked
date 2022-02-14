
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef size_t UINT ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,struct stat*) ;

bool FUNC_5(char *VAR_0, UINT VAR_1, char *VAR_2)
{
 UINT VAR_3, VAR_4;
 struct stat VAR_5;
 int VAR_6;
 char *VAR_7;
 int VAR_8;


 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }


 if (FUNC_0(VAR_2))
 {
  return 0;
 }


 VAR_6 = FUNC_4("/dev/net", &VAR_5);
 if (VAR_6 != -1 && FUNC_1(VAR_5.st_mode))
 {
  VAR_7 = "/dev/net/";
 }
 else
 {
  VAR_7 = "/dev/";
 }

 VAR_8 = FUNC_3(VAR_7);


 if (VAR_2[VAR_4] < '0' || '9' < VAR_2[VAR_4])
 {
  if (VAR_2[VAR_4 + 1] == 0)
  {
   return 0;
  }
 }

 FUNC_2(VAR_0, VAR_1, VAR_7);
 FUNC_2(VAR_0 + VAR_8, VAR_1 - VAR_8, VAR_2);
 VAR_0[VAR_8 + VAR_3] = 0;

 return 1;
}
