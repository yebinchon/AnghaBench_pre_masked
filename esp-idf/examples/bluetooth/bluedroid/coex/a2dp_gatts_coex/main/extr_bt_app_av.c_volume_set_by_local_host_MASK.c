
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ volume; } ;
typedef TYPE_1__ esp_avrc_rn_param_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(uint8_t VAR_6)
{
    FUNC_0(VAR_0, "Volume is set locally to: %d%%", (uint32_t)VAR_6 * 100 / 0x7f);
    FUNC_1(&VAR_4);
    VAR_3 = VAR_6;
    FUNC_2(&VAR_4);

    if (VAR_5) {
        esp_avrc_rn_param_t VAR_7;
        VAR_7.volume = VAR_3;
        FUNC_3(VAR_2, VAR_1, &VAR_7);
        VAR_5 = 0;
    }
}
