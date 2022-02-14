
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int pc; } ;
struct TYPE_4__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct pt_regs*,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (char*,int ,int ,int ,unsigned long) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(struct pt_regs *VAR_3, unsigned long VAR_4)
{
 FUNC_0("Caught unhandled exception - should not happen",
       VAR_3, VAR_1);


 FUNC_2("Caught unhandled exception in '%s' "
        "(pid = %d, pc = %#010lx) - should not happen\n"
        "\tEXCCAUSE is %ld\n",
        VAR_2->comm, FUNC_3(VAR_2), VAR_3->pc, VAR_4);
 FUNC_1(VAR_0, VAR_2);
}
