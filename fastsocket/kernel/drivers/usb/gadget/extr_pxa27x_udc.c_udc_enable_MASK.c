
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; } ;
struct pxa_udc {int enabled; int * pxa_ep; int dev; int stats; TYPE_1__ gadget; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct pxa_udc*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pxa_udc*,int ) ;
 int FUNC_8 (struct pxa_udc*,int ) ;
 int FUNC_9 (struct pxa_udc*,int ) ;
 int FUNC_10 (struct pxa_udc*,int ,int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct pxa_udc *VAR_11)
{
 if (VAR_11->enabled)
  return;

 FUNC_10(VAR_11, VAR_4, 0);
 FUNC_10(VAR_11, VAR_5, 0);
 FUNC_7(VAR_11, VAR_2);

 FUNC_0(VAR_11->clk);

 FUNC_2(VAR_11);
 VAR_11->gadget.speed = VAR_10;
 FUNC_4(&VAR_11->stats, 0, sizeof(VAR_11->stats));

 FUNC_9(VAR_11, VAR_2);
 FUNC_3(&VAR_11->pxa_ep[0], VAR_3);
 FUNC_11(2);
 if (FUNC_8(VAR_11, VAR_0) & VAR_1)
  FUNC_1(VAR_11->dev, "Configuration errors, udc disabled\n");




 FUNC_5(100);


 FUNC_10(VAR_11, VAR_5,
   VAR_6 | VAR_8
   | VAR_9 | VAR_7);


 FUNC_6(&VAR_11->pxa_ep[0]);

 VAR_11->enabled = 1;
}
