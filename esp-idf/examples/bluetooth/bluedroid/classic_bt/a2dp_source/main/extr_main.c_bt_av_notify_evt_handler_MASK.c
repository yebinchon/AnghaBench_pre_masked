
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int volume; } ;
typedef TYPE_1__ esp_avrc_rn_param_t ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(uint8_t VAR_2, esp_avrc_rn_param_t *VAR_3)
{
    switch (VAR_2) {
    case 128:
        FUNC_0(VAR_1, "Volume changed: %d", VAR_3->volume);
        FUNC_0(VAR_1, "Set absolute volume: volume %d", VAR_3->volume + 5);
        FUNC_2(VAR_0, VAR_3->volume + 5);
        FUNC_1();
        break;
    }
}
