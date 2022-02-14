
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cr_regs {int dummy; } ;
struct TYPE_2__ {int (* cr_to_virt ) (struct cr_regs*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct cr_regs*) ;

u32 FUNC_1(struct cr_regs *VAR_1)
{
 return VAR_0->cr_to_virt(VAR_1);
}
