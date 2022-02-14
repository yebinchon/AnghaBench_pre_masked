
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int remote_bda; scalar_t__ in_use; } ;
typedef TYPE_1__ tGATT_BG_CONN_DEV ;
typedef scalar_t__ UINT8 ;
struct TYPE_5__ {TYPE_1__* bgconn_dev; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

tGATT_BG_CONN_DEV *FUNC_1(BD_ADDR VAR_3)
{
    tGATT_BG_CONN_DEV *VAR_4 = &VAR_2.bgconn_dev[0];
    UINT8 VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 ++, VAR_4 ++) {
        if (VAR_4->in_use && !FUNC_0(VAR_4->remote_bda, VAR_3, VAR_0)) {
            return VAR_4;
        }
    }
    return ((void*)0);
}
