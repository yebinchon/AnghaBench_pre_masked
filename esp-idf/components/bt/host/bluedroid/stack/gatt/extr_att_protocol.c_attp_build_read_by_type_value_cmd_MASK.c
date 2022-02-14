
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int value_len; int value; int uuid; int e_handle; int s_handle; } ;
typedef TYPE_1__ tGATT_FIND_TYPE_VALUE ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_6__ {int offset; int len; } ;
typedef TYPE_2__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int **,int ) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

BT_HDR *FUNC_5 (UINT16 VAR_2, tGATT_FIND_TYPE_VALUE *VAR_3)
{
    BT_HDR *VAR_4 = ((void*)0);
    UINT8 *VAR_5;
    UINT16 VAR_6 = VAR_3->value_len;

    if ((VAR_4 = (BT_HDR *)FUNC_4((UINT16)(sizeof(BT_HDR) + VAR_2 + VAR_1))) != ((void*)0)) {
        VAR_5 = (UINT8 *)(VAR_4 + 1) + VAR_1;

        VAR_4->offset = VAR_1;
        VAR_4->len = 5;

        FUNC_1 (VAR_5, VAR_0);
        FUNC_0 (VAR_5, VAR_3->s_handle);
        FUNC_0 (VAR_5, VAR_3->e_handle);

        VAR_4->len += FUNC_2(&VAR_5, VAR_3->uuid);

        if (VAR_3->value_len + VAR_4->len > VAR_2 ) {
            VAR_6 = VAR_2 - VAR_4->len;
        }

        FUNC_3 (VAR_5, VAR_3->value, VAR_6);
        VAR_4->len += VAR_6;
    }

    return VAR_4;
}
