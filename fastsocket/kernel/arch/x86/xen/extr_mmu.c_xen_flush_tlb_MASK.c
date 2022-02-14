
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multicall_space {int mc; struct mmuext_op* args; } ;
struct mmuext_op {int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct mmuext_op*,int,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct multicall_space FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct mmuext_op *VAR_3;
 struct multicall_space VAR_4;

 FUNC_1();

 VAR_4 = FUNC_3(sizeof(*VAR_3));

 VAR_3 = VAR_4.args;
 VAR_3->cmd = VAR_1;
 FUNC_0(VAR_4.mc, VAR_3, 1, ((void*)0), VAR_0);

 FUNC_4(VAR_2);

 FUNC_2();
}
