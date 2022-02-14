
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int seq_num; int magic; int crc; int type; int state; } ;
typedef TYPE_1__ example_espnow_data_t ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int const*,int) ;

int FUNC_2(uint8_t *VAR_2, uint16_t VAR_3, uint8_t *VAR_4, uint16_t *VAR_5, int *VAR_6)
{
    example_espnow_data_t *VAR_7 = (example_espnow_data_t *)VAR_2;
    uint16_t VAR_8, VAR_9 = 0;

    if (VAR_3 < sizeof(example_espnow_data_t)) {
        FUNC_0(VAR_0, "Receive ESPNOW data too short, len:%d", VAR_3);
        return -1;
    }

    *VAR_4 = VAR_7->state;
    *VAR_5 = VAR_7->seq_num;
    *VAR_6 = VAR_7->magic;
    VAR_8 = VAR_7->crc;
    VAR_7->crc = 0;
    VAR_9 = FUNC_1(VAR_1, (uint8_t const *)VAR_7, VAR_3);

    if (VAR_9 == VAR_8) {
        return VAR_7->type;
    }

    return -1;
}
