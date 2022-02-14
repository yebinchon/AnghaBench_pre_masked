
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct multicall_space {int mc; struct mmuext_op* args; } ;
struct TYPE_4__ {unsigned int nr_ents; } ;
struct TYPE_3__ {unsigned long linear_addr; } ;
struct mmuext_op {TYPE_2__ arg2; TYPE_1__ arg1; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct mmuext_op*,int,int *,int ) ;
 int VAR_2 ;
 struct multicall_space FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const void *VAR_3, unsigned VAR_4)
{
 struct mmuext_op *VAR_5;
 struct multicall_space VAR_6 = FUNC_1(sizeof(*VAR_5));

 VAR_5 = VAR_6.args;
 VAR_5->cmd = VAR_1;
 VAR_5->arg1.linear_addr = (unsigned long)VAR_3;
 VAR_5->arg2.nr_ents = VAR_4;

 FUNC_0(VAR_6.mc, VAR_5, 1, ((void*)0), VAR_0);

 FUNC_2(VAR_2);
}
