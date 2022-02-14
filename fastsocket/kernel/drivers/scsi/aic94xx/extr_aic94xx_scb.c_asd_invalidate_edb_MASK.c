
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_el {scalar_t__ flags; } ;
struct empty_scb {scalar_t__ num_valid; struct sg_el* eb; } ;
struct asd_seq_data {struct asd_dma_tok** edb_arr; } ;
struct asd_dma_tok {int vaddr; } ;
struct asd_ascb {int edb_index; TYPE_2__* ha; int list; TYPE_1__* scb; } ;
struct TYPE_4__ {struct asd_seq_data seq; } ;
struct TYPE_3__ {struct empty_scb escb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,struct asd_ascb*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(struct asd_ascb *VAR_3, int VAR_4)
{
 struct asd_seq_data *VAR_5 = &VAR_3->ha->seq;
 struct empty_scb *VAR_6 = &VAR_3->scb->escb;
 struct sg_el *VAR_7 = &VAR_6->eb[VAR_4];
 struct asd_dma_tok *VAR_8 = VAR_5->edb_arr[VAR_3->edb_index + VAR_4];

 FUNC_4(VAR_8->vaddr, 0, VAR_1);
 VAR_7->flags |= VAR_2;
 VAR_6->num_valid--;

 if (VAR_6->num_valid == 0) {
  int VAR_9;
  VAR_6->num_valid = VAR_0;
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
   VAR_6->eb[VAR_9].flags = 0;
  if (!FUNC_3(&VAR_3->list))
   FUNC_2(&VAR_3->list);
  VAR_9 = FUNC_0(VAR_3->ha, VAR_3, 1);
  if (VAR_9)
   FUNC_1("couldn't post escb, err:%d\n", VAR_9);
 }
}
