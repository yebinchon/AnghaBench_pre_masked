
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_fcoe_ddp_pool {scalar_t__ noddp_ext_buff; scalar_t__ noddp; struct dma_pool* pool; } ;
struct ixgbe_fcoe {int ddp_pool; } ;
struct dma_pool {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dma_pool* FUNC_0 (char*,struct device*,int ,int ,int ) ;
 struct ixgbe_fcoe_ddp_pool* FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (char*,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct ixgbe_fcoe *VAR_4,
         struct device *VAR_5,
         unsigned int VAR_6)
{
 struct ixgbe_fcoe_ddp_pool *VAR_7;
 struct dma_pool *VAR_8;
 char VAR_9[32];

 FUNC_2(VAR_9, 32, "ixgbe_fcoe_ddp_%d", VAR_6);

 VAR_8 = FUNC_0(VAR_9, VAR_5, VAR_2,
          VAR_1, VAR_3);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_4->ddp_pool, VAR_6);
 VAR_7->pool = VAR_8;
 VAR_7->noddp = 0;
 VAR_7->noddp_ext_buff = 0;

 return 0;
}
