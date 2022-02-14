
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int upper; int lower; } ;
struct TYPE_15__ {TYPE_2__ val32; scalar_t__ val; } ;
typedef TYPE_4__ u64bit ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_16__ {int ctlr; int pdev; } ;
typedef TYPE_5__ ctlr_info_t ;
typedef scalar_t__ __u64 ;
typedef scalar_t__ __u32 ;
struct TYPE_12__ {int upper; int lower; } ;
struct TYPE_14__ {int Len; TYPE_1__ Addr; } ;
struct TYPE_17__ {int cmdindex; int ctlr; TYPE_3__ ErrDesc; scalar_t__ busaddr; int list; struct TYPE_17__* err_info; } ;
typedef TYPE_6__ ErrorInfo_struct ;
typedef TYPE_6__ CommandList_struct ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int,scalar_t__*) ;
 int FUNC_3 (int ,int,TYPE_6__*,scalar_t__) ;

__attribute__((used)) static CommandList_struct *FUNC_4(ctlr_info_t *VAR_0)
{
 CommandList_struct *VAR_1;
 u64bit VAR_2;
 dma_addr_t VAR_3, VAR_4;

 VAR_1 = (CommandList_struct *) FUNC_2(VAR_0->pdev,
  sizeof(CommandList_struct), &VAR_3);
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_1, 0, sizeof(CommandList_struct));

 VAR_1->cmdindex = -1;

 VAR_1->err_info = (ErrorInfo_struct *)
     FUNC_2(VAR_0->pdev, sizeof(ErrorInfo_struct),
      &VAR_4);

 if (VAR_1->err_info == ((void*)0)) {
  FUNC_3(VAR_0->pdev,
   sizeof(CommandList_struct), VAR_1, VAR_3);
  return ((void*)0);
 }
 FUNC_1(VAR_1->err_info, 0, sizeof(ErrorInfo_struct));

 FUNC_0(&VAR_1->list);
 VAR_1->busaddr = (__u32) VAR_3;
 VAR_2 = (__u64) VAR_4;
 VAR_1->ErrDesc.Addr.lower = VAR_2;
 VAR_1->ErrDesc.Addr.upper = VAR_2;
 VAR_1->ErrDesc.Len = sizeof(ErrorInfo_struct);

 VAR_1->ctlr = VAR_0->ctlr;
 return VAR_1;
}
