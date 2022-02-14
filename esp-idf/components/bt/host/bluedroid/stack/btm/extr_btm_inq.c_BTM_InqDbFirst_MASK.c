
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int inq_info; scalar_t__ in_use; } ;
typedef TYPE_2__ tINQ_DB_ENT ;
typedef int tBTM_INQ_INFO ;
typedef scalar_t__ UINT16 ;
struct TYPE_4__ {TYPE_2__* inq_db; } ;
struct TYPE_6__ {TYPE_1__ btm_inq_vars; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;

tBTM_INQ_INFO *FUNC_0 (void)
{
    UINT16 VAR_2;
    tINQ_DB_ENT *VAR_3 = VAR_1.btm_inq_vars.inq_db;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++, VAR_3++) {
        if (VAR_3->in_use) {
            return (&VAR_3->inq_info);
        }
    }


    return ((tBTM_INQ_INFO *)((void*)0));
}
