
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtip_port {int * cmd_issue; TYPE_1__* commands; } ;
struct TYPE_2__ {int active; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct mtip_port *VAR_0, int VAR_1)
{
 FUNC_2(&VAR_0->commands[VAR_1].active, 1);
 FUNC_3(1 << FUNC_0(VAR_1),
  VAR_0->cmd_issue[FUNC_1(VAR_1)]);
}
