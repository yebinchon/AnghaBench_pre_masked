
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ledc_mode_t ;
struct TYPE_3__ {int ledc_fade_mux; } ;
typedef TYPE_1__ ledc_fade_t ;
typedef size_t ledc_channel_t ;


 TYPE_1__*** VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(ledc_mode_t VAR_1, ledc_channel_t VAR_2)
{
    ledc_fade_t* VAR_3 = VAR_0[VAR_1][VAR_2];
    if (VAR_3) {
        FUNC_0(VAR_3->ledc_fade_mux);
    }
}
