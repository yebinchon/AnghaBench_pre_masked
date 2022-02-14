
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int max_txq_num; } ;
struct TYPE_3__ {int dma; } ;
struct il_priv {TYPE_2__ hw_params; int lock; TYPE_1__ kw; } ;


 int VAR_0 ;
 int FUNC_0 (struct il_priv*,int ) ;
 int FUNC_1 (struct il_priv*,int) ;
 int FUNC_2 (struct il_priv*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void
FUNC_5(struct il_priv *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 FUNC_3(&VAR_1->lock, VAR_3);


 FUNC_0(VAR_1, 0);

 FUNC_2(VAR_1, VAR_0, VAR_1->kw.dma >> 4);

 FUNC_4(&VAR_1->lock, VAR_3);


 for (VAR_2 = 0; VAR_2 < VAR_1->hw_params.max_txq_num; VAR_2++)
  FUNC_1(VAR_1, VAR_2);
}
