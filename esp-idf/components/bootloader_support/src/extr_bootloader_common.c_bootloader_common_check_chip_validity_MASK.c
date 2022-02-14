
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ esp_image_type ;
struct TYPE_3__ {int min_chip_rev; int chip_id; } ;
typedef TYPE_1__ esp_image_header_t ;
typedef int esp_err_t ;
typedef int esp_chip_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*,int ,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;

esp_err_t FUNC_3(const esp_image_header_t* VAR_5, esp_image_type VAR_6)
{
    esp_err_t VAR_7 = VAR_3;
    esp_chip_id_t VAR_8 = VAR_0;
    if (VAR_8 != VAR_5->chip_id) {
        FUNC_0(VAR_4, "mismatch chip ID, expected %d, found %d", VAR_8, VAR_5->chip_id);
        VAR_7 = VAR_1;
    }
    uint8_t VAR_9 = FUNC_2();
    if (VAR_9 < VAR_5->min_chip_rev) {
        FUNC_0(VAR_4, "can't run on lower chip revision, expected %d, found %d", VAR_9, VAR_5->min_chip_rev);
        VAR_7 = VAR_1;
    } else if (VAR_9 != VAR_5->min_chip_rev) {
        FUNC_1(VAR_4, "chip revision: %d, min. %s chip revision: %d", VAR_9, VAR_6 == VAR_2 ? "bootloader" : "application", VAR_5->min_chip_rev);
    }
    return VAR_7;
}
