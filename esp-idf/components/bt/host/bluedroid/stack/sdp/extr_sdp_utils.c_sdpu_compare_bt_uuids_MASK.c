
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ uuid16; scalar_t__ uuid32; int uuid128; } ;
struct TYPE_6__ {int len; TYPE_1__ uu; } ;
typedef TYPE_2__ tBT_UUID ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

BOOLEAN FUNC_1 (tBT_UUID *VAR_2, tBT_UUID *VAR_3)
{

    if (VAR_2->len == VAR_3->len) {
        if (VAR_2->len == 2) {
            return (VAR_2->uu.uuid16 == VAR_3->uu.uuid16);
        } else if (VAR_2->len == 4) {
            return (VAR_2->uu.uuid32 == VAR_3->uu.uuid32);
        } else if (!FUNC_0 (VAR_2->uu.uuid128, VAR_3->uu.uuid128, 16)) {
            return (VAR_1);
        }
    }

    return (VAR_0);
}
