
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; } ;
struct pxa_udc {scalar_t__ enabled; TYPE_1__ gadget; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pxa_udc*) ;
 int FUNC_2 (struct pxa_udc*,int ) ;
 int FUNC_3 (struct pxa_udc*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct pxa_udc *VAR_4)
{
 if (!VAR_4->enabled)
  return;

 FUNC_3(VAR_4, VAR_1, 0);
 FUNC_3(VAR_4, VAR_2, 0);

 FUNC_2(VAR_4, VAR_0);
 FUNC_0(VAR_4->clk);

 FUNC_1(VAR_4);
 VAR_4->gadget.speed = VAR_3;

 VAR_4->enabled = 0;
}
