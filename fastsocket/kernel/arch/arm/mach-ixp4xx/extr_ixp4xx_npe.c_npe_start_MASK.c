
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct npe {TYPE_1__* regs; } ;
struct TYPE_2__ {int exec_status_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct npe*,int ) ;

__attribute__((used)) static void FUNC_2(struct npe *VAR_5)
{

 FUNC_1(VAR_5, VAR_3);
 FUNC_1(VAR_5, VAR_4);
 FUNC_1(VAR_5, VAR_2);

 FUNC_0(VAR_0, &VAR_5->regs->exec_status_cmd);
 FUNC_0(VAR_1, &VAR_5->regs->exec_status_cmd);
}
