
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tL2C_LCB ;
struct TYPE_4__ {scalar_t__ local_cid; int * p_lcb; scalar_t__ in_use; } ;
typedef TYPE_1__ tL2C_CCB ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {TYPE_1__* ccb_pool; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;

tL2C_CCB *FUNC_0 (tL2C_LCB *VAR_3, UINT16 VAR_4)
{
    tL2C_CCB *VAR_5 = ((void*)0);

    UINT8 VAR_6;


    if (VAR_4 >= VAR_0) {

        VAR_4 -= VAR_0;

        if (VAR_4 >= VAR_1) {
            return ((void*)0);
        }

        VAR_5 = VAR_2.ccb_pool + VAR_4;


        if (!VAR_5->in_use) {
            VAR_5 = ((void*)0);
        }

        else if (VAR_3 && VAR_3 != VAR_5->p_lcb) {
            VAR_5 = ((void*)0);
        }
    }

    else {

        VAR_5 = VAR_2.ccb_pool;
        for ( VAR_6 = 0; VAR_6 < VAR_1; VAR_6++ ) {
            if ((VAR_5->local_cid == VAR_4)
                    && (VAR_5->in_use)
                    && (VAR_3 == VAR_5->p_lcb)) {
                break;
            } else {
                VAR_5++;
            }
        }
        if ( VAR_6 >= VAR_1 ) {
            return ((void*)0);
        }
    }


    return (VAR_5);
}
