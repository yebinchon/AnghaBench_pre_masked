
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int * addr; int phys_addr; } ;
struct TYPE_5__ {int revision_id; } ;
struct netxen_adapter {TYPE_3__* pdev; TYPE_1__ dummy_dma; TYPE_2__ ahw; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netxen_adapter*,int ) ;
 int FUNC_1 (struct netxen_adapter*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,int ,int *,int ) ;

void FUNC_6(struct netxen_adapter *VAR_2)
{
 int VAR_3 = 100;
 u32 VAR_4;

 if (!FUNC_2(VAR_2->ahw.revision_id))
  return;

 if (!VAR_2->dummy_dma.addr)
  return;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if ((VAR_4 & 0x1) != 0) {
  FUNC_1(VAR_2, VAR_0, (VAR_4 | 0x2));

  while ((VAR_4 & 0x1) != 0) {

   FUNC_4(50);

   VAR_4 = FUNC_0(VAR_2, VAR_0);

   if (--VAR_3 == 0)
    break;
  }
 }

 if (VAR_3) {
  FUNC_5(VAR_2->pdev,
       VAR_1,
       VAR_2->dummy_dma.addr,
       VAR_2->dummy_dma.phys_addr);
  VAR_2->dummy_dma.addr = ((void*)0);
 } else
  FUNC_3(&VAR_2->pdev->dev, "dma_watchdog_shutdown failed\n");
}
