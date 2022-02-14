
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int posix_spawnattr_t ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int*,char* const,int *,int *,char* const*,char**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int ,int *,int ,int ) ;
 int VAR_7 ;
 int FUNC_14 (int,int*,int) ;

__attribute__((used)) static void
FUNC_15(int VAR_8)
{

 FUNC_13(VAR_7, ((void*)0), VAR_6, 0);

 int VAR_9;
 posix_spawnattr_t VAR_10;

 VAR_9 = FUNC_10(&VAR_10);
 VAR_3;
 FUNC_1(VAR_9, "posix_spawnattr_init");

 VAR_9 = FUNC_11(&VAR_10, VAR_1);
 VAR_3;
 FUNC_1(VAR_9, "posix_spawnattr_setflags");

 char * const VAR_11 = "/usr/bin/true";
 char * const VAR_12[] = { VAR_11, ((void*)0) };
 pid_t VAR_13;
 extern char **VAR_14;

 VAR_9 = FUNC_8(&VAR_13, VAR_11, ((void*)0), &VAR_10, VAR_12, VAR_14);
 FUNC_1(VAR_9, "posix_spawn");

 FUNC_12("parent: spawned child with pid %d\n", VAR_13);

 VAR_9 = FUNC_9(&VAR_10);
 VAR_3;
 FUNC_1(VAR_9, "posix_spawnattr_destroy");

 int VAR_15 = 0;
 int VAR_16 = FUNC_14(VAR_13, &VAR_15, VAR_5|VAR_4);
 FUNC_1(VAR_16, "waitpid");

 FUNC_0(VAR_16, VAR_13, "waitpid should return child we spawned");

 FUNC_0(FUNC_3(VAR_15), 0, "before SIGCONT: must not have exited");
 FUNC_0(FUNC_5(VAR_15), 1, "before SIGCONT: must be stopped");

 FUNC_12("parent: continuing child process\n");

 VAR_9 = FUNC_7(VAR_13, VAR_8);
 FUNC_1(VAR_9, "kill(signal)");

 FUNC_12("parent: waiting for child process\n");

 VAR_15 = 0;
 VAR_16 = FUNC_14(VAR_13, &VAR_15, 0);
 FUNC_1(VAR_16, "waitpid");

 FUNC_0(VAR_16, VAR_13, "waitpid should return child we spawned");

 if (VAR_8 == VAR_2) {
  FUNC_0(FUNC_4(VAR_15), 1, "child should have exited due to signal");
  FUNC_0(FUNC_6(VAR_15), VAR_2, "child should have exited due to SIGKILL");
 } else {
  FUNC_0(FUNC_3(VAR_15), 1, "child should have exited normally");
  FUNC_0(FUNC_2(VAR_15), VAR_0, "child should have exited with success");
 }

 FUNC_12("wait returned with pid %d, status %d\n", VAR_9, VAR_15);
}
