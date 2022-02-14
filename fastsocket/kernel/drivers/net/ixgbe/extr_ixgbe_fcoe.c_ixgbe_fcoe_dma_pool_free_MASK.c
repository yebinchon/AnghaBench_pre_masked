
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_fcoe_ddp_pool {int * pool; } ;
struct ixgbe_fcoe {int ddp_pool; } ;


 int FUNC_0 (int *) ;
 struct ixgbe_fcoe_ddp_pool* FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_fcoe *VAR_0, unsigned int VAR_1)
{
 struct ixgbe_fcoe_ddp_pool *VAR_2;

 VAR_2 = FUNC_1(VAR_0->ddp_pool, VAR_1);
 if (VAR_2->pool)
  FUNC_0(VAR_2->pool);
 VAR_2->pool = ((void*)0);
}
