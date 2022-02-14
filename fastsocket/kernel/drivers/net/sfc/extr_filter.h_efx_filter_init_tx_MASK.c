
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_filter_spec {unsigned int dmaq_id; int flags; int priority; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_0(struct efx_filter_spec *VAR_3,
          unsigned VAR_4)
{
 VAR_3->type = VAR_2;
 VAR_3->priority = VAR_1;
 VAR_3->flags = VAR_0;
 VAR_3->dmaq_id = VAR_4;
}
