
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char) ;
 int * FUNC_5 (char const*) ;
 struct dirent* FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static int FUNC_8(const char *VAR_3, int VAR_4)
{
 DIR *VAR_5 = ((void*)0);
 struct dirent *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = 0;
 VAR_7 = 0;
 VAR_5 = FUNC_5(VAR_3);
 if (!VAR_5) {
  FUNC_2("Cannot evalute dump number\n");
  return -2;
 }

 while ((VAR_6 = FUNC_6(VAR_5))) {
  int VAR_9;
  if (FUNC_7(VAR_6->d_name, "dump.%ui", &VAR_9) == 1) {
   char VAR_10[1024] = {};







   FUNC_7(VAR_6->d_name, "dump.%s", VAR_10);
   if (VAR_10[0] == '-')
    continue;
   if ((VAR_10[0] == '0') && FUNC_4(VAR_10[1]))
    continue;
   if (!VAR_7) {
    VAR_7 = 1;
    VAR_8 = VAR_9;
   } else if (VAR_4 == VAR_1) {
    VAR_8 = FUNC_0(VAR_9, VAR_8);
   } else if (VAR_4 == VAR_0) {
    VAR_8 = FUNC_1(VAR_9, VAR_8);
   }
  }
 }
 if (!VAR_7)
  VAR_8 = VAR_2;
 FUNC_3(VAR_5);

 return VAR_8;
}
