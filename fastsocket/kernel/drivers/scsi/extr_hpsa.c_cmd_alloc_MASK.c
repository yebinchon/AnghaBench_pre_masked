
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
struct ctlr_info {int nr_cmds; scalar_t__ errinfo_pool_dhandle; struct CommandList* errinfo_pool; scalar_t__ cmd_pool_dhandle; struct CommandList* cmd_pool; int lock; scalar_t__ cmd_pool_bits; } ;
struct TYPE_4__ {int upper; int lower; } ;
struct TYPE_6__ {int Len; TYPE_1__ Addr; } ;
struct CommandList {int cmdindex; struct ctlr_info* h; TYPE_3__ ErrDesc; scalar_t__ busaddr; int list; struct CommandList* err_info; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct CommandList*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static struct CommandList *FUNC_6(struct ctlr_info *VAR_1)
{
 struct CommandList *VAR_2;
 int VAR_3;
 union u64bit VAR_4;
 dma_addr_t VAR_5, VAR_6;
 unsigned long VAR_7;

 FUNC_3(&VAR_1->lock, VAR_7);
 do {
  VAR_3 = FUNC_1(VAR_1->cmd_pool_bits, VAR_1->nr_cmds);
  if (VAR_3 == VAR_1->nr_cmds) {
   FUNC_4(&VAR_1->lock, VAR_7);
   return ((void*)0);
  }
 } while (FUNC_5
   (VAR_3 & (VAR_0 - 1),
    VAR_1->cmd_pool_bits + (VAR_3 / VAR_0)) != 0);
 FUNC_4(&VAR_1->lock, VAR_7);

 VAR_2 = VAR_1->cmd_pool + VAR_3;
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 VAR_5 = VAR_1->cmd_pool_dhandle
     + VAR_3 * sizeof(*VAR_2);
 VAR_2->err_info = VAR_1->errinfo_pool + VAR_3;
 FUNC_2(VAR_2->err_info, 0, sizeof(*VAR_2->err_info));
 VAR_6 = VAR_1->errinfo_pool_dhandle
     + VAR_3 * sizeof(*VAR_2->err_info);

 VAR_2->cmdindex = VAR_3;

 FUNC_0(&VAR_2->list);
 VAR_2->busaddr = (u32) VAR_5;
 VAR_4 = (u64) VAR_6;
 VAR_2->ErrDesc.Addr.lower = VAR_4;
 VAR_2->ErrDesc.Addr.upper = VAR_4;
 VAR_2->ErrDesc.Len = sizeof(*VAR_2->err_info);

 VAR_2->h = VAR_1;
 return VAR_2;
}
