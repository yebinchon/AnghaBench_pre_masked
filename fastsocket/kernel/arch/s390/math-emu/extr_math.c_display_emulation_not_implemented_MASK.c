
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mask; scalar_t__ addr; } ;
struct pt_regs {TYPE_1__ psw; } ;
typedef int __u16 ;
struct TYPE_6__ {scalar_t__ pgm_ilc; } ;
struct TYPE_5__ {unsigned long comm; unsigned long pid; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*,char*,unsigned long,unsigned long) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct pt_regs *VAR_3, char *VAR_4)
{
        __u16 *VAR_5;




        {
                VAR_5 = (__u16 *)(VAR_3->psw.addr-VAR_0.pgm_ilc);
                FUNC_0("%s ieee fpu instruction not emulated "
                       "process name: %s pid: %d \n",
                       VAR_4, VAR_1->comm, VAR_1->pid);
                FUNC_0("%s's PSW:    %08lx %08lx\n", VAR_4,
                       (unsigned long) VAR_3->psw.mask,
                       (unsigned long) VAR_5);
        }
}
