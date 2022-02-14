
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv50_disp_chan {int chid; int base; } ;
struct nv50_disp_base {int chan; } ;
struct TYPE_2__ {scalar_t__ parent; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct nv50_disp_chan*) ;

void
FUNC_2(struct nv50_disp_chan *VAR_0)
{
 struct nv50_disp_base *VAR_1 = (void *)FUNC_1(VAR_0)->parent;
 VAR_1->chan &= ~(1 << VAR_0->chid);
 FUNC_0(&VAR_0->base);
}
