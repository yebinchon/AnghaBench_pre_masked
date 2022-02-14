
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int upper; int lower; } ;
union u64bit {TYPE_2__ val32; scalar_t__ val; } ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ctlr_info {int pdev; } ;
struct TYPE_4__ {int upper; int lower; } ;
struct TYPE_6__ {int Len; TYPE_1__ Addr; } ;
struct CommandList {int cmdindex; struct ctlr_info* h; TYPE_3__ ErrDesc; scalar_t__ busaddr; int list; struct CommandList* err_info; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct CommandList*,int ,int) ;
 void* FUNC_2 (int ,int,scalar_t__*) ;
 int FUNC_3 (int ,int,struct CommandList*,scalar_t__) ;

__attribute__((used)) static struct CommandList *FUNC_4(struct ctlr_info *VAR_0)
{
 struct CommandList *VAR_1;
 union u64bit VAR_2;
 dma_addr_t VAR_3, VAR_4;

 VAR_1 = FUNC_2(VAR_0->pdev, sizeof(*VAR_1), &VAR_3);
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->cmdindex = -1;

 VAR_1->err_info = FUNC_2(VAR_0->pdev, sizeof(*VAR_1->err_info),
      &VAR_4);

 if (VAR_1->err_info == ((void*)0)) {
  FUNC_3(VAR_0->pdev,
   sizeof(*VAR_1), VAR_1, VAR_3);
  return ((void*)0);
 }
 FUNC_1(VAR_1->err_info, 0, sizeof(*VAR_1->err_info));

 FUNC_0(&VAR_1->list);
 VAR_1->busaddr = (u32) VAR_3;
 VAR_2 = (u64) VAR_4;
 VAR_1->ErrDesc.Addr.lower = VAR_2;
 VAR_1->ErrDesc.Addr.upper = VAR_2;
 VAR_1->ErrDesc.Len = sizeof(*VAR_1->err_info);

 VAR_1->h = VAR_0;
 return VAR_1;
}
