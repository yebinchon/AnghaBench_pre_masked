
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int dma_addr_t ;
struct TYPE_12__ {TYPE_4__* hdr; } ;
struct TYPE_15__ {int physAddr; int timeout; int PageLength; int action; TYPE_1__ cfghdr; int PageType; } ;
struct TYPE_14__ {int pcidev; int board_tracer; int board_assembly; int board_name; } ;
struct TYPE_13__ {int BoardTracerNumber; int BoardAssembly; int BoardName; } ;
typedef TYPE_2__ ManufacturingPage0_t ;
typedef TYPE_3__ MPT_ADAPTER ;
typedef TYPE_4__ ConfigPageHeader_t ;
typedef TYPE_4__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 TYPE_2__* FUNC_3 (int ,int,int*) ;
 int FUNC_4 (int ,int,TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_5(MPT_ADAPTER *VAR_3)
{
 CONFIGPARMS VAR_4;
 ConfigPageHeader_t VAR_5;
 dma_addr_t VAR_6;
 ManufacturingPage0_t *VAR_7 = ((void*)0);

 FUNC_1(&VAR_4, 0 , sizeof(CONFIGPARMS));
 FUNC_1(&VAR_5, 0 , sizeof(ConfigPageHeader_t));

 VAR_5.PageType = VAR_2;
 VAR_4.cfghdr.hdr = &VAR_5;
 VAR_4.physAddr = -1;
 VAR_4.action = VAR_0;
 VAR_4.timeout = 10;

 if (FUNC_2(VAR_3, &VAR_4) != 0)
  goto out;

 if (!VAR_4.cfghdr.hdr->PageLength)
  goto out;

 VAR_4.action = VAR_1;
 VAR_7 = FUNC_3(VAR_3->pcidev, VAR_5.PageLength * 4, &VAR_6);
 if (!VAR_7)
  goto out;

 VAR_4.physAddr = VAR_6;

 if (FUNC_2(VAR_3, &VAR_4) != 0)
  goto out;

 FUNC_0(VAR_3->board_name, VAR_7->BoardName, sizeof(VAR_3->board_name));
 FUNC_0(VAR_3->board_assembly, VAR_7->BoardAssembly, sizeof(VAR_3->board_assembly));
 FUNC_0(VAR_3->board_tracer, VAR_7->BoardTracerNumber, sizeof(VAR_3->board_tracer));

 out:

 if (VAR_7)
  FUNC_4(VAR_3->pcidev, VAR_5.PageLength * 4, VAR_7, VAR_6);
}
