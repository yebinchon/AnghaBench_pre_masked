
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ia64_pdesc {void* gp; void* ip; } ;
struct ia64_nfw_context {int * arg; int ret; int gp; int ip; } ;
typedef scalar_t__ ia64_sal_handler ;


 int FUNC_0 (scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ia64_nfw_context *VAR_0)
{
 struct ia64_pdesc VAR_1;
 ia64_sal_handler VAR_2;

 VAR_1.ip = FUNC_1(VAR_0->ip);
 VAR_1.gp = FUNC_1(VAR_0->gp);

 VAR_2 = (ia64_sal_handler) &VAR_1;

 FUNC_0(VAR_2, VAR_0->ret,
       VAR_0->arg[0], VAR_0->arg[1], VAR_0->arg[2], VAR_0->arg[3],
       VAR_0->arg[4], VAR_0->arg[5], VAR_0->arg[6], VAR_0->arg[7]);
}
