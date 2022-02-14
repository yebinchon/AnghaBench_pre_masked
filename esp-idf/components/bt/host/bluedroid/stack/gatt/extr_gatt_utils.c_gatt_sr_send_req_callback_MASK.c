
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* p_req_cb ) (int ,int ,int ,int *) ;} ;
struct TYPE_5__ {TYPE_1__ app_cb; scalar_t__ in_use; } ;
typedef TYPE_2__ tGATT_REG ;
typedef int tGATT_IF ;
typedef int tGATTS_REQ_TYPE ;
typedef int tGATTS_DATA ;
typedef int UINT32 ;
typedef int UINT16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int *) ;

void FUNC_5(UINT16 VAR_0,
                               UINT32 VAR_1,
                               tGATTS_REQ_TYPE VAR_2, tGATTS_DATA *VAR_3)
{
    tGATT_IF VAR_4 = FUNC_0(VAR_0);
    tGATT_REG *VAR_5 = FUNC_3(VAR_4);

    if (!VAR_5 ) {
        FUNC_1 ("p_reg not found discard request");
        return;
    }

    if ( VAR_5->in_use &&
            VAR_5->app_cb.p_req_cb) {
        (*VAR_5->app_cb.p_req_cb)(VAR_0, VAR_1, VAR_2, VAR_3);
    } else {
        FUNC_2("Call back not found for application conn_id=%d", VAR_0);
    }

}
