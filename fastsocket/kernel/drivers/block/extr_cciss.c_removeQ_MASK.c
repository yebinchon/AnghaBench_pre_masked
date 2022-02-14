
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int list; int cmd_type; } ;
typedef TYPE_1__ CommandList_struct ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(CommandList_struct *VAR_1)
{
 if (FUNC_0(FUNC_2(&VAR_1->list))) {
  VAR_1->cmd_type = VAR_0;
  return;
 }

 FUNC_1(&VAR_1->list);
}
