
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_6__ {TYPE_2__* gatt_db; } ;
struct TYPE_4__ {scalar_t__ uuid_p; } ;
struct TYPE_5__ {TYPE_1__ att_desc; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__* VAR_2 ;

const uint8_t *FUNC_0(uint16_t VAR_3)
{
    const uint8_t *VAR_4;

    for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        if (VAR_2[VAR_5] == VAR_3) {
            VAR_4 = (const uint8_t *) VAR_1->gatt_db[VAR_5].att_desc.uuid_p;
            return VAR_4;
        }
    }
    return ((void*)0);
}
