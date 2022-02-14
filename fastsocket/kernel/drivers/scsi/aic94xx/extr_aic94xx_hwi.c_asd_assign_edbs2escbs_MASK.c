
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sg_el {int size; int bus_addr; } ;
struct empty_scb {int num_valid; struct sg_el* eb; } ;
struct asd_seq_data {int num_escbs; struct asd_dma_tok** edb_arr; struct asd_ascb** escb_arr; } ;
struct asd_ha_struct {struct asd_seq_data seq; } ;
struct asd_dma_tok {scalar_t__ size; scalar_t__ dma_handle; } ;
struct asd_ascb {int edb_index; TYPE_1__* scb; } ;
struct TYPE_2__ {struct empty_scb escb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sg_el*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct asd_ha_struct *VAR_1)
{
 struct asd_seq_data *VAR_2 = &VAR_1->seq;
 int VAR_3, VAR_4, VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_escbs; VAR_3++) {
  struct asd_ascb *VAR_6 = VAR_2->escb_arr[VAR_3];
  struct empty_scb *VAR_7 = &VAR_6->scb->escb;

  VAR_6->edb_index = VAR_5;

  VAR_7->num_valid = VAR_0;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   struct sg_el *VAR_8 = &VAR_7->eb[VAR_4];
   struct asd_dma_tok *VAR_9 = VAR_2->edb_arr[VAR_5++];

   FUNC_2(VAR_8, 0, sizeof(*VAR_8));
   VAR_8->bus_addr = FUNC_1(((u64) VAR_9->dma_handle));
   VAR_8->size = FUNC_0(((u32) VAR_9->size));
  }
 }
}
