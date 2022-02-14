
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef size_t uint16_t ;
struct TYPE_2__ {size_t total_package_num; size_t* package_index; int package_num; int statistics; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(uint8_t *VAR_3, uint32_t VAR_4, uint16_t VAR_5)
{
    uint16_t VAR_6;
    uint16_t VAR_7 = (VAR_3[0] << 8) | VAR_3[1];

    FUNC_1(VAR_0, VAR_2);
    for (VAR_6 = 0; VAR_6 < VAR_1.total_package_num; VAR_6++) {
        if (VAR_1.package_index[VAR_6] == VAR_7) {
            FUNC_0(VAR_0);
            return 1;
        }
    }


    if (VAR_3[2] != VAR_5) {
        FUNC_0(VAR_0);
        return 1;
    }

    for (VAR_6 = 0; VAR_6 < VAR_1.total_package_num; VAR_6++) {
        if (VAR_1.package_index[VAR_6] == 0) {
            VAR_1.package_index[VAR_6] = VAR_7;
            VAR_1.package_num += 1;
            VAR_1.statistics += VAR_4;
            break;
        }
    }
    FUNC_0(VAR_0);
    return 0;
}
