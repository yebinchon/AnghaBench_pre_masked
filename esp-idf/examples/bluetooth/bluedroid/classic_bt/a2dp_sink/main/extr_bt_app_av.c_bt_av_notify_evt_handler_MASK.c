
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int play_pos; int playback; } ;
typedef TYPE_1__ esp_avrc_rn_param_t ;


 int VAR_0 ;



 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(uint8_t VAR_1, esp_avrc_rn_param_t *VAR_2)
{
    switch (VAR_1) {
    case 128:
        FUNC_1();
        break;
    case 129:
        FUNC_0(VAR_0, "Playback status changed: 0x%x", VAR_2->playback);
        FUNC_3();
        break;
    case 130:
        FUNC_0(VAR_0, "Play position changed: %d-ms", VAR_2->play_pos);
        FUNC_2();
        break;
    }
}
