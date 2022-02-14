
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxa_dma_desc {int ddadr; } ;
struct pxa_camera_dev {int channels; struct pxa_dma_desc** sg_tail; } ;
struct pxa_buffer {TYPE_1__* dmas; } ;
struct TYPE_2__ {int sglen; int sg_dma; struct pxa_dma_desc* sg_cpu; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pxa_camera_dev *VAR_1,
     struct pxa_buffer *VAR_2)
{
 int VAR_3;
 struct pxa_dma_desc *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->channels; VAR_3++) {
  VAR_4 = VAR_2->dmas[VAR_3].sg_cpu + VAR_2->dmas[VAR_3].sglen;
  VAR_4->ddadr = VAR_0;

  if (VAR_1->sg_tail[VAR_3])

   VAR_1->sg_tail[VAR_3]->ddadr = VAR_2->dmas[VAR_3].sg_dma;


  VAR_1->sg_tail[VAR_3] = VAR_4;
 }
}
