
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* proc_config_t ;
typedef int action ;
struct TYPE_3__ {int child_count; int * parent_pipe; int ** child_pipe; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (long,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int) ;
 long FUNC_2 (int ,int*,int) ;

__attribute__((used)) static void
FUNC_3(proc_config_t VAR_4, int VAR_5)
{
 long VAR_6;
 for (int VAR_7 = 0; VAR_7 < VAR_4->child_count; VAR_7++) {
  VAR_6 = FUNC_2(VAR_4->child_pipe[VAR_7][VAR_2], &VAR_5, sizeof(VAR_5));
  VAR_3;
  FUNC_0(VAR_6, "write() to child in send_action");
 }
 if (VAR_5 != VAR_0) {
  FUNC_1(VAR_4->parent_pipe[VAR_1], VAR_5, VAR_4->child_count);
 }
}
