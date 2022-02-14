
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * p_free_mem; int p_attr_list; scalar_t__ mem_free; int * svc_buffer; } ;
struct TYPE_6__ {int app_uuid128; } ;
struct TYPE_8__ {TYPE_2__ svc_db; TYPE_1__ asgn_range; } ;
typedef TYPE_3__ tGATT_HDL_LIST_ELEM ;
typedef int tBT_UUID ;
typedef scalar_t__ UINT8 ;
struct TYPE_9__ {TYPE_3__* hdl_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 TYPE_5__ VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ) ;

void FUNC_6(tBT_UUID *VAR_2)
{
    tGATT_HDL_LIST_ELEM *VAR_3 = &VAR_1.hdl_list[0];
    UINT8 VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4 ++, VAR_3 ++) {
        if (FUNC_4(VAR_2, &VAR_3->asgn_range.app_uuid128, sizeof(tBT_UUID)) == 0) {
            FUNC_3(VAR_3);
            while (!FUNC_2(VAR_3->svc_db.svc_buffer)) {
                FUNC_5(FUNC_0(VAR_3->svc_db.svc_buffer, 0));
   }
            FUNC_1(VAR_3->svc_db.svc_buffer, ((void*)0));
            VAR_3->svc_db.svc_buffer = ((void*)0);

            VAR_3->svc_db.mem_free = 0;
            VAR_3->svc_db.p_attr_list = *(VAR_3->svc_db.p_free_mem = ((void*)0));
        }
    }
}
