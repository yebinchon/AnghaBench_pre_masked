
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {scalar_t__ mchip_dmahandle; scalar_t__* mchip_ptable_toc; TYPE_1__* mchip_dev; scalar_t__** mchip_ptable; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int *,int ,scalar_t__*,int ) ;
 int FUNC_2 (int *,int ,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (scalar_t__**,int ,int) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static int FUNC_5(void)
{
 u32 *VAR_4;
 int VAR_5;

 FUNC_4(VAR_3.mchip_ptable, 0, sizeof(VAR_3.mchip_ptable));


 if (FUNC_3(&VAR_3.mchip_dev->dev, FUNC_0(32)))
  return -1;

 VAR_3.mchip_ptable_toc = FUNC_1(&VAR_3.mchip_dev->dev,
         VAR_2,
         &VAR_3.mchip_dmahandle,
         VAR_0);
 if (!VAR_3.mchip_ptable_toc) {
  VAR_3.mchip_dmahandle = 0;
  return -1;
 }

 VAR_4 = VAR_3.mchip_ptable_toc;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  dma_addr_t VAR_6;
  VAR_3.mchip_ptable[VAR_5] = FUNC_1(&VAR_3.mchip_dev->dev,
         VAR_2,
         &VAR_6,
         VAR_0);
  if (!VAR_3.mchip_ptable[VAR_5]) {
   int VAR_7;
   VAR_4 = VAR_3.mchip_ptable_toc;
   for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
    VAR_6 = (dma_addr_t) *VAR_4;
    FUNC_2(&VAR_3.mchip_dev->dev,
        VAR_2,
        VAR_3.mchip_ptable[VAR_7], VAR_6);
    VAR_4++;
   }
   FUNC_2(&VAR_3.mchip_dev->dev,
       VAR_2,
       VAR_3.mchip_ptable_toc,
       VAR_3.mchip_dmahandle);
   VAR_3.mchip_ptable_toc = ((void*)0);
   VAR_3.mchip_dmahandle = 0;
   return -1;
  }
  *VAR_4 = (u32) VAR_6;
  VAR_4++;
 }
 return 0;
}
