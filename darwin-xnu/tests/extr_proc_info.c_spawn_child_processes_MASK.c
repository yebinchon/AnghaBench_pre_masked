
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* proc_config_t ;
typedef int pid_t ;
typedef int (* child_action_handler_t ) (TYPE_1__*,int) ;
struct TYPE_6__ {int child_count; int * parent_pipe; int ** child_pipe; int * child_pids; scalar_t__ cow_map; int proc_grp_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,int ,char*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int,int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static proc_config_t
FUNC_11(int VAR_8, child_action_handler_t VAR_9)
{



 FUNC_2("Spawning child processes...");
 proc_config_t VAR_10 = FUNC_7(sizeof(*VAR_10));
 int VAR_11 = 0;
 int VAR_12;

 FUNC_10(0, 0);
 VAR_10->proc_grp_id = FUNC_6(0);

 VAR_10->child_count = VAR_8;

 VAR_12 = FUNC_9(VAR_10->parent_pipe);
 VAR_7;
 FUNC_1(VAR_12, "pipe() call");




 VAR_10->cow_map = FUNC_8(0, VAR_3, VAR_6, VAR_0 | VAR_2, -1, 0);
 VAR_7;
 FUNC_0(VAR_10->cow_map, VAR_1, "cow_map mmap()");
 *((int *)(VAR_10->cow_map)) = 10;

 pid_t VAR_13;
 int VAR_14;
 int VAR_15;
 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  VAR_12 = FUNC_9(VAR_10->child_pipe[VAR_14]);
  VAR_7;
  FUNC_1(VAR_12, "pipe() call");

  VAR_13 = FUNC_5();
  VAR_15 = VAR_14;
  VAR_7;
  FUNC_1(VAR_13, "fork() in parent process for child %d", VAR_15);

  if (VAR_13 == 0) {
   VAR_9(VAR_10, VAR_15);
  } else {
   VAR_10->child_pids[VAR_15] = VAR_13;
  }
  FUNC_4(VAR_10->child_pipe[VAR_15][VAR_4]);
 }



 FUNC_4(VAR_10->parent_pipe[VAR_5]);
 FUNC_3(VAR_10->parent_pipe[VAR_4], VAR_11, VAR_8);

 return VAR_10;
}
