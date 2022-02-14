
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; } ;
struct at91_udc {int iclk; int fclk; TYPE_1__ gadget; scalar_t__ clocked; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct at91_udc *VAR_1)
{
 if (!VAR_1->clocked)
  return;
 VAR_1->clocked = 0;
 VAR_1->gadget.speed = VAR_0;
 FUNC_0(VAR_1->fclk);
 FUNC_0(VAR_1->iclk);
}
