
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dtat_class; int dtat_data; int dtat_name; } ;
typedef TYPE_1__ dtrace_attribute_t ;
typedef int dof_attr_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;

__attribute__((used)) static void
FUNC_3(dtrace_attribute_t *VAR_0, const dof_attr_t VAR_1)
{
 VAR_0->dtat_name = FUNC_2(VAR_1);
 VAR_0->dtat_data = FUNC_1(VAR_1);
 VAR_0->dtat_class = FUNC_0(VAR_1);
}
