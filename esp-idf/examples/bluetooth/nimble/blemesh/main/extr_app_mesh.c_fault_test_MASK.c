
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct bt_mesh_model {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bt_mesh_model*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_2(struct bt_mesh_model *VAR_6, uint8_t VAR_7, uint16_t VAR_8)
{
    if (VAR_8 != VAR_1) {
        return -VAR_0;
    }

    if (VAR_7 != VAR_2 && VAR_7 != VAR_3) {
        return -VAR_0;
    }

    VAR_5 = VAR_7;
    VAR_4 = 1;
    FUNC_0(FUNC_1(VAR_6));

    return 0;
}
