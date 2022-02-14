
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cr_regs {int dummy; } ;
struct TYPE_2__ {int (* cr_valid ) (struct cr_regs*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct cr_regs*) ;

__attribute__((used)) static inline int FUNC_1(struct cr_regs *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;

 return VAR_1->cr_valid(VAR_2);
}
