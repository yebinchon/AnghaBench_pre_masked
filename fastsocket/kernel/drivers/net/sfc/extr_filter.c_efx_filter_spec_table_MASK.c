
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_filter_table {int dummy; } ;
struct efx_filter_state {struct efx_filter_table* table; } ;
struct efx_filter_spec {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (struct efx_filter_spec const*) ;

__attribute__((used)) static struct efx_filter_table *
FUNC_1(struct efx_filter_state *VAR_1,
        const struct efx_filter_spec *VAR_2)
{
 if (VAR_2->type == VAR_0)
  return ((void*)0);
 else
  return &VAR_1->table[FUNC_0(VAR_2)];
}
