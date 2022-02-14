
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_4__ {scalar_t__ offset; scalar_t__ len; } ;
typedef TYPE_1__ BT_HDR ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int ,TYPE_1__*) ;

BOOLEAN FUNC_5 (BD_ADDR VAR_7, BOOLEAN VAR_8)
{
    BT_HDR *VAR_9;
    UINT8 *VAR_10;

    if ((VAR_9 = FUNC_1(VAR_1)) == ((void*)0)) {
        return (VAR_0);
    }

    VAR_10 = (UINT8 *)(VAR_9 + 1);

    VAR_9->len = VAR_2 + VAR_1;
    VAR_9->offset = 0;

    if (!VAR_8) {

        FUNC_2 (VAR_10, VAR_4);
    } else {

        FUNC_2 (VAR_10, VAR_3);
    }

    FUNC_3 (VAR_10, VAR_1);

    FUNC_0 (VAR_10, VAR_7);

    FUNC_4 (VAR_5, VAR_9);
    return (VAR_6);
}
