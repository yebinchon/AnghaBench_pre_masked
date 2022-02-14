
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; scalar_t__ role; } ;
typedef scalar_t__ MMALOMX_ROLE_T ;


 TYPE_1__* VAR_0 ;

const char *FUNC_0(MMALOMX_ROLE_T VAR_1)
{
    unsigned int VAR_2;
    for (VAR_2 = 0; VAR_0[VAR_2].name; VAR_2++)
       if (VAR_0[VAR_2].role == VAR_1)
          break;
    return VAR_0[VAR_2].name;
}
