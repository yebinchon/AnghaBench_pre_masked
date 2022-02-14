
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtip_port {TYPE_1__* commands; int cmd_issue_lock; int * cmd_issue; int * s_active; } ;
struct TYPE_2__ {scalar_t__ comp_time; int active; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static inline void FUNC_7(struct mtip_port *VAR_2, int VAR_3)
{
 FUNC_2(&VAR_2->commands[VAR_3].active, 1);

 FUNC_4(&VAR_2->cmd_issue_lock);

 FUNC_6((1 << FUNC_0(VAR_3)),
   VAR_2->s_active[FUNC_1(VAR_3)]);
 FUNC_6((1 << FUNC_0(VAR_3)),
   VAR_2->cmd_issue[FUNC_1(VAR_3)]);

 FUNC_5(&VAR_2->cmd_issue_lock);


 VAR_2->commands[VAR_3].comp_time = VAR_1 + FUNC_3(
     VAR_0);
}
