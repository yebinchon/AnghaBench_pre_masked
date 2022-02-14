
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int width; int write_protect; int card_detect; int card_int; int d7_gpio; int d6_gpio; int d5_gpio; int d4_gpio; int d3_gpio; int d2_gpio; int d1_gpio; int d0_gpio; int cmd_gpio; int clk_gpio; } ;
typedef TYPE_1__ sdmmc_slot_info_t ;
struct TYPE_8__ {int flags; int width; int gpio_cd; int gpio_wp; } ;
typedef TYPE_2__ sdmmc_slot_config_t ;
struct TYPE_9__ {int intr_type; int pull_down_en; int pull_up_en; int mode; int pin_bit_mask; } ;
typedef TYPE_3__ gpio_config_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int) ;
 int VAR_13 ;
 int* VAR_14 ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 (int,int) ;
 TYPE_1__* VAR_15 ;

esp_err_t FUNC_11(int VAR_16, const sdmmc_slot_config_t* VAR_17)
{
    bool VAR_18 = VAR_17->flags & VAR_8;
    if (VAR_18) {
        FUNC_8(VAR_16, VAR_17->width);
    }
    if (!VAR_13) {
        return VAR_1;
    }
    if (!(VAR_16 == 0 || VAR_16 == 1)) {
        return VAR_0;
    }
    if (VAR_17 == ((void*)0)) {
        return VAR_0;
    }
    int VAR_19 = VAR_17->gpio_cd;
    int VAR_20 = VAR_17->gpio_wp;
    uint8_t VAR_21 = VAR_17->width;


    const sdmmc_slot_info_t* VAR_22 = &VAR_15[VAR_16];

    if (VAR_21 == VAR_11) {
        VAR_21 = VAR_22->width;
    }
    else if (VAR_21 > VAR_22->width) {
        return VAR_0;
    }
    VAR_14[VAR_16] = VAR_21;

    FUNC_2(VAR_22->clk_gpio);
    FUNC_2(VAR_22->cmd_gpio);
    FUNC_2(VAR_22->d0_gpio);

    if (VAR_21 >= 4) {
        FUNC_2(VAR_22->d1_gpio);
        FUNC_2(VAR_22->d2_gpio);


        gpio_config_t VAR_23 = {
            .pin_bit_mask = FUNC_0(VAR_22->d3_gpio),
            .mode = VAR_7 ,
            .pull_up_en = 0,
            .pull_down_en = 0,
            .intr_type = VAR_5,
        };
        FUNC_3(&VAR_23);
        FUNC_7(VAR_22->d3_gpio, 1);
        if (VAR_21 == 8) {
            FUNC_2(VAR_22->d4_gpio);
            FUNC_2(VAR_22->d5_gpio);
            FUNC_2(VAR_22->d6_gpio);
            FUNC_2(VAR_22->d7_gpio);
        }
    }



    FUNC_4(VAR_3, VAR_22->card_int, 0);


    int VAR_24;
    if (VAR_19 != VAR_9) {
        FUNC_1(VAR_12, "using GPIO%d as CD pin", VAR_19);
        FUNC_5(VAR_19);
        FUNC_6(VAR_19, VAR_6);
        VAR_24 = VAR_19;
    } else {

        VAR_24 = VAR_4;
    }
    FUNC_4(VAR_24, VAR_22->card_detect, 0);


    int VAR_25;
    if (VAR_20 != VAR_10) {
        FUNC_1(VAR_12, "using GPIO%d as WP pin", VAR_20);
        FUNC_5(VAR_20);
        FUNC_6(VAR_20, VAR_6);
        VAR_25 = VAR_20;
    } else {

        VAR_25 = VAR_3;
    }


    FUNC_4(VAR_25, VAR_22->write_protect, 1);


    esp_err_t VAR_26 = FUNC_10(VAR_16, 400);
    if (VAR_26 != VAR_2) {
        return VAR_26;
    }
    VAR_26 = FUNC_9(VAR_16, 1);
    if (VAR_26 != VAR_2) {
        return VAR_26;
    }
    return VAR_2;
}
