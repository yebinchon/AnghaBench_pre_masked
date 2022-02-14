
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_3__ {int offset; scalar_t__ len; } ;
typedef TYPE_1__ BT_HDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int) ;

BT_HDR *FUNC_3(UINT8 VAR_3, UINT16 VAR_4, UINT8 VAR_5)
{
    BT_HDR *VAR_6 = ((void*)0);
    UINT8 *VAR_7;

    if ((VAR_6 = (BT_HDR *)FUNC_2(sizeof(BT_HDR) + VAR_2 + 5)) != ((void*)0)) {
        VAR_7 = (UINT8 *)(VAR_6 + 1) + VAR_2;

        FUNC_1 (VAR_7, VAR_1);
        FUNC_1 (VAR_7, VAR_3);
        FUNC_0(VAR_7, VAR_4);
        FUNC_1 (VAR_7, VAR_5);

        VAR_6->offset = VAR_2;

        VAR_6->len = VAR_0 + 1 + 1;
    }
    return VAR_6;
}
