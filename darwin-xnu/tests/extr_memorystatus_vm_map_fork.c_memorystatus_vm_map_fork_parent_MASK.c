
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct rusage {int ru_maxrss; } ;
typedef scalar_t__ pid_t ;
typedef int memlimit_str ;
typedef int max_task_pmem ;
typedef enum child_exits { ____Placeholder_child_exits } child_exits ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,char*,char*) ;
 int FUNC_1 (unsigned long long,unsigned long long,char*) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (unsigned long long,unsigned long long,char*,unsigned long long,unsigned long long) ;
 int FUNC_4 (char*,...) ;
 int VAR_8 ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,int *) ;
 char** VAR_9 ;
 unsigned long long FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (char*,int ,int) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (int ,char*,short,int ,int,int) ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (char*,int*,size_t*,int *,int ) ;
 int FUNC_18 (scalar_t__,int*,struct rusage*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_19 (int) ;

__attribute__((used)) static void
FUNC_20(int VAR_12)
{
 int VAR_13 = 0;
 size_t VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = 0;
 short VAR_17 = 0;
 char VAR_18[16];
 pid_t VAR_19;
 int VAR_20;
 uint64_t VAR_21;
 uint64_t VAR_22;
 int VAR_23;
 struct rusage VAR_24;
 enum child_exits VAR_25;





 if (!FUNC_12()) {
  FUNC_5("Can't test on release kernel");
 }




 VAR_14 = sizeof(VAR_13);
 (void)FUNC_17("kern.max_task_pmem", &VAR_13, &VAR_14, ((void*)0), 0);
 if (VAR_13 <= 0)
  VAR_13 = 0;

 if (VAR_12 == VAR_7) {




  if (VAR_13 / 4 - VAR_1 <= 0) {
   VAR_15 = VAR_1;
  } else {
   VAR_15 = VAR_13 / 4 - VAR_1;
  }
  VAR_22 = VAR_2;

 } else {




  VAR_15 = (VAR_13 / 4) + VAR_1;
  if (VAR_13 == 0) {
   VAR_22 = VAR_2;
  } else {
   VAR_22 = VAR_3;
  }

 }
 VAR_16 = VAR_15;
 FUNC_4("using limit of %d Meg", VAR_15);
 FUNC_19(VAR_15);





 VAR_22 = VAR_2;





 FUNC_13 (VAR_18, 0, sizeof(VAR_18));
 (void)FUNC_16(VAR_18, "%d", VAR_15);

 VAR_23 = FUNC_10(VAR_10, &VAR_11);
 VAR_8; FUNC_2(VAR_23, "_NSGetExecutablePath(%s, ...)", VAR_10);




 VAR_19 = FUNC_15(VAR_10, VAR_18, VAR_17,
     VAR_0, VAR_15, VAR_16);

 VAR_22 |= (uint64_t)VAR_19;




 FUNC_4("  spawned child_pid[%d] with memlimit %s (%d)MB\n",
     VAR_19, VAR_18, VAR_15);




 (void)FUNC_14((pid_t)0);
 (void)FUNC_14(VAR_19);




 FUNC_18(VAR_19, &VAR_20, &VAR_24);
 FUNC_4("Child exited with max_rss of %ld", VAR_24.ru_maxrss);





 VAR_21 = FUNC_11();
 (void)FUNC_14((pid_t)0);




 if (!FUNC_7(VAR_20)) {
  if (FUNC_8(VAR_20)) {

   if (FUNC_9(VAR_20) == VAR_6)
    FUNC_4("Child appears to have been a jetsam victim");
   FUNC_5("Child terminated by signal %d test result invalid", FUNC_9(VAR_20));
  }
  FUNC_5("child did not exit normally (status=%d) test result invalid", VAR_20);
 }




 VAR_25 = (enum child_exits)FUNC_6(VAR_20);
 VAR_8; FUNC_0(VAR_25, VAR_4, "child exit due to: %s",
     (0 < VAR_25 && VAR_25 < VAR_5) ? VAR_9[VAR_25] : "unknown");




 if (VAR_21 == -1ull) {
  FUNC_5("corpse generation was aborted by kernel");
 }




 VAR_8; FUNC_1(VAR_21, (uint64_t)VAR_19, "child didn't trigger corpse generation");

 FUNC_3(VAR_21, VAR_22, "kernel value 0x%llx - expected 0x%llx",
     VAR_21, VAR_22);
}
