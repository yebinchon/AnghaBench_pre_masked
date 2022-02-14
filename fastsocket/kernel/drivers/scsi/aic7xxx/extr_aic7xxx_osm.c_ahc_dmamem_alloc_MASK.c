
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ahc_softc {int dev_softc; } ;
typedef int bus_dmamap_t ;
typedef TYPE_1__* bus_dma_tag_t ;
struct TYPE_3__ {int maxsize; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ,int *) ;

int
FUNC_1(struct ahc_softc *VAR_1, bus_dma_tag_t VAR_2, void** VAR_3,
   int VAR_4, bus_dmamap_t *VAR_5)
{
 *VAR_3 = FUNC_0(VAR_1->dev_softc,
          VAR_2->maxsize, VAR_5);
 if (*VAR_3 == ((void*)0))
  return VAR_0;
 return 0;
}
