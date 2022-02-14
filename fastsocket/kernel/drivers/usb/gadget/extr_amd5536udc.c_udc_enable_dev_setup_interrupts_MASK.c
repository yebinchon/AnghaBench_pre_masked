
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct udc {TYPE_1__* regs; } ;
struct TYPE_2__ {int irqmsk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct udc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int FUNC_4(struct udc *VAR_5)
{
 u32 VAR_6;

 FUNC_1(VAR_5, "enable device interrupts for setup data\n");


 VAR_6 = FUNC_2(&VAR_5->regs->irqmsk);


 VAR_6 &= FUNC_0(VAR_2)
  & FUNC_0(VAR_1)
  & FUNC_0(VAR_4)
  & FUNC_0(VAR_3)
  & FUNC_0(VAR_0);
 FUNC_3(VAR_6, &VAR_5->regs->irqmsk);

 return 0;
}
