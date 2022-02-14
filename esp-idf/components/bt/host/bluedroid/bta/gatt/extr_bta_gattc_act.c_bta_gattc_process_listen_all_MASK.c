
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int remote_bda; scalar_t__ in_use; } ;
typedef TYPE_1__ tBTA_GATTC_CONN ;
typedef scalar_t__ UINT8 ;
struct TYPE_4__ {TYPE_1__* conn_track; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int * FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(UINT8 VAR_3)
{
    UINT8 VAR_4 = 0;
    tBTA_GATTC_CONN *VAR_5 = &VAR_2.conn_track[0];

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_5 ++) {
        if (VAR_5->in_use ) {
            if (FUNC_0(VAR_3, VAR_5->remote_bda, VAR_1) == ((void*)0)) {
                FUNC_1(VAR_3, VAR_5->remote_bda);
            }

        }
    }
}
