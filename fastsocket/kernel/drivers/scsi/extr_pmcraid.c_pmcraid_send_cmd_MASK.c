
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; void (* function ) (unsigned long) ;scalar_t__ expires; } ;
struct pmcraid_cmd {void (* cmd_done ) (struct pmcraid_cmd*) ;TYPE_1__ timer; } ;


 int FUNC_0 (struct pmcraid_cmd*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(
 struct pmcraid_cmd *VAR_1,
 void (*VAR_2) (struct pmcraid_cmd *),
 unsigned long VAR_3,
 void (*VAR_4) (struct pmcraid_cmd *)
)
{

 VAR_1->cmd_done = VAR_2;

 if (VAR_4) {

  VAR_1->timer.data = (unsigned long)VAR_1;
  VAR_1->timer.expires = VAR_0 + VAR_3;
  VAR_1->timer.function = (void (*)(unsigned long))VAR_4;
  FUNC_1(&VAR_1->timer);
 }


 FUNC_0(VAR_1);
}
