
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int svc_buffer; } ;
struct TYPE_6__ {TYPE_1__ svc_db; } ;
typedef TYPE_2__ tGATT_HDL_LIST_ELEM ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int ) ;

void FUNC_5(tGATT_HDL_LIST_ELEM *VAR_0)
{

    if (VAR_0) {
        while (!FUNC_2(VAR_0->svc_db.svc_buffer)) {
            FUNC_4(FUNC_0(VAR_0->svc_db.svc_buffer, 0));
  }
        FUNC_1(VAR_0->svc_db.svc_buffer, ((void*)0));
        FUNC_3(VAR_0, 0, sizeof(tGATT_HDL_LIST_ELEM));
    }
}
