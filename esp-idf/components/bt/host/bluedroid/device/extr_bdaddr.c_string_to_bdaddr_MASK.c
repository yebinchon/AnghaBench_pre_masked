
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int* address; } ;
typedef TYPE_1__ bt_bdaddr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (char const*,char*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;

bool FUNC_3(const char *VAR_0, bt_bdaddr_t *VAR_1)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));

    bt_bdaddr_t VAR_2;
    uint8_t *VAR_3 = VAR_2.address;
    uint32_t VAR_4[6];
    bool VAR_5 = FUNC_2(VAR_0, "%02x:%02x:%02x:%02x:%02x:%02x",
                      &VAR_4[0], &VAR_4[1], &VAR_4[2], &VAR_4[3], &VAR_4[4], &VAR_4[5]) == 6;
    if (VAR_5) {
        for (uint8_t VAR_6 = 0; VAR_6 < 6; VAR_6++){
            VAR_3[VAR_6] = (uint8_t) VAR_4[VAR_6];
        }
        FUNC_1(VAR_1, &VAR_2, sizeof(bt_bdaddr_t));
    }

    return VAR_5;
}
