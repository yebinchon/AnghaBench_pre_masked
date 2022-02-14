
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int lock; } ;
struct nv04_fifo_priv {TYPE_1__ base; } ;
struct TYPE_4__ {int chid; } ;
struct nv04_fifo_chan {TYPE_2__ base; } ;
struct nouveau_object {scalar_t__ engine; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct nv04_fifo_priv*,int ,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int
FUNC_4(struct nouveau_object *VAR_1)
{
 struct nv04_fifo_priv *VAR_2 = (void *)VAR_1->engine;
 struct nv04_fifo_chan *VAR_3 = (void *)VAR_1;
 u32 VAR_4 = 1 << VAR_3->base.chid;
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_3->base);
 if (VAR_6)
  return VAR_6;

 FUNC_2(&VAR_2->base.lock, VAR_5);
 FUNC_1(VAR_2, VAR_0, VAR_4, VAR_4);
 FUNC_3(&VAR_2->base.lock, VAR_5);
 return 0;
}
