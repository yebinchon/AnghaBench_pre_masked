
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int length; } ;
struct mmc_omap_host {int sg_idx; int total_bytes_left; int buffer_bytes_left; int buffer; TYPE_1__* data; } ;
struct TYPE_2__ {struct scatterlist* sg; } ;


 int FUNC_0 (struct scatterlist*) ;

__attribute__((used)) static void
FUNC_1(struct mmc_omap_host *VAR_0)
{
 struct scatterlist *VAR_1;

 VAR_1 = VAR_0->data->sg + VAR_0->sg_idx;
 VAR_0->buffer_bytes_left = VAR_1->length;
 VAR_0->buffer = FUNC_0(VAR_1);
 if (VAR_0->buffer_bytes_left > VAR_0->total_bytes_left)
  VAR_0->buffer_bytes_left = VAR_0->total_bytes_left;
}
