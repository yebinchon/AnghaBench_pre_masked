
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int needsupdate; scalar_t__* l; } ;
typedef TYPE_1__ hu_textline_t ;
typedef int boolean ;



boolean FUNC_0(hu_textline_t* VAR_0)
{

    if (!VAR_0->len) return 0;
    else
    {
 VAR_0->l[--VAR_0->len] = 0;
 VAR_0->needsupdate = 4;
 return 1;
    }

}
