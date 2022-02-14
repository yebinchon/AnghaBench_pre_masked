
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ahc_softc {int dummy; } ;
typedef int dma_addr_t ;
typedef void* bus_size_t ;
typedef TYPE_1__* bus_dma_tag_t ;
typedef int bus_dma_filter_t ;
struct TYPE_5__ {void* maxsize; void* boundary; void* alignment; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int ,int ) ;

int
FUNC_1(struct ahc_softc *VAR_3, bus_dma_tag_t VAR_4,
     bus_size_t VAR_5, bus_size_t VAR_6,
     dma_addr_t VAR_7, dma_addr_t VAR_8,
     bus_dma_filter_t *VAR_9, void *VAR_10,
     bus_size_t VAR_11, int VAR_12,
     bus_size_t VAR_13, int VAR_14, bus_dma_tag_t *VAR_15)
{
 bus_dma_tag_t VAR_16;

 VAR_16 = FUNC_0(sizeof(*VAR_16), VAR_1, VAR_2);
 if (VAR_16 == ((void*)0))
  return (VAR_0);
 VAR_16->alignment = VAR_5;
 VAR_16->boundary = VAR_6;
 VAR_16->maxsize = VAR_11;
 *VAR_15 = VAR_16;
 return (0);
}
