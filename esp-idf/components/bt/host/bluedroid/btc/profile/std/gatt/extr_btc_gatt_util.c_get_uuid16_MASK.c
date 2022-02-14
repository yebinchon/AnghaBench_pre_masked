
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int uuid32; int * uuid128; int uuid16; } ;
struct TYPE_5__ {scalar_t__ len; TYPE_1__ uu; } ;
typedef TYPE_2__ tBT_UUID ;
typedef int UINT8 ;
typedef int UINT16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;

uint16_t FUNC_1(tBT_UUID *VAR_2)
{
    if (VAR_2->len == VAR_1) {
        return VAR_2->uu.uuid16;
    } else if (VAR_2->len == VAR_0) {
        UINT16 VAR_3;
        UINT8 *VAR_4 = &VAR_2->uu.uuid128[VAR_0 - 4];
        FUNC_0(VAR_3, VAR_4);
        return VAR_3;
    } else {
        return (UINT16) VAR_2->uu.uuid32;
    }
}
