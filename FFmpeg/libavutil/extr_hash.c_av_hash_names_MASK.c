
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

const char *FUNC_0(int VAR_2)
{
    if (VAR_2 < 0 || VAR_2 >= VAR_0) return ((void*)0);
    return VAR_1[VAR_2].name;
}
