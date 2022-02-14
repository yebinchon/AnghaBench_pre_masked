
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {scalar_t__ phys_addr; int * addr; } ;
struct TYPE_5__ {int revision_id; } ;
struct netxen_adapter {TYPE_1__ dummy_dma; TYPE_3__* pdev; TYPE_2__ ahw; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netxen_adapter*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (TYPE_3__*,int ,scalar_t__*) ;

int FUNC_4(struct netxen_adapter *VAR_4)
{
 u64 VAR_5;
 u32 VAR_6, VAR_7;

 if (!FUNC_1(VAR_4->ahw.revision_id))
  return 0;

 VAR_4->dummy_dma.addr = FUNC_3(VAR_4->pdev,
     VAR_3,
     &VAR_4->dummy_dma.phys_addr);
 if (VAR_4->dummy_dma.addr == ((void*)0)) {
  FUNC_2(&VAR_4->pdev->dev,
   "ERROR: Could not allocate dummy DMA memory\n");
  return -VAR_2;
 }

 VAR_5 = (uint64_t) VAR_4->dummy_dma.phys_addr;
 VAR_6 = (VAR_5 >> 32) & 0xffffffff;
 VAR_7 = VAR_5 & 0xffffffff;

 FUNC_0(VAR_4, VAR_0, VAR_6);
 FUNC_0(VAR_4, VAR_1, VAR_7);

 return 0;
}
