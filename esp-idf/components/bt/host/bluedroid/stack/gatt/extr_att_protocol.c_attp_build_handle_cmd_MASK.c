
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_3__ {int offset; int len; } ;
typedef TYPE_1__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int) ;

BT_HDR *FUNC_3(UINT8 VAR_2, UINT16 VAR_3, UINT16 VAR_4)
{
    BT_HDR *VAR_5 = ((void*)0);
    UINT8 *VAR_6;

    if ((VAR_5 = (BT_HDR *)FUNC_2(sizeof(BT_HDR) + 5 + VAR_1)) != ((void*)0)) {
        VAR_6 = (UINT8 *)(VAR_5 + 1) + VAR_1;

        VAR_5->offset = VAR_1;

        FUNC_1 (VAR_6, VAR_2);
        VAR_5->len = 1;

        FUNC_0 (VAR_6, VAR_3);
        VAR_5->len += 2;

        if (VAR_2 == VAR_0) {
            FUNC_0 (VAR_6, VAR_4);
            VAR_5->len += 2;
        }

    }

    return VAR_5;
}
