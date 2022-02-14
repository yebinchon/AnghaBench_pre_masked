
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int spi_host_device_t ;
struct TYPE_5__ {size_t sclk_io_num; size_t quadwp_io_num; size_t quadhd_io_num; size_t mosi_io_num; size_t miso_io_num; } ;
typedef TYPE_1__ spi_bus_config_t ;
typedef int esp_err_t ;
struct TYPE_6__ {int spiclk_in; int spiclk_out; int spihd_in; int spihd_out; int spiwp_in; int spiwp_out; int spiq_in; int spiq_out; int spid_in; int spid_out; int func; } ;


 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int,char*,int ) ;
 int FUNC_8 (size_t,char*,int const) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (int,TYPE_1__ const*) ;
 int FUNC_10 (size_t,int ) ;
 int FUNC_11 (size_t,int ,int) ;
 int FUNC_12 (size_t,int ,int) ;
 int FUNC_13 (size_t,int ,int,int) ;
 int FUNC_14 (size_t,int ) ;
 TYPE_3__* VAR_17 ;

esp_err_t FUNC_15(spi_host_device_t VAR_18, const spi_bus_config_t *VAR_19, int VAR_20, uint32_t VAR_21, uint32_t* VAR_22)
{
    uint32_t VAR_23=0;

    bool VAR_24;
    bool VAR_25;
    bool VAR_26;
    if ((VAR_21&VAR_10) != 0) {

        VAR_24 = ((VAR_21&VAR_8) != 0) ? 1 : 0;
        VAR_25 = 1;
        VAR_26 = 1;
    } else {

        VAR_24 = 1;
        VAR_25 = ((VAR_21&VAR_8) != 0) ? 1 : 0;
        VAR_26 = 0;
    }

    const bool VAR_27 = 1;
    const bool VAR_28 = 1;


    if (VAR_19->sclk_io_num>=0) {
        VAR_23 |= VAR_13;
        FUNC_8(VAR_19->sclk_io_num, "sclk", VAR_26);
    }
    if (VAR_19->quadwp_io_num>=0) {
        FUNC_8(VAR_19->quadwp_io_num, "wp", VAR_27);
    }
    if (VAR_19->quadhd_io_num>=0) {
        FUNC_8(VAR_19->quadhd_io_num, "hd", VAR_28);
    }

    if (VAR_19->quadhd_io_num >= 0 && VAR_19->quadwp_io_num >= 0) VAR_23 |= VAR_14;
    if (VAR_19->mosi_io_num >= 0) {
        VAR_23 |= VAR_12;
        FUNC_8(VAR_19->mosi_io_num, "mosi", VAR_25);
    }
    if (VAR_19->miso_io_num>=0) {
        VAR_23 |= VAR_11;
        FUNC_8(VAR_19->miso_io_num, "miso", VAR_24);
    }

    if ( (VAR_19->mosi_io_num < 0 || FUNC_4(VAR_19->mosi_io_num)) &&
        (VAR_19->miso_io_num < 0 || FUNC_4(VAR_19->miso_io_num)) ) {
        VAR_23 |= VAR_8;
    }


    bool VAR_29 = FUNC_9(VAR_18, VAR_19);
    if (VAR_29) VAR_23 |= VAR_9;

    uint32_t VAR_30 = VAR_21 & ~VAR_23;
    VAR_30 &= ~VAR_10;

    if (VAR_30 != 0) {

        if (VAR_30 & VAR_13) FUNC_3(VAR_15, "sclk pin required.");
        if (VAR_30 & VAR_12) FUNC_3(VAR_15, "mosi pin required.");
        if (VAR_30 & VAR_11) FUNC_3(VAR_15, "miso pin required.");
        if (VAR_30 & VAR_8) FUNC_3(VAR_15, "not both mosi and miso output capable");
        if (VAR_30 & VAR_14) FUNC_3(VAR_15, "both wp and hd required.");
        if (VAR_30 & VAR_9) FUNC_3(VAR_15, "not using iomux pins");
        FUNC_7(VAR_30 == 0, "not all required capabilities satisfied.", VAR_2);
    }

    if (VAR_29) {


        FUNC_2(VAR_15, "SPI%d use iomux pins.", VAR_18+1);
        if (VAR_19->mosi_io_num >= 0) {
            FUNC_10(VAR_19->mosi_io_num, VAR_17[VAR_18].spid_in);





        }
        if (VAR_19->miso_io_num >= 0) {
            FUNC_10(VAR_19->miso_io_num, VAR_17[VAR_18].spiq_in);





        }
        if (VAR_19->quadwp_io_num >= 0) {
            FUNC_10(VAR_19->quadwp_io_num, VAR_17[VAR_18].spiwp_in);





        }
        if (VAR_19->quadhd_io_num >= 0) {
            FUNC_10(VAR_19->quadhd_io_num, VAR_17[VAR_18].spihd_in);





        }
        if (VAR_19->sclk_io_num >= 0) {
            FUNC_10(VAR_19->sclk_io_num, VAR_17[VAR_18].spiclk_in);





        }
        VAR_23 |= VAR_9;
    } else {

        FUNC_2(VAR_15, "SPI%d use gpio matrix.", VAR_18+1);
        if (VAR_19->mosi_io_num >= 0) {
            if (VAR_25 || (VAR_23&VAR_8)) {
                FUNC_14(VAR_19->mosi_io_num, VAR_6);
                FUNC_13(VAR_19->mosi_io_num, VAR_17[VAR_18].spid_out, 0, 0);
            } else {
                FUNC_14(VAR_19->mosi_io_num, VAR_5);
            }
            FUNC_12(VAR_19->mosi_io_num, VAR_17[VAR_18].spid_in, 0);



            FUNC_5(VAR_7[VAR_19->mosi_io_num], VAR_4);
        }
        if (VAR_19->miso_io_num >= 0) {
            if (VAR_24 || (VAR_23&VAR_8)) {
                FUNC_14(VAR_19->miso_io_num, VAR_6);
                FUNC_13(VAR_19->miso_io_num, VAR_17[VAR_18].spiq_out, 0, 0);
            } else {
                FUNC_14(VAR_19->miso_io_num, VAR_5);
            }
            FUNC_12(VAR_19->miso_io_num, VAR_17[VAR_18].spiq_in, 0);



            FUNC_5(VAR_7[VAR_19->miso_io_num], VAR_4);
        }
        if (VAR_19->quadwp_io_num >= 0) {
            FUNC_14(VAR_19->quadwp_io_num, VAR_6);
            FUNC_13(VAR_19->quadwp_io_num, VAR_17[VAR_18].spiwp_out, 0, 0);
            FUNC_12(VAR_19->quadwp_io_num, VAR_17[VAR_18].spiwp_in, 0);



            FUNC_5(VAR_7[VAR_19->quadwp_io_num], VAR_4);
        }
        if (VAR_19->quadhd_io_num >= 0) {
            FUNC_14(VAR_19->quadhd_io_num, VAR_6);
            FUNC_13(VAR_19->quadhd_io_num, VAR_17[VAR_18].spihd_out, 0, 0);
            FUNC_12(VAR_19->quadhd_io_num, VAR_17[VAR_18].spihd_in, 0);



            FUNC_5(VAR_7[VAR_19->quadhd_io_num], VAR_4);
        }
        if (VAR_19->sclk_io_num >= 0) {
            if (VAR_26) {
                FUNC_14(VAR_19->sclk_io_num, VAR_6);
                FUNC_13(VAR_19->sclk_io_num, VAR_17[VAR_18].spiclk_out, 0, 0);
            } else {
                FUNC_14(VAR_19->sclk_io_num, VAR_5);
            }
            FUNC_12(VAR_19->sclk_io_num, VAR_17[VAR_18].spiclk_in, 0);



            FUNC_5(VAR_7[VAR_19->sclk_io_num], VAR_4);
        }
    }
    if (VAR_22) *VAR_22 = VAR_23;
    return VAR_3;
}
