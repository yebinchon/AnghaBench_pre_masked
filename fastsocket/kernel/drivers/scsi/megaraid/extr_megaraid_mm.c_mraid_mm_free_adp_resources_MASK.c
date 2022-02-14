
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pthru32_h; int pthru32; } ;
typedef TYPE_1__ uioc_t ;
struct TYPE_7__ {int max_kioc; int pthru_dma_pool; TYPE_1__* mbox_list; TYPE_1__* kioc_list; } ;
typedef TYPE_2__ mraid_mmadp_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(mraid_mmadp_t *VAR_0)
{
 uioc_t *VAR_1;
 int VAR_2;

 FUNC_1(VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_0->max_kioc; VAR_2++) {

  VAR_1 = VAR_0->kioc_list + VAR_2;

  FUNC_3(VAR_0->pthru_dma_pool, VAR_1->pthru32,
    VAR_1->pthru32_h);
 }

 FUNC_0(VAR_0->kioc_list);
 FUNC_0(VAR_0->mbox_list);

 FUNC_2(VAR_0->pthru_dma_pool);


 return;
}
