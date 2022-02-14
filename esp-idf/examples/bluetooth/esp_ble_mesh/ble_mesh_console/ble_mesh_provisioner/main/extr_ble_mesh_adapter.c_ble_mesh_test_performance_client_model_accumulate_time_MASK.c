
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {scalar_t__ test_length; scalar_t__ test_num; scalar_t__* package_index; scalar_t__ ttl; scalar_t__* time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(uint16_t VAR_5, uint8_t *VAR_6, uint8_t VAR_7, uint16_t VAR_8)
{
    uint16_t VAR_9;
    uint16_t VAR_10 = 0;
    uint16_t VAR_11 = 0;
    FUNC_1(VAR_2, VAR_3);


    if (VAR_8 != VAR_4.test_length) {
        FUNC_0(VAR_2);
        return 1;
    }

    if (VAR_6 != ((void*)0)) {
        VAR_10 = (VAR_6[0] << 8) | VAR_6[1];
        if (VAR_6[2] == VAR_0) {
            VAR_11 = VAR_6[3];
        }
    }

    for (VAR_9 = 0; VAR_9 < VAR_4.test_num; VAR_9++) {
        if (VAR_4.package_index[VAR_9] == VAR_10) {
            FUNC_0(VAR_2);
            return 1;
        }
    }

    for (VAR_9 = 0; VAR_9 < VAR_4.test_num; VAR_9++) {
        if (VAR_4.package_index[VAR_9] == 0) {
            VAR_4.package_index[VAR_9] = VAR_10;
            if (VAR_6[2] == VAR_0) {
                if (VAR_11 == VAR_4.ttl && VAR_7 == VAR_4.ttl) {
                    VAR_4.time[VAR_9] = VAR_5;
                } else {
                    VAR_4.time[VAR_9] = 0;
                }
            } else if (VAR_6[2] == VAR_1) {
                VAR_4.time[VAR_9] = VAR_5;
            }
            break;
        }
    }

    FUNC_0(VAR_2);
    return 0;
}
