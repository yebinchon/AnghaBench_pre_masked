
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
struct TYPE_6__ {scalar_t__ svc_inst; int svc_uuid; int app_uuid128; } ;
struct TYPE_8__ {struct TYPE_8__* p_next; TYPE_1__ asgn_range; } ;
typedef TYPE_3__ tGATT_HDL_LIST_ELEM ;
typedef int tBT_UUID ;
typedef scalar_t__ UINT16 ;
struct TYPE_9__ {TYPE_2__ hdl_list_info; } ;


 int FUNC_0 (char*) ;
 TYPE_5__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;

tGATT_HDL_LIST_ELEM *FUNC_2 (tBT_UUID *VAR_1,
        tBT_UUID *VAR_2,
        UINT16 VAR_3)
{
    tGATT_HDL_LIST_INFO *VAR_4 = &VAR_0.hdl_list_info;
    tGATT_HDL_LIST_ELEM *VAR_5 = ((void*)0);

    VAR_5 = VAR_4->p_first;

    while (VAR_5 != ((void*)0)) {
        if ( FUNC_1 (*VAR_1, VAR_5->asgn_range.app_uuid128)
                && FUNC_1 (*VAR_2, VAR_5->asgn_range.svc_uuid)
                && (VAR_3 == VAR_5->asgn_range.svc_inst) ) {
            FUNC_0 ("Already allocated handles for this service before!!");
            return (VAR_5);
        }
        VAR_5 = VAR_5->p_next;
    }
    return ((void*)0);
}
