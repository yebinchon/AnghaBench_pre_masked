
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_3__ {scalar_t__ offset; scalar_t__ len; } ;
typedef TYPE_1__ BT_HDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (scalar_t__*,scalar_t__) ;
 int FUNC_2 (int ,TYPE_1__*) ;

void FUNC_3 (void *VAR_4, UINT8 VAR_5)
{
    BT_HDR *VAR_6 = (BT_HDR *)VAR_4;
    UINT8 *VAR_7 = (UINT8 *)(VAR_6 + 1);

    VAR_6->len = VAR_1 + VAR_0;
    VAR_6->offset = 0;

    FUNC_0 (VAR_7, VAR_2);
    FUNC_1 (VAR_7, VAR_0);

    FUNC_1 (VAR_7, VAR_5);

    FUNC_2 (VAR_3, VAR_6);
}
