
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dma_addr; } ;
struct iwl_txq {TYPE_1__ q; int lock; scalar_t__ need_update; } ;
struct iwl_trans {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int,int,int ) ;
 int FUNC_3 (struct iwl_trans*,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iwl_trans *VAR_1, struct iwl_txq *VAR_2,
         int VAR_3, u32 VAR_4)
{
 int VAR_5;

 VAR_2->need_update = 0;



 FUNC_0(VAR_0 & (VAR_0 - 1));


 VAR_5 = FUNC_2(&VAR_2->q, VAR_0, VAR_3,
   VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_4(&VAR_2->lock);





 FUNC_3(VAR_1, FUNC_1(VAR_4),
      VAR_2->q.dma_addr >> 8);

 return 0;
}
