
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
struct bt_mesh_subnet {scalar_t__ kr_flag; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;

u8_t FUNC_1(struct bt_mesh_subnet *VAR_4)
{
    u8_t VAR_5 = 0x00;

    if (VAR_4 && VAR_4->kr_flag) {
        VAR_5 |= VAR_2;
    }

    if (FUNC_0(VAR_3.flags, VAR_0)) {
        VAR_5 |= VAR_1;
    }

    return VAR_5;
}
