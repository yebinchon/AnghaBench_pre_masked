
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dtat_name; scalar_t__ dtat_data; scalar_t__ dtat_class; } ;
typedef TYPE_1__ dtrace_attribute_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(const dtrace_attribute_t *VAR_2)
{
 return (VAR_2->dtat_name > VAR_1 ||
     VAR_2->dtat_data > VAR_1 ||
     VAR_2->dtat_class > VAR_0);
}
