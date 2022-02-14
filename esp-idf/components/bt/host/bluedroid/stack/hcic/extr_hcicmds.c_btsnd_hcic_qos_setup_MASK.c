
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
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
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__*,scalar_t__) ;
 int FUNC_4 (int ,TYPE_1__*) ;

BOOLEAN FUNC_5 (UINT16 VAR_6, UINT8 VAR_7, UINT8 VAR_8,
                              UINT32 VAR_9, UINT32 VAR_10, UINT32 VAR_11,
                              UINT32 VAR_12)
{
    BT_HDR *VAR_13;
    UINT8 *VAR_14;

    if ((VAR_13 = FUNC_0(VAR_1)) == ((void*)0)) {
        return (VAR_0);
    }

    VAR_14 = (UINT8 *)(VAR_13 + 1);

    VAR_13->len = VAR_2 + VAR_1;
    VAR_13->offset = 0;

    FUNC_1 (VAR_14, VAR_3);
    FUNC_3 (VAR_14, VAR_1);

    FUNC_1 (VAR_14, VAR_6);
    FUNC_3 (VAR_14, VAR_7);
    FUNC_3 (VAR_14, VAR_8);
    FUNC_2 (VAR_14, VAR_9);
    FUNC_2 (VAR_14, VAR_10);
    FUNC_2 (VAR_14, VAR_11);
    FUNC_2 (VAR_14, VAR_12);

    FUNC_4 (VAR_4, VAR_13);
    return (VAR_5);
}
