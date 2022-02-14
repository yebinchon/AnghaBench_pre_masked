
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_udc {int ep0state; struct pxa_ep* pxa_ep; } ;
struct pxa_ep {int dummy; } ;


 char* FUNC_0 (struct pxa_udc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pxa_ep*,char*,char*,char*,int ,int ) ;
 int FUNC_2 (struct pxa_ep*,int ) ;

__attribute__((used)) static void FUNC_3(struct pxa_udc *VAR_2, int VAR_3)
{
 struct pxa_ep *VAR_4 = &VAR_2->pxa_ep[0];
 char *VAR_5 = FUNC_0(VAR_2);

 VAR_2->ep0state = VAR_3;
 FUNC_1(VAR_4, "state=%s->%s, udccsr0=0x%03x, udcbcr=%d\n", VAR_5,
  FUNC_0(VAR_2), FUNC_2(VAR_4, VAR_1),
  FUNC_2(VAR_4, VAR_0));
}
