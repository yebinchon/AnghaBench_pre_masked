
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {int lock; int lockup_detected; } ;
struct CommandList {TYPE_1__* err_info; } ;
struct TYPE_2__ {int CommandStatus; } ;


 int VAR_0 ;
 int FUNC_0 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ctlr_info *VAR_1,
 struct CommandList *VAR_2)
{
 unsigned long VAR_3;


 FUNC_1(&VAR_1->lock, VAR_3);
 if (FUNC_3(VAR_1->lockup_detected)) {
  FUNC_2(&VAR_1->lock, VAR_3);
  VAR_2->err_info->CommandStatus = VAR_0;
 } else {
  FUNC_2(&VAR_1->lock, VAR_3);
  FUNC_0(VAR_1, VAR_2);
 }
}
