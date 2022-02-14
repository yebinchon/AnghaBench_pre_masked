
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct udc {TYPE_1__* regs; } ;
struct TYPE_2__ {int ep_irqmsk; int irqmsk; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static int FUNC_2(struct udc *VAR_9)
{
 u32 VAR_10;


 VAR_10 = FUNC_0(VAR_5) |
  FUNC_0(VAR_0) |
  FUNC_0(VAR_7) |
  FUNC_0(VAR_6) |
  FUNC_0(VAR_1) |
  FUNC_0(VAR_3) |
  FUNC_0(VAR_4)|
  FUNC_0(VAR_2);
 FUNC_1(VAR_10, &VAR_9->regs->irqmsk);


 FUNC_1(VAR_8, &VAR_9->regs->ep_irqmsk);

 return 0;
}
