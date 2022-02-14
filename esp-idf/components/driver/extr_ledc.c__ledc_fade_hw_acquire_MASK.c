
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ledc_mode_t ;
struct TYPE_3__ {int ledc_fade_sem; } ;
typedef TYPE_1__ ledc_fade_t ;
typedef size_t ledc_channel_t ;


 int VAR_0 ;
 int FUNC_0 (size_t,size_t,int ) ;
 int VAR_1 ;
 TYPE_1__*** VAR_2 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(ledc_mode_t VAR_3, ledc_channel_t VAR_4)
{
    ledc_fade_t* VAR_5 = VAR_2[VAR_3][VAR_4];
    if (VAR_5) {
        FUNC_1(VAR_5->ledc_fade_sem, VAR_1);
        FUNC_0(VAR_3, VAR_4, VAR_0);
    }
}
