
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int svc_buffer; } ;
struct TYPE_8__ {TYPE_1__ svc_db; int in_use; } ;
typedef TYPE_2__ tGATT_HDL_LIST_ELEM ;
struct TYPE_9__ {TYPE_2__* hdl_list; } ;
typedef TYPE_3__ tGATT_CB ;
typedef size_t UINT8 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

tGATT_HDL_LIST_ELEM *FUNC_2(void)
{
    UINT8 VAR_4;
    tGATT_CB *VAR_5 = &VAR_3;
    tGATT_HDL_LIST_ELEM *VAR_6 = &VAR_5->hdl_list[0];

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_6 ++) {
        if (!VAR_5->hdl_list[VAR_4].in_use) {
            FUNC_1(VAR_6, 0, sizeof(tGATT_HDL_LIST_ELEM));
            VAR_6->in_use = VAR_2;
            VAR_6->svc_db.svc_buffer = FUNC_0(VAR_1);
            return VAR_6;
        }
    }

    return ((void*)0);
}
