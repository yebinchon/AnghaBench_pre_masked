
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int gpio_num_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {int enable_w1tc; TYPE_1__ enable1_w1tc; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_4 ;

__attribute__((used)) static esp_err_t FUNC_3(gpio_num_t VAR_5)
{
    FUNC_0(FUNC_1(VAR_5), "GPIO number error", VAR_0);
    if (VAR_5 < 32) {
        VAR_2.enable_w1tc = (0x1 << VAR_5);
    } else {
        VAR_2.enable1_w1tc.data = (0x1 << (VAR_5 - 32));
    }


    FUNC_2(VAR_3 + (VAR_5 * 4),
              VAR_4);

    return VAR_1;
}
