
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct asd_phy {int * id_frm_tok; } ;
struct TYPE_7__ {int * vaddr; int dma_handle; } ;
struct TYPE_8__ {TYPE_3__ next_scb; int * dl; int * actual_dl; int * tc_index_bitmap; int * tc_index_array; scalar_t__ edb_arr; scalar_t__ escb_arr; } ;
struct TYPE_5__ {int * area; } ;
struct TYPE_6__ {TYPE_1__ ue; int * ddb_bitmap; int * scb_ext; int * ddb_ext; } ;
struct asd_ha_struct {int * scb_pool; TYPE_4__ seq; TYPE_2__ hw_prof; struct asd_phy* phys; } ;


 int VAR_0 ;
 int FUNC_0 (struct asd_ha_struct*,int *) ;
 int FUNC_1 (struct asd_ha_struct*) ;
 int FUNC_2 (struct asd_ha_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct asd_ha_struct *VAR_1)
{
 int VAR_2;

 if (VAR_1->hw_prof.ddb_ext)
  FUNC_0(VAR_1, VAR_1->hw_prof.ddb_ext);
 if (VAR_1->hw_prof.scb_ext)
  FUNC_0(VAR_1, VAR_1->hw_prof.scb_ext);

 if (VAR_1->hw_prof.ddb_bitmap)
  FUNC_5(VAR_1->hw_prof.ddb_bitmap);
 VAR_1->hw_prof.ddb_bitmap = ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct asd_phy *VAR_3 = &VAR_1->phys[VAR_2];

  FUNC_0(VAR_1, VAR_3->id_frm_tok);
 }
 if (VAR_1->seq.escb_arr)
  FUNC_2(VAR_1);
 if (VAR_1->seq.edb_arr)
  FUNC_1(VAR_1);
 if (VAR_1->hw_prof.ue.area) {
  FUNC_5(VAR_1->hw_prof.ue.area);
  VAR_1->hw_prof.ue.area = ((void*)0);
 }
 if (VAR_1->seq.tc_index_array) {
  FUNC_5(VAR_1->seq.tc_index_array);
  FUNC_5(VAR_1->seq.tc_index_bitmap);
  VAR_1->seq.tc_index_array = ((void*)0);
  VAR_1->seq.tc_index_bitmap = ((void*)0);
 }
 if (VAR_1->seq.actual_dl) {
   FUNC_0(VAR_1, VAR_1->seq.actual_dl);
   VAR_1->seq.actual_dl = ((void*)0);
   VAR_1->seq.dl = ((void*)0);
 }
 if (VAR_1->seq.next_scb.vaddr) {
  FUNC_4(VAR_1->scb_pool, VAR_1->seq.next_scb.vaddr,
         VAR_1->seq.next_scb.dma_handle);
  VAR_1->seq.next_scb.vaddr = ((void*)0);
 }
 FUNC_3(VAR_1->scb_pool);
 VAR_1->scb_pool = ((void*)0);
}
