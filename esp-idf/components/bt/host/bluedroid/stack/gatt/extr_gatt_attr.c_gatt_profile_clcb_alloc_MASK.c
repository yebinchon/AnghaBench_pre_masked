
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bda; int transport; void* connected; int conn_id; void* in_use; } ;
typedef TYPE_1__ tGATT_PROFILE_CLCB ;
typedef int tBT_TRANSPORT ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_5__ {TYPE_1__* profile_clcb; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;

tGATT_PROFILE_CLCB *FUNC_1 (UINT16 VAR_4, BD_ADDR VAR_5, tBT_TRANSPORT VAR_6)
{
    UINT8 VAR_7 = 0;
    tGATT_PROFILE_CLCB *VAR_8 = ((void*)0);

    for (VAR_7 = 0, VAR_8 = VAR_3.profile_clcb; VAR_7 < VAR_1; VAR_7++, VAR_8++) {
        if (!VAR_8->in_use) {
            VAR_8->in_use = VAR_2;
            VAR_8->conn_id = VAR_4;
            VAR_8->connected = VAR_2;
            VAR_8->transport = VAR_6;
            FUNC_0 (VAR_8->bda, VAR_5, VAR_0);
            break;
        }
    }
    if (VAR_7 < VAR_1) {
        return VAR_8;
    }

    return ((void*)0);
}
