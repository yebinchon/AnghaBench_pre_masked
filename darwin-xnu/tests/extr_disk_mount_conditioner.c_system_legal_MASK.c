
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 char* VAR_0 ;
 int FUNC_0 (int*,char**,int,int *,int *) ;
 int FUNC_1 (int,int*,int *,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1) {
 pid_t VAR_2 = -1;
 int VAR_3 = 0;
 const char *VAR_4[] = {
  VAR_0,
  "-c",
  VAR_1,
  ((void*)0)
 };

 int VAR_5 = FUNC_0(&VAR_2, (char **)(void *)VAR_4, 0, ((void*)0), ((void*)0));
 if (VAR_5 != 0) {
  return -1;
 }
 if (!FUNC_1(VAR_2, &VAR_3, ((void*)0), 30)) {
  if (VAR_3 != 0) {
   return VAR_3;
  }
  return -1;
 }

 return VAR_3;
}
