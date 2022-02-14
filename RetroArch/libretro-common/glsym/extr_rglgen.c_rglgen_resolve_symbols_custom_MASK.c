
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rglgen_sym_map {int ptr; scalar_t__ sym; } ;
typedef int (* rglgen_proc_address_t ) (scalar_t__) ;
typedef int rglgen_func_t ;
typedef int func ;


 int FUNC_0 (int ,int *,int) ;

void FUNC_1(rglgen_proc_address_t VAR_0,
      const struct rglgen_sym_map *VAR_1)
{
   for (; VAR_1->sym; VAR_1++)
   {
      rglgen_func_t VAR_2 = VAR_0(VAR_1->sym);
      FUNC_0(VAR_1->ptr, &VAR_2, sizeof(VAR_2));
   }
}
