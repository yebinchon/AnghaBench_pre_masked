
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * p_attr_list; } ;
typedef TYPE_2__ tGATT_SVC_DB ;
struct TYPE_8__ {TYPE_2__ svc_db; } ;
typedef TYPE_3__ tGATT_HDL_LIST_ELEM ;
struct TYPE_6__ {scalar_t__ auto_rsp; } ;
struct TYPE_9__ {scalar_t__ handle; TYPE_1__ control; int * p_value; scalar_t__ p_next; } ;
typedef TYPE_4__ tGATT_ATTR16 ;
typedef scalar_t__ UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (scalar_t__) ;

BOOLEAN FUNC_2(UINT16 VAR_2)
{
    tGATT_HDL_LIST_ELEM *VAR_3 = ((void*)0);
    BOOLEAN VAR_4 = VAR_0;
    tGATT_SVC_DB *VAR_5 = ((void*)0);
    if ((VAR_3 = FUNC_1(VAR_2)) == ((void*)0)) {
        FUNC_0("Service not created\n");
        return VAR_4;
    }

    VAR_5 = &VAR_3->svc_db;

    tGATT_ATTR16 *VAR_6, *VAR_7;

    if (VAR_5 == ((void*)0)) {
        FUNC_0("gatts_get_attribute_value Fail:p_db is NULL.\n");
        return VAR_4;
    }
    if (VAR_5->p_attr_list == ((void*)0)) {
        FUNC_0("gatts_get_attribute_value Fail:p_db->p_attr_list is NULL.\n");
        return VAR_4;
    }

    VAR_6 = (tGATT_ATTR16 *) VAR_5->p_attr_list;
    VAR_7 = (tGATT_ATTR16 *) VAR_6->p_next;

    for (; VAR_6 != ((void*)0) && VAR_7 != ((void*)0);
            VAR_6 = VAR_7, VAR_7 = (tGATT_ATTR16 *)VAR_7->p_next) {
        if (VAR_6->handle == VAR_2) {
            if (VAR_6->p_value != ((void*)0) && VAR_6->control.auto_rsp == VAR_1) {
                VAR_4 = 1;
                return VAR_4;
            }

        }

    }

    return VAR_4;

}
