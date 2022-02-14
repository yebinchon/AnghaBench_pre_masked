
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ rssi; } ;
struct TYPE_13__ {TYPE_3__ results; } ;
struct TYPE_14__ {TYPE_4__ inq_info; } ;
typedef TYPE_5__ tINQ_DB_ENT ;
typedef int UINT8 ;
struct TYPE_10__ {scalar_t__ num_resp; } ;
struct TYPE_11__ {TYPE_1__ inq_cmpl_info; TYPE_5__* inq_db; } ;
struct TYPE_15__ {TYPE_2__ btm_inq_vars; } ;


 scalar_t__ VAR_0 ;
 TYPE_9__ VAR_1 ;
 int FUNC_0 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(void)
{
    UINT8 VAR_2, VAR_3, VAR_4;
    tINQ_DB_ENT *VAR_5 = ((void*)0);
    tINQ_DB_ENT *VAR_6 = VAR_1.btm_inq_vars.inq_db;
    tINQ_DB_ENT *VAR_7 = VAR_1.btm_inq_vars.inq_db + 1;
    int VAR_8;

    VAR_4 = (VAR_1.btm_inq_vars.inq_cmpl_info.num_resp < VAR_0) ?
               VAR_1.btm_inq_vars.inq_cmpl_info.num_resp : VAR_0;

    if ((VAR_5 = (tINQ_DB_ENT *)FUNC_2(sizeof(tINQ_DB_ENT))) != ((void*)0)) {
        VAR_8 = sizeof(tINQ_DB_ENT);
        for (VAR_2 = 0; VAR_2 < VAR_4 - 1; VAR_2++, VAR_6++) {
            for (VAR_3 = VAR_2 + 1, VAR_7 = VAR_6 + 1; VAR_3 < VAR_4; VAR_3++, VAR_7++) {
                if (VAR_6->inq_info.results.rssi < VAR_7->inq_info.results.rssi) {
                    FUNC_0 (VAR_5, VAR_7, VAR_8);
                    FUNC_0 (VAR_7, VAR_6, VAR_8);
                    FUNC_0 (VAR_6, VAR_5, VAR_8);
                }
            }
        }

        FUNC_1(VAR_5);
    }
}
