
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_3__ {int offset; int len; } ;
typedef TYPE_1__ BT_HDR ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int) ;

BT_HDR *FUNC_2(UINT8 VAR_1)
{
    BT_HDR *VAR_2 = ((void*)0);
    UINT8 *VAR_3;

    if ((VAR_2 = (BT_HDR *)FUNC_1(sizeof(BT_HDR) + 1 + VAR_0)) != ((void*)0)) {
        VAR_3 = (UINT8 *)(VAR_2 + 1) + VAR_0;
        VAR_2->offset = VAR_0;

        FUNC_0 (VAR_3, VAR_1);
        VAR_2->len = 1;
    }

    return VAR_2;
}
