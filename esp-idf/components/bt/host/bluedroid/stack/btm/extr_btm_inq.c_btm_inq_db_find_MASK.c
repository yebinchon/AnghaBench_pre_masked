
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int remote_bd_addr; } ;
struct TYPE_9__ {TYPE_2__ results; } ;
struct TYPE_10__ {TYPE_3__ inq_info; scalar_t__ in_use; } ;
typedef TYPE_4__ tINQ_DB_ENT ;
typedef scalar_t__ UINT16 ;
struct TYPE_7__ {TYPE_4__* inq_db; } ;
struct TYPE_11__ {TYPE_1__ btm_inq_vars; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

tINQ_DB_ENT *FUNC_1 (BD_ADDR VAR_3)
{
    UINT16 VAR_4;
    tINQ_DB_ENT *VAR_5 = VAR_2.btm_inq_vars.inq_db;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++, VAR_5++) {
        if ((VAR_5->in_use) && (!FUNC_0 (VAR_5->inq_info.results.remote_bd_addr, VAR_3, VAR_0))) {
            return (VAR_5);
        }
    }


    return (((void*)0));
}
