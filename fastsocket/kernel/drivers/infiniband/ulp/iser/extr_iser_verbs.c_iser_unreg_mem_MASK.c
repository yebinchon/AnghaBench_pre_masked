
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_mem_reg {int * mem_h; } ;
struct ib_pool_fmr {int dummy; } ;


 int FUNC_0 (struct ib_pool_fmr*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int) ;

void FUNC_3(struct iser_mem_reg *VAR_0)
{
 int VAR_1;

 FUNC_1("PHYSICAL Mem.Unregister mem_h %p\n",VAR_0->mem_h);

 VAR_1 = FUNC_0((struct ib_pool_fmr *)VAR_0->mem_h);
 if (VAR_1)
  FUNC_2("ib_fmr_pool_unmap failed %d\n", VAR_1);

 VAR_0->mem_h = ((void*)0);
}
