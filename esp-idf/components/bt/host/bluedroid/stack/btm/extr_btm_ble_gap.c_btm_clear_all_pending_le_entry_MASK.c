
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ device_type; } ;
struct TYPE_8__ {TYPE_2__ results; } ;
struct TYPE_9__ {scalar_t__ in_use; int scan_rsp; TYPE_3__ inq_info; } ;
typedef TYPE_4__ tINQ_DB_ENT ;
typedef scalar_t__ UINT16 ;
struct TYPE_6__ {TYPE_4__* inq_db; } ;
struct TYPE_10__ {TYPE_1__ btm_inq_vars; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__ VAR_3 ;

void FUNC_0(void)
{
    UINT16 VAR_4;
    tINQ_DB_ENT *VAR_5 = VAR_3.btm_inq_vars.inq_db;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_5++) {

        if ((VAR_5->in_use) &&
                (VAR_5->inq_info.results.device_type == VAR_1) &&
                !VAR_5->scan_rsp) {
            VAR_5->in_use = VAR_2;
        }
    }
}
