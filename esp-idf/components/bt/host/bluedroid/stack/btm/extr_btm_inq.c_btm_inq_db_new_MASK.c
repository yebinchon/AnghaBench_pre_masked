
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int remote_bd_addr; } ;
struct TYPE_10__ {TYPE_2__ results; } ;
struct TYPE_11__ {scalar_t__ time_of_resp; void* in_use; TYPE_3__ inq_info; } ;
typedef TYPE_4__ tINQ_DB_ENT ;
typedef scalar_t__ UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_8__ {TYPE_4__* inq_db; } ;
struct TYPE_12__ {TYPE_1__ btm_inq_vars; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 TYPE_7__ VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;

tINQ_DB_ENT *FUNC_2 (BD_ADDR VAR_4)
{
    UINT16 VAR_5;
    tINQ_DB_ENT *VAR_6 = VAR_3.btm_inq_vars.inq_db;
    tINQ_DB_ENT *VAR_7 = VAR_3.btm_inq_vars.inq_db;
    UINT32 VAR_8 = 0xFFFFFFFF;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++, VAR_6++) {
        if (!VAR_6->in_use) {
            FUNC_1 (VAR_6, 0, sizeof (tINQ_DB_ENT));
            FUNC_0 (VAR_6->inq_info.results.remote_bd_addr, VAR_4, VAR_0);
            VAR_6->in_use = VAR_2;

            return (VAR_6);
        }

        if (VAR_6->time_of_resp < VAR_8) {
            VAR_7 = VAR_6;
            VAR_8 = VAR_6->time_of_resp;
        }
    }



    FUNC_1 (VAR_7, 0, sizeof (tINQ_DB_ENT));
    FUNC_0 (VAR_7->inq_info.results.remote_bd_addr, VAR_4, VAR_0);
    VAR_7->in_use = VAR_2;

    return (VAR_7);
}
