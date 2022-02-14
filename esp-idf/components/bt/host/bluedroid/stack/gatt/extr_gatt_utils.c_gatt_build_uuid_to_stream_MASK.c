
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uuid128; int uuid32; int uuid16; } ;
struct TYPE_5__ {scalar_t__ len; TYPE_1__ uu; } ;
typedef TYPE_2__ tBT_UUID ;
typedef scalar_t__ UINT8 ;


 int FUNC_0 (scalar_t__*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (scalar_t__*,int ) ;

UINT8 FUNC_3(UINT8 **VAR_3, tBT_UUID VAR_4)
{
    UINT8 *VAR_5 = *VAR_3;
    UINT8 VAR_6 = 0;

    if (VAR_4.len == VAR_1) {
        FUNC_1 (VAR_5, VAR_4.uu.uuid16);
        VAR_6 = VAR_1;
    } else if (VAR_4.len == VAR_2) {
        FUNC_2(VAR_5, VAR_4.uu.uuid32);
        VAR_5 += VAR_0;
        VAR_6 = VAR_0;
    } else if (VAR_4.len == VAR_0) {
        FUNC_0 (VAR_5, VAR_4.uu.uuid128, VAR_0);
        VAR_6 = VAR_0;
    }

    *VAR_3 = VAR_5;
    return VAR_6;
}
