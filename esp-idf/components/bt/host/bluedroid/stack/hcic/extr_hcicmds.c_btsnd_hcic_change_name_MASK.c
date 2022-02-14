
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_4__ {scalar_t__ offset; scalar_t__ len; } ;
typedef TYPE_1__ BT_HDR ;
typedef int BOOLEAN ;
typedef scalar_t__ BD_NAME ;


 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (char*) ;

BOOLEAN FUNC_7 (BD_NAME VAR_6)
{
    BT_HDR *VAR_7;
    UINT8 *VAR_8;
    UINT16 VAR_9 = FUNC_6 ((char *)VAR_6) + 1;

    if ((VAR_7 = FUNC_1(VAR_1)) == ((void*)0)) {
        return (VAR_0);
    }

    VAR_8 = (UINT8 *)(VAR_7 + 1);
    FUNC_5(VAR_8, 0, VAR_2 + VAR_1);

    VAR_7->len = VAR_2 + VAR_1;
    VAR_7->offset = 0;

    FUNC_2 (VAR_8, VAR_3);
    FUNC_3 (VAR_8, VAR_1);

    if (VAR_9 > VAR_1) {
        VAR_9 = VAR_1;
    }

    FUNC_0 (VAR_8, VAR_6, VAR_9);

    FUNC_4 (VAR_4, VAR_7);
    return (VAR_5);
}
