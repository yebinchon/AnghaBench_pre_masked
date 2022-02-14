
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_4__ {int len; scalar_t__ offset; } ;
typedef TYPE_1__ BT_HDR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int ,TYPE_1__*) ;

BOOLEAN FUNC_4 (UINT8 VAR_5, UINT16 *VAR_6,
        UINT16 *VAR_7)
{
    BT_HDR *VAR_8;
    UINT8 *VAR_9;
    int VAR_10;

    if ((VAR_8 = FUNC_0(1 + (VAR_5 * 4))) == ((void*)0)) {
        return (VAR_0);
    }

    VAR_9 = (UINT8 *)(VAR_8 + 1);

    VAR_8->len = VAR_1 + 1 + (VAR_5 * 4);
    VAR_8->offset = 0;

    FUNC_1 (VAR_9, VAR_2);
    FUNC_2 (VAR_9, VAR_8->len - VAR_1);

    FUNC_2 (VAR_9, VAR_5);

    for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
        FUNC_1 (VAR_9, VAR_6[VAR_10]);
        FUNC_1 (VAR_9, VAR_7[VAR_10]);
    }

    FUNC_3 (VAR_3, VAR_8);
    return (VAR_4);
}
