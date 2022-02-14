
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ magic; scalar_t__ spi_mode; scalar_t__ spi_speed; scalar_t__ spi_size; } ;
typedef TYPE_1__ esp_image_header_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,int ) ;

__attribute__((used)) static esp_err_t FUNC_3(uint32_t VAR_8, const esp_image_header_t *VAR_9, bool VAR_10)
{
    esp_err_t VAR_11 = VAR_6;

    if (VAR_9->magic != VAR_3) {
        if (!VAR_10) {
            FUNC_0(VAR_7, "image at 0x%x has invalid magic byte", VAR_8);
        }
        VAR_11 = VAR_0;
    }
    if (FUNC_2(VAR_9, VAR_1) != VAR_6) {
        VAR_11 = VAR_0;
    }
    if (!VAR_10) {
        if (VAR_9->spi_mode > VAR_4) {
            FUNC_1(VAR_7, "image at 0x%x has invalid SPI mode %d", VAR_8, VAR_9->spi_mode);
        }
        if (VAR_9->spi_speed > VAR_5) {
            FUNC_1(VAR_7, "image at 0x%x has invalid SPI speed %d", VAR_8, VAR_9->spi_speed);
        }
        if (VAR_9->spi_size > VAR_2) {
            FUNC_1(VAR_7, "image at 0x%x has invalid SPI size %d", VAR_8, VAR_9->spi_size);
        }
    }
    return VAR_11;
}
