
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * epthru; int epthru_dma_addr; int * pthru; int pthru_dma_addr; int * sgl64; int sgl_dma_addr; } ;
typedef TYPE_1__ scb_t ;
typedef int mega_sgl64 ;
typedef int mega_passthru ;
typedef int mega_ext_passthru ;
struct TYPE_5__ {int max_cmds; int sglen; int dev; TYPE_1__* scb_list; } ;
typedef TYPE_2__ adapter_t ;


 int FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static inline void
FUNC_1(adapter_t *VAR_0)
{
 scb_t *VAR_1;
 int VAR_2;

 for(VAR_2 = 0; VAR_2 < VAR_0->max_cmds; VAR_2++) {

  VAR_1 = &VAR_0->scb_list[VAR_2];

  if( VAR_1->sgl64 ) {
   FUNC_0(VAR_0->dev,
    sizeof(mega_sgl64) * VAR_0->sglen,
    VAR_1->sgl64,
    VAR_1->sgl_dma_addr);

   VAR_1->sgl64 = ((void*)0);
  }

  if( VAR_1->pthru ) {
   FUNC_0(VAR_0->dev, sizeof(mega_passthru),
    VAR_1->pthru, VAR_1->pthru_dma_addr);

   VAR_1->pthru = ((void*)0);
  }

  if( VAR_1->epthru ) {
   FUNC_0(VAR_0->dev,
    sizeof(mega_ext_passthru),
    VAR_1->epthru, VAR_1->epthru_dma_addr);

   VAR_1->epthru = ((void*)0);
  }

 }
}
