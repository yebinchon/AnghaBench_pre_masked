
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int upper; int lower; } ;
union u64bit {scalar_t__ val; TYPE_1__ val32; } ;
struct ctlr_info {int pdev; } ;
struct TYPE_5__ {int upper; int lower; } ;
struct TYPE_6__ {TYPE_2__ Addr; } ;
struct CommandList {int busaddr; struct CommandList* err_info; TYPE_3__ ErrDesc; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,struct CommandList*,int ) ;

__attribute__((used)) static void FUNC_1(struct ctlr_info *VAR_1, struct CommandList *VAR_2)
{
 union u64bit VAR_3;

 VAR_3 = VAR_2->ErrDesc.Addr.lower;
 VAR_3 = VAR_2->ErrDesc.Addr.upper;
 FUNC_0(VAR_1->pdev, sizeof(*VAR_2->err_info),
       VAR_2->err_info, (dma_addr_t) VAR_3);
 FUNC_0(VAR_1->pdev, sizeof(*VAR_2),
       VAR_2, (dma_addr_t) (VAR_2->busaddr & VAR_0));
}
