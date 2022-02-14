
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char const* name; } ;
struct TYPE_4__ {size_t type; } ;
typedef TYPE_1__ AVHashContext ;


 TYPE_2__* VAR_0 ;

const char *FUNC_0(const AVHashContext *VAR_1)
{
    return VAR_0[VAR_1->type].name;
}
