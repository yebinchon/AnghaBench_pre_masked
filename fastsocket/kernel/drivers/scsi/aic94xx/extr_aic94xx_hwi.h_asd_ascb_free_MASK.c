
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tc_index_lock; } ;
struct asd_ha_struct {int scb_pool; TYPE_2__ seq; } ;
struct TYPE_3__ {int dma_handle; int vaddr; } ;
struct asd_ascb {TYPE_1__ dma_scb; struct asd_ha_struct* ha; int tc_index; int list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,struct asd_ascb*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_7(struct asd_ascb *VAR_1)
{
 if (VAR_1) {
  struct asd_ha_struct *VAR_2 = VAR_1->ha;
  unsigned long VAR_3;

  FUNC_0(!FUNC_4(&VAR_1->list));
  FUNC_5(&VAR_1->ha->seq.tc_index_lock, VAR_3);
  FUNC_1(&VAR_1->ha->seq, VAR_1->tc_index);
  FUNC_6(&VAR_1->ha->seq.tc_index_lock, VAR_3);
  FUNC_2(VAR_2->scb_pool, VAR_1->dma_scb.vaddr,
         VAR_1->dma_scb.dma_handle);
  FUNC_3(VAR_0, VAR_1);
 }
}
