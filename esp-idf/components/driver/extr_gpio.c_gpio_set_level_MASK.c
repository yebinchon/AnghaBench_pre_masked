
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int gpio_num_t ;
typedef int esp_err_t ;
struct TYPE_5__ {int data; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_6__ {int out_w1ts; int out_w1tc; TYPE_2__ out1_w1tc; TYPE_1__ out1_w1ts; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;

esp_err_t FUNC_2(gpio_num_t VAR_3, uint32_t VAR_4)
{
    FUNC_0(FUNC_1(VAR_3), "GPIO output gpio_num error", VAR_0);
    if (VAR_4) {
        if (VAR_3 < 32) {
            VAR_2.out_w1ts = (1 << VAR_3);
        } else {
            VAR_2.out1_w1ts.data = (1 << (VAR_3 - 32));
        }
    } else {
        if (VAR_3 < 32) {
            VAR_2.out_w1tc = (1 << VAR_3);
        } else {
            VAR_2.out1_w1tc.data = (1 << (VAR_3 - 32));
        }
    }
    return VAR_1;
}
