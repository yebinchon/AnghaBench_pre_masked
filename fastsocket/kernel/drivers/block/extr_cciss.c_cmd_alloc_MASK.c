
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int upper; int lower; } ;
struct TYPE_13__ {TYPE_2__ val32; scalar_t__ val; } ;
typedef TYPE_4__ u64bit ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_14__ {int nr_cmds; int ctlr; int nr_allocs; scalar_t__ errinfo_pool_dhandle; TYPE_6__* errinfo_pool; scalar_t__ cmd_pool_dhandle; TYPE_6__* cmd_pool; scalar_t__ cmd_pool_bits; } ;
typedef TYPE_5__ ctlr_info_t ;
typedef scalar_t__ __u64 ;
typedef scalar_t__ __u32 ;
struct TYPE_10__ {int upper; int lower; } ;
struct TYPE_12__ {int Len; TYPE_1__ Addr; } ;
struct TYPE_15__ {int cmdindex; int ctlr; TYPE_3__ ErrDesc; scalar_t__ busaddr; int list; struct TYPE_15__* err_info; } ;
typedef int ErrorInfo_struct ;
typedef TYPE_6__ CommandList_struct ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static CommandList_struct *FUNC_4(ctlr_info_t *VAR_1)
{
 CommandList_struct *VAR_2;
 int VAR_3;
 u64bit VAR_4;
 dma_addr_t VAR_5, VAR_6;

 do {
  VAR_3 = FUNC_1(VAR_1->cmd_pool_bits, VAR_1->nr_cmds);
  if (VAR_3 == VAR_1->nr_cmds)
   return ((void*)0);
 } while (FUNC_3(VAR_3 & (VAR_0 - 1),
    VAR_1->cmd_pool_bits + (VAR_3 / VAR_0)) != 0);
 VAR_2 = VAR_1->cmd_pool + VAR_3;
 FUNC_2(VAR_2, 0, sizeof(CommandList_struct));
 VAR_5 = VAR_1->cmd_pool_dhandle + VAR_3 * sizeof(CommandList_struct);
 VAR_2->err_info = VAR_1->errinfo_pool + VAR_3;
 FUNC_2(VAR_2->err_info, 0, sizeof(ErrorInfo_struct));
 VAR_6 = VAR_1->errinfo_pool_dhandle
     + VAR_3 * sizeof(ErrorInfo_struct);
 VAR_1->nr_allocs++;

 VAR_2->cmdindex = VAR_3;

 FUNC_0(&VAR_2->list);
 VAR_2->busaddr = (__u32) VAR_5;
 VAR_4 = (__u64) VAR_6;
 VAR_2->ErrDesc.Addr.lower = VAR_4;
 VAR_2->ErrDesc.Addr.upper = VAR_4;
 VAR_2->ErrDesc.Len = sizeof(ErrorInfo_struct);

 VAR_2->ctlr = VAR_1->ctlr;
 return VAR_2;
}
