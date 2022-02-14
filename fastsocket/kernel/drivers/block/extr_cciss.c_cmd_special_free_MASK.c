
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int upper; int lower; } ;
struct TYPE_14__ {scalar_t__ val; TYPE_1__ val32; } ;
typedef TYPE_4__ u64bit ;
typedef int u32 ;
typedef int dma_addr_t ;
struct TYPE_15__ {int pdev; } ;
typedef TYPE_5__ ctlr_info_t ;
struct TYPE_13__ {int upper; int lower; } ;
struct TYPE_12__ {TYPE_3__ Addr; } ;
struct TYPE_16__ {scalar_t__ busaddr; struct TYPE_16__* err_info; TYPE_2__ ErrDesc; } ;
typedef int ErrorInfo_struct ;
typedef TYPE_6__ CommandList_struct ;


 scalar_t__ FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int ,int,TYPE_6__*,int ) ;

__attribute__((used)) static void FUNC_2(ctlr_info_t *VAR_0, CommandList_struct *VAR_1)
{
 u64bit VAR_2;

 VAR_2 = VAR_1->ErrDesc.Addr.lower;
 VAR_2 = VAR_1->ErrDesc.Addr.upper;
 FUNC_1(VAR_0->pdev, sizeof(ErrorInfo_struct),
       VAR_1->err_info, (dma_addr_t) VAR_2);
 FUNC_1(VAR_0->pdev, sizeof(CommandList_struct),
     VAR_1, (dma_addr_t) FUNC_0(VAR_0, (u32) VAR_1->busaddr));
}
