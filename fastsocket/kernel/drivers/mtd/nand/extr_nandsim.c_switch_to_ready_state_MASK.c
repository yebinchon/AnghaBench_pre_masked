
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int status; scalar_t__ column; scalar_t__ row; scalar_t__ off; scalar_t__ count; scalar_t__ num; } ;
struct nandsim {TYPE_1__ regs; scalar_t__ stateidx; scalar_t__ npstates; int * op; int nxstate; int state; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct nandsim *VAR_2, u_char VAR_3)
{
 FUNC_0("switch_to_ready_state: switch to %s state\n", FUNC_1(VAR_0));

 VAR_2->state = VAR_0;
 VAR_2->nxstate = VAR_1;
 VAR_2->op = ((void*)0);
 VAR_2->npstates = 0;
 VAR_2->stateidx = 0;
 VAR_2->regs.num = 0;
 VAR_2->regs.count = 0;
 VAR_2->regs.off = 0;
 VAR_2->regs.row = 0;
 VAR_2->regs.column = 0;
 VAR_2->regs.status = VAR_3;
}
