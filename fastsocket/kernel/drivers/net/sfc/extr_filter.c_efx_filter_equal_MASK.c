
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_filter_spec {scalar_t__ type; int flags; scalar_t__ dmaq_id; int data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_1(const struct efx_filter_spec *VAR_1,
        const struct efx_filter_spec *VAR_2)
{
 if (VAR_1->type != VAR_2->type ||
     FUNC_0(VAR_1->data, VAR_2->data, sizeof(VAR_1->data)))
  return 0;

 if (VAR_1->flags & VAR_0 &&
     VAR_1->dmaq_id != VAR_2->dmaq_id)
  return 0;

 return 1;
}
