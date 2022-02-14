
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct request {int dummy; } ;
struct ide_cmd {int sg_nents; struct request* rq; } ;
struct TYPE_4__ {struct scatterlist* sg_table; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {int queue; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (int ,struct request*,struct scatterlist*) ;

void FUNC_1(ide_drive_t *VAR_0, struct ide_cmd *VAR_1)
{
 ide_hwif_t *VAR_2 = VAR_0->hwif;
 struct scatterlist *VAR_3 = VAR_2->sg_table;
 struct request *VAR_4 = VAR_1->rq;

 VAR_1->sg_nents = FUNC_0(VAR_0->queue, VAR_4, VAR_3);
}
