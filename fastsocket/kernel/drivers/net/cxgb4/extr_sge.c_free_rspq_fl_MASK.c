
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_rspq {size_t cntxt_id; int size; int iqe_len; size_t abs_id; int * desc; int * netdev; int napi; int phys_addr; } ;
struct sge_fl {int cntxt_id; int size; int * desc; int * sdesc; int addr; int avail; } ;
struct TYPE_2__ {size_t ingr_start; int ** ingr_map; } ;
struct adapter {int pdev_dev; int fn; TYPE_1__ sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (struct adapter*,struct sge_fl*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct adapter*,int ,int ,int ,int ,size_t,unsigned int,int) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_2, struct sge_rspq *VAR_3,
    struct sge_fl *VAR_4)
{
 unsigned int VAR_5 = VAR_4 ? VAR_4->cntxt_id : 0xffff;

 VAR_2->sge.ingr_map[VAR_3->cntxt_id - VAR_2->sge.ingr_start] = ((void*)0);
 FUNC_4(VAR_2, VAR_2->fn, VAR_2->fn, 0, VAR_0,
     VAR_3->cntxt_id, VAR_5, 0xffff);
 FUNC_0(VAR_2->pdev_dev, (VAR_3->size + 1) * VAR_3->iqe_len,
     VAR_3->desc, VAR_3->phys_addr);
 FUNC_3(&VAR_3->napi);
 VAR_3->netdev = ((void*)0);
 VAR_3->cntxt_id = VAR_3->abs_id = 0;
 VAR_3->desc = ((void*)0);

 if (VAR_4) {
  FUNC_1(VAR_2, VAR_4, VAR_4->avail);
  FUNC_0(VAR_2->pdev_dev, VAR_4->size * 8 + VAR_1,
      VAR_4->desc, VAR_4->addr);
  FUNC_2(VAR_4->sdesc);
  VAR_4->sdesc = ((void*)0);
  VAR_4->cntxt_id = 0;
  VAR_4->desc = ((void*)0);
 }
}
