
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* proc_config_t ;
struct TYPE_4__ {int child_count; int cow_map; int * parent_pipe; int * child_pids; int ** child_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int *,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_6(proc_config_t VAR_5)
{
 int VAR_6 = 0;
 FUNC_1("Killing child processes");
 FUNC_5(VAR_5, VAR_0);
 for (int VAR_7 = 0; VAR_7 < VAR_5->child_count; VAR_7++) {
  FUNC_2(VAR_5->child_pipe[VAR_7][VAR_3]);
  FUNC_3(VAR_5->child_pids[VAR_7], ((void*)0), ((void*)0), 5);
  VAR_4;
  FUNC_0(VAR_6, "killed child %d", VAR_7);
 }
 FUNC_2(VAR_5->parent_pipe[VAR_2]);
 FUNC_4(VAR_5->cow_map, VAR_1);
 FUNC_1("Killed child processes");
}
