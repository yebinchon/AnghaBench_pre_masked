
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_filter_spec {int priority; int flags; unsigned int dmaq_id; int type; } ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;
typedef enum efx_filter_flags { ____Placeholder_efx_filter_flags } efx_filter_flags ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct efx_filter_spec *VAR_2,
          enum efx_filter_priority VAR_3,
          enum efx_filter_flags VAR_4,
          unsigned VAR_5)
{
 VAR_2->type = VAR_1;
 VAR_2->priority = VAR_3;
 VAR_2->flags = VAR_0 | VAR_4;
 VAR_2->dmaq_id = VAR_5;
}
