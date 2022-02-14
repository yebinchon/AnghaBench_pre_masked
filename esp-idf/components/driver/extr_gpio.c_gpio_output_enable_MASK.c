
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int gpio_num_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {int enable_w1ts; TYPE_1__ enable1_w1ts; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int,int ,int,int) ;

__attribute__((used)) static esp_err_t FUNC_3(gpio_num_t VAR_4)
{
    FUNC_0(FUNC_1(VAR_4), "GPIO output gpio_num error", VAR_0);
    if (VAR_4 < 32) {
        VAR_2.enable_w1ts = (0x1 << VAR_4);
    } else {
        VAR_2.enable1_w1ts.data = (0x1 << (VAR_4 - 32));
    }
    FUNC_2(VAR_4, VAR_3, 0, 0);
    return VAR_1;
}
