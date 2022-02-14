
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_3__ {int offset; int len; } ;
typedef TYPE_1__ BT_HDR ;


 int FUNC_0 (int*,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int VAR_5 ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int) ;
 scalar_t__ FUNC_4 (int) ;

BT_HDR *FUNC_5 (UINT16 VAR_6, UINT8 VAR_7, UINT16 VAR_8,
                              UINT16 VAR_9, UINT16 VAR_10, UINT8 *VAR_11)
{
    BT_HDR *VAR_12 = ((void*)0);
    UINT8 *VAR_13, *VAR_14, VAR_15, *VAR_16;

    if ((VAR_12 = (BT_HDR *)FUNC_4((UINT16)(sizeof(BT_HDR) + VAR_6 + VAR_5))) != ((void*)0)) {
        VAR_13 = VAR_14 = (UINT8 *)(VAR_12 + 1) + VAR_5;

        FUNC_3 (VAR_13, VAR_7);
        VAR_12->offset = VAR_5;
        VAR_12->len = 1;

        if (VAR_7 == VAR_4) {
            VAR_16 = VAR_13;
            VAR_15 = VAR_10 + 2;
            FUNC_3 (VAR_13, VAR_15);
            VAR_12->len += 1;
        }
        if (VAR_7 != VAR_3 && VAR_7 != VAR_2) {
            FUNC_2 (VAR_13, VAR_8);
            VAR_12->len += 2;
        }

        if (VAR_7 == VAR_0 || VAR_7 == VAR_1 ) {
            FUNC_2 (VAR_13, VAR_9);
            VAR_12->len += 2;
        }

        if (VAR_10 > 0 && VAR_11 != ((void*)0)) {

            if (VAR_6 - VAR_12->len < VAR_10) {
                VAR_10 = VAR_6 - VAR_12->len;

                if (VAR_7 == VAR_4) {
                    *VAR_16 = (VAR_10 + 2);
                }

                FUNC_1("attribute value too long, to be truncated to %d", VAR_10);
            }

            FUNC_0 (VAR_13, VAR_11, VAR_10);
            VAR_12->len += VAR_10;
        }
    }
    return VAR_12;
}
