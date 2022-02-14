
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
struct musb_request {scalar_t__ tx; int epnum; TYPE_1__ request; } ;
struct musb {int mregs; } ;


 int FUNC_0 (int,char*,char*,TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct musb*,struct musb_request*) ;
 int FUNC_3 (struct musb*,struct musb_request*) ;

__attribute__((used)) static void FUNC_4(struct musb *VAR_0, struct musb_request *VAR_1)
{
 FUNC_0(3, "<== %s request %p len %u on hw_ep%d\n",
  VAR_1->tx ? "TX/IN" : "RX/OUT",
  &VAR_1->request, VAR_1->request.length, VAR_1->epnum);

 FUNC_1(VAR_0->mregs, VAR_1->epnum);
 if (VAR_1->tx)
  FUNC_3(VAR_0, VAR_1);
 else
  FUNC_2(VAR_0, VAR_1);
}
