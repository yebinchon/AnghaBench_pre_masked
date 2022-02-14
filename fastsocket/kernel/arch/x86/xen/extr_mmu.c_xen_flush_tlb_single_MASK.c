
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct multicall_space {int mc; struct mmuext_op* args; } ;
struct TYPE_2__ {unsigned long linear_addr; } ;
struct mmuext_op {TYPE_1__ arg1; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct mmuext_op*,int,int *,int ) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct multicall_space FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_4)
{
 struct mmuext_op *VAR_5;
 struct multicall_space VAR_6;

 FUNC_1();

 VAR_6 = FUNC_3(sizeof(*VAR_5));
 VAR_5 = VAR_6.args;
 VAR_5->cmd = VAR_1;
 VAR_5->arg1.linear_addr = VAR_4 & VAR_2;
 FUNC_0(VAR_6.mc, VAR_5, 1, ((void*)0), VAR_0);

 FUNC_4(VAR_3);

 FUNC_2();
}
