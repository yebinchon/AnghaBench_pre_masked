
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_4__ {scalar_t__ offset; scalar_t__ len; } ;
typedef TYPE_1__ BT_HDR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ,TYPE_1__*) ;

BOOLEAN FUNC_4 (UINT16 VAR_6, UINT16 VAR_7)
{
    BT_HDR *VAR_8;
    UINT8 *VAR_9;

    if ((VAR_8 = FUNC_0(VAR_1)) == ((void*)0)) {
        return (VAR_0);
    }

    VAR_9 = (UINT8 *)(VAR_8 + 1);

    VAR_8->len = VAR_2 + VAR_1;
    VAR_8->offset = 0;

    FUNC_1 (VAR_9, VAR_3);
    FUNC_2 (VAR_9, VAR_1);

    FUNC_1 (VAR_9, VAR_6);
    FUNC_1 (VAR_9, VAR_7);

    FUNC_3 (VAR_4, VAR_8);
    return (VAR_5);
}
