
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_3__ {int offset; int len; } ;
typedef TYPE_1__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;

BT_HDR *FUNC_2 (UINT8 VAR_5, UINT8 VAR_6)
{
    BT_HDR *VAR_7 = ((void*)0);
    UINT8 *VAR_8;

    if ((VAR_7 = (BT_HDR *)FUNC_1(VAR_0)) != ((void*)0)) {
        VAR_8 = (UINT8 *)(VAR_7 + 1) + VAR_4;

        VAR_7->offset = VAR_4;
        VAR_7->len = VAR_1;

        FUNC_0 (VAR_8, VAR_5);

        if (VAR_5 == VAR_3) {
            VAR_6 &= VAR_2;
            FUNC_0 (VAR_8, VAR_6);
            VAR_7->len += 1;
        }

    }

    return VAR_7;
}
