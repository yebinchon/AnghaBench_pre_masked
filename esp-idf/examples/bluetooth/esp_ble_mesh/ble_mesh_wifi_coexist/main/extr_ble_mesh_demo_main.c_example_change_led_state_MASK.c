
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct _led_state {int pin; } ;
struct TYPE_2__ {int disable_fast_prov_timer; int srv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int *,int ) ;
 struct _led_state* VAR_3 ;

__attribute__((used)) static void FUNC_3(uint8_t VAR_4)
{
    struct _led_state *VAR_5 = &VAR_3[1];

    FUNC_0(VAR_5->pin, VAR_4);




    if (!FUNC_1(VAR_2.srv_flags, VAR_0)) {
        FUNC_2(&VAR_2.disable_fast_prov_timer, VAR_1);
    }
}
