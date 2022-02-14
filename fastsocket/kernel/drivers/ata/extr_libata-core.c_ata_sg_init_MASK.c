
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct ata_queued_cmd {unsigned int n_elem; struct scatterlist* sg; struct scatterlist* cursg; } ;



void FUNC_0(struct ata_queued_cmd *VAR_0, struct scatterlist *VAR_1,
   unsigned int VAR_2)
{
 VAR_0->sg = VAR_1;
 VAR_0->n_elem = VAR_2;
 VAR_0->cursg = VAR_0->sg;
}
