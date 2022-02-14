
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ listening; scalar_t__ in_use; } ;
typedef TYPE_1__ tGATT_REG ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_4__ {TYPE_1__* cl_rcb; } ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 TYPE_2__ VAR_7 ;

BOOLEAN FUNC_3(void)
{
    UINT8 VAR_8 = 0;
    tGATT_REG *VAR_9 = &VAR_7.cl_rcb[0];
    UINT8 VAR_10 = 0;
    UINT16 VAR_11, VAR_12, VAR_13;
    BOOLEAN VAR_14 = VAR_6;

    for (; VAR_8 < VAR_5; VAR_8 ++, VAR_9 ++) {
        if ( VAR_9->in_use && VAR_9->listening > VAR_10) {
            VAR_10 = VAR_9->listening;
        }
    }

    if (VAR_10 == VAR_3 ||
            VAR_10 == VAR_4) {
        FUNC_0 (VAR_0);
    } else {
        FUNC_0 (VAR_1);
    }

    if (VAR_14) {
        VAR_11 = FUNC_1 (&VAR_12, &VAR_13);

        if (VAR_10 != VAR_4) {
            VAR_11 |= VAR_2;
        } else {
            if ((VAR_11 & VAR_2) == 0) {
                VAR_11 &= ~VAR_2;
            }
        }

        FUNC_2(VAR_11);
    }

    return VAR_14;

}
