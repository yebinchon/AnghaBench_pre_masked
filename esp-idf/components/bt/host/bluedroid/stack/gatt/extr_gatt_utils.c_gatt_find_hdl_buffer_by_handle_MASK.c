
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* p_first; } ;
typedef TYPE_2__ tGATT_HDL_LIST_INFO ;
struct TYPE_6__ {scalar_t__ s_handle; } ;
struct TYPE_8__ {struct TYPE_8__* p_next; TYPE_1__ asgn_range; scalar_t__ in_use; } ;
typedef TYPE_3__ tGATT_HDL_LIST_ELEM ;
typedef scalar_t__ UINT16 ;
struct TYPE_9__ {TYPE_2__ hdl_list_info; } ;


 TYPE_5__ VAR_0 ;

tGATT_HDL_LIST_ELEM *FUNC_0(UINT16 VAR_1)
{
    tGATT_HDL_LIST_INFO *VAR_2 = &VAR_0.hdl_list_info;
    tGATT_HDL_LIST_ELEM *VAR_3 = ((void*)0);

    VAR_3 = VAR_2->p_first;

    while (VAR_3 != ((void*)0)) {
        if (VAR_3->in_use && VAR_3->asgn_range.s_handle == VAR_1) {
            return (VAR_3);
        }
        VAR_3 = VAR_3->p_next;
    }
    return ((void*)0);
}
