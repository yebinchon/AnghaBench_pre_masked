
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int,int ,char*,char* const) ;
 int FUNC_1 (int,char*,char* const) ;
 int FUNC_2 (char*,char* const,int) ;
 int FUNC_3 (int *,char* const*,int,int *,int *) ;
 int FUNC_4 (int ,int*,int*,int) ;

int
FUNC_5(char * const VAR_0[]) {
 pid_t VAR_1 = 0;
 int VAR_2 = 0;
 bool VAR_3 = 1;
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 30;

 VAR_2 = FUNC_3(&VAR_1, VAR_0, 0, ((void*)0), ((void*)0));
 FUNC_0(VAR_2, 0, "launch tool: %s", VAR_0[0]);
 if(VAR_2 != 0) {
  return 1;
 }

 VAR_3 = FUNC_4(VAR_1, &VAR_4, &VAR_5, VAR_6);
 FUNC_1(VAR_3, "%s should succeed", VAR_0[0]);
 if(VAR_3 == 0) {
  if(VAR_4 != 0) {
   FUNC_2("%s exited %d", VAR_0[0], VAR_4);
  }
  if(VAR_5 != 0) {
   FUNC_2("%s received signal %d", VAR_0[0], VAR_5);
  }
  return 1;
 }

 return 0;
}
