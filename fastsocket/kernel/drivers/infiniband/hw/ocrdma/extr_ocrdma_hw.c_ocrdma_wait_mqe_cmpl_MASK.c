
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd_done; int cmd_wait; } ;
struct ocrdma_dev {TYPE_1__ mqe_ctx; } ;


 int FUNC_0 (int) ;
 long FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct ocrdma_dev *VAR_0)
{
 long VAR_1;

 VAR_1 = FUNC_1(VAR_0->mqe_ctx.cmd_wait,
        (VAR_0->mqe_ctx.cmd_done != 0),
        FUNC_0(30000));
 if (VAR_1)
  return 0;
 else
  return -1;
}
