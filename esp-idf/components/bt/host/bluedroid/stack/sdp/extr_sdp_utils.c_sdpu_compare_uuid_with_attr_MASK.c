
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ u16; scalar_t__ u32; scalar_t__ array; } ;
struct TYPE_10__ {TYPE_2__ v; } ;
struct TYPE_11__ {TYPE_3__ attr_value; int attr_len_type; } ;
typedef TYPE_4__ tSDP_DISC_ATTR ;
struct TYPE_8__ {scalar_t__ uuid16; scalar_t__ uuid32; int uuid128; } ;
struct TYPE_12__ {scalar_t__ len; TYPE_1__ uu; } ;
typedef TYPE_5__ tBT_UUID ;
typedef scalar_t__ UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,void*,int ) ;

BOOLEAN FUNC_2 (tBT_UUID *VAR_3, tSDP_DISC_ATTR *VAR_4)
{
    UINT16 VAR_5 = FUNC_0 (VAR_4->attr_len_type);


    if (VAR_3->len != VAR_5) {
        return (VAR_0);
    }

    if (VAR_3->len == 2) {
        return (BOOLEAN)(VAR_3->uu.uuid16 == VAR_4->attr_value.v.u16);
    } else if (VAR_3->len == 4) {
        return (BOOLEAN)(VAR_3->uu.uuid32 == VAR_4->attr_value.v.u32);
    }
    else if (!FUNC_1 (VAR_3->uu.uuid128, (void *) VAR_4->attr_value.v.array, VAR_1)) {
        return (VAR_2);
    }

    return (VAR_0);
}
