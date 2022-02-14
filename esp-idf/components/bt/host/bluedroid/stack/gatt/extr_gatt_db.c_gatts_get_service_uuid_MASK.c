
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ p_attr_list; } ;
typedef TYPE_2__ tGATT_SVC_DB ;
struct TYPE_7__ {TYPE_1__* p_value; } ;
typedef TYPE_3__ tGATT_ATTR16 ;
typedef int tBT_UUID ;
struct TYPE_5__ {int uuid; } ;


 int FUNC_0 (char*) ;

tBT_UUID *FUNC_1 (tGATT_SVC_DB *VAR_0)
{
    if (!VAR_0 || !VAR_0->p_attr_list) {
        FUNC_0("service DB empty\n");

        return ((void*)0);
    } else {
        return &((tGATT_ATTR16 *)VAR_0->p_attr_list)->p_value->uuid;
    }
}
