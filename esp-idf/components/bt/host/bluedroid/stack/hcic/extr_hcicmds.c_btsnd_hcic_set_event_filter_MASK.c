
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef void* UINT16 ;
struct TYPE_4__ {void* len; scalar_t__ offset; } ;
typedef TYPE_1__ BT_HDR ;
typedef int BOOLEAN ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int*) ;
 int VAR_0 ;
 int FUNC_2 (int*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int ,TYPE_1__*) ;

BOOLEAN FUNC_7 (UINT8 VAR_9, UINT8 VAR_10,
                                     UINT8 *VAR_11, UINT8 VAR_12)
{
    BT_HDR *VAR_13;
    UINT8 *VAR_14;


    if ((VAR_13 = FUNC_3(2 + VAR_12)) == ((void*)0)) {
        return (VAR_2);
    }

    VAR_14 = (UINT8 *)(VAR_13 + 1);

    VAR_13->offset = 0;

    FUNC_4 (VAR_14, VAR_6);

    if (VAR_9) {
        VAR_13->len = (UINT16)(VAR_3 + 2 + VAR_12);
        FUNC_5 (VAR_14, (UINT8)(2 + VAR_12));

        FUNC_5 (VAR_14, VAR_9);
        FUNC_5 (VAR_14, VAR_10);

        if (VAR_10 == VAR_5) {
            FUNC_2 (VAR_14, VAR_11);
            VAR_11 += VAR_1;
            FUNC_2 (VAR_14, VAR_11);
            VAR_11 += VAR_1;

            VAR_12 -= (2 * VAR_1);
        } else if (VAR_10 == VAR_4) {
            FUNC_1 (VAR_14, VAR_11);
            VAR_11 += VAR_0;

            VAR_12 -= VAR_0;
        }

        if (VAR_12) {
            FUNC_0 (VAR_14, VAR_11, VAR_12);
        }
    } else {
        VAR_13->len = (UINT16)(VAR_3 + 1);
        FUNC_5 (VAR_14, 1);

        FUNC_5 (VAR_14, VAR_9);
    }

    FUNC_6 (VAR_7, VAR_13);
    return (VAR_8);
}
