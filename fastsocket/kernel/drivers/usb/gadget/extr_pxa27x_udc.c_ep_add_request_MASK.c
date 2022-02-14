
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxa_ep {int queue; } ;
struct TYPE_2__ {int length; } ;
struct pxa27x_request {int in_use; int queue; TYPE_1__ req; } ;


 int VAR_0 ;
 int FUNC_0 (struct pxa_ep*,char*,struct pxa27x_request*,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct pxa_ep*) ;
 int FUNC_3 (struct pxa_ep*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct pxa_ep *VAR_1, struct pxa27x_request *VAR_2)
{
 if (FUNC_4(!VAR_2))
  return;
 FUNC_0(VAR_1, "req:%p, lg=%d, udccsr=0x%03x\n", VAR_2,
  VAR_2->req.length, FUNC_3(VAR_1, VAR_0));

 VAR_2->in_use = 1;
 FUNC_1(&VAR_2->queue, &VAR_1->queue);
 FUNC_2(VAR_1);
}
