
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {int pin_bit_mask; int mode; int intr_type; scalar_t__ pull_down_en; scalar_t__ pull_up_en; } ;
typedef TYPE_2__ gpio_config_t ;
typedef int esp_err_t ;
struct TYPE_7__ {TYPE_1__* pin; } ;
struct TYPE_5__ {int pad_driver; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int,int,int,int,int,int,int ) ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int) ;

esp_err_t FUNC_17(const gpio_config_t *VAR_17)
{
    uint64_t VAR_18 = (VAR_17->pin_bit_mask);
    uint32_t VAR_19 = 0;
    uint32_t VAR_20 = 0;
    uint8_t VAR_21 = 0;
    uint8_t VAR_22 = 0;
    uint8_t VAR_23 = 0;
    uint8_t VAR_24 = 0;
    uint8_t VAR_25 = 0;
    if (VAR_17->pin_bit_mask == 0 || VAR_17->pin_bit_mask >= (((uint64_t) 1) << VAR_6)) {
        FUNC_1(VAR_15, "GPIO_PIN mask error ");
        return VAR_0;
    }
    do {
        VAR_19 = VAR_7[VAR_20];
        if (((VAR_18 >> VAR_20) & FUNC_0(0))) {
            if (!VAR_19) {
                FUNC_1(VAR_15, "IO%d is not a valid GPIO",VAR_20);
                return VAR_0;
            }
            if(FUNC_6(VAR_20)){
                FUNC_16(VAR_20);
            }
            if ((VAR_17->mode) & VAR_3) {
                VAR_21 = 1;
                FUNC_5(VAR_7[VAR_20]);
            } else {
                FUNC_4(VAR_7[VAR_20]);
            }
            if ((VAR_17->mode) & VAR_4) {
                VAR_23 = 1;
                VAR_2.pin[VAR_20].pad_driver = 1;
            } else {
                VAR_2.pin[VAR_20].pad_driver = 0;
            }
            if ((VAR_17->mode) & VAR_5) {
                VAR_22 = 1;
                FUNC_10(VAR_20);
            } else {
                FUNC_9(VAR_20);
            }
            if (VAR_17->pull_up_en) {
                VAR_24 = 1;
                FUNC_14(VAR_20);
            } else {
                FUNC_13(VAR_20);
            }
            if (VAR_17->pull_down_en) {
                VAR_25 = 1;
                FUNC_12(VAR_20);
            } else {
                FUNC_11(VAR_20);
            }
            FUNC_2(VAR_15, "GPIO[%d]| InputEn: %d| OutputEn: %d| OpenDrain: %d| Pullup: %d| Pulldown: %d| Intr:%d ", VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_17->intr_type);
            FUNC_15(VAR_20, VAR_17->intr_type);
            if (VAR_17->intr_type) {
                FUNC_8(VAR_20);
            } else {
                FUNC_7(VAR_20);
            }
            FUNC_3(VAR_19, VAR_16);
        }
        VAR_20++;
    } while (VAR_20 < VAR_6);
    return VAR_1;
}
