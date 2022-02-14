
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct npe {TYPE_1__* regs; } ;
struct TYPE_2__ {int exec_status_cmd; int exec_addr; int exec_data; } ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct npe *VAR_0, u32 VAR_1, int VAR_2, u32 VAR_3)
{
 FUNC_0(VAR_3, &VAR_0->regs->exec_data);
 FUNC_0(VAR_1, &VAR_0->regs->exec_addr);
 FUNC_0(VAR_2, &VAR_0->regs->exec_status_cmd);
}
