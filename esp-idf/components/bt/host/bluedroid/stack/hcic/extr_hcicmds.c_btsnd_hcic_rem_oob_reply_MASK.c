
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


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int ,TYPE_1__*) ;

BOOLEAN FUNC_6 (BD_ADDR VAR_6, UINT8 *VAR_7, UINT8 *VAR_8)
{
    BT_HDR *VAR_9;
    UINT8 *VAR_10;

    if ((VAR_9 = FUNC_2(VAR_1)) == ((void*)0)) {
        return (VAR_0);
    }

    VAR_10 = (UINT8 *)(VAR_9 + 1);

    VAR_9->len = VAR_2 + VAR_1;
    VAR_9->offset = 0;

    FUNC_3 (VAR_10, VAR_3);
    FUNC_4 (VAR_10, VAR_1);

    FUNC_1 (VAR_10, VAR_6);
    FUNC_0 (VAR_10, VAR_7);
    FUNC_0 (VAR_10, VAR_8);

    FUNC_5 (VAR_4, VAR_9);
    return (VAR_5);
}
