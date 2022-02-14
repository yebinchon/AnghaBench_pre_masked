
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_3__ {int offset; scalar_t__ len; } ;
typedef TYPE_1__ BT_HDR ;


 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,scalar_t__) ;
 int FUNC_3 (int ,TYPE_1__*) ;

void FUNC_4 (void *VAR_3, UINT16 VAR_4, UINT8 VAR_5,
                                 UINT8 *VAR_6, void *VAR_7)
{
    BT_HDR *VAR_8 = (BT_HDR *)VAR_3;
    UINT8 *VAR_9 = (UINT8 *)(VAR_8 + 1);

    VAR_8->len = VAR_0 + VAR_5;
    VAR_8->offset = sizeof(void *);

    *((void **)VAR_9) = VAR_7;
    VAR_9 += sizeof(void *);

    FUNC_1 (VAR_9, VAR_1 | VAR_4);
    FUNC_2 (VAR_9, VAR_5);
    FUNC_0 (VAR_9, VAR_6, VAR_5);

    FUNC_3 (VAR_2, VAR_8);
}
