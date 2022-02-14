
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int magic; int segment_count; int spi_mode; int spi_speed; int spi_size; } ;
typedef TYPE_1__ esp_image_header_t ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_5(const esp_image_header_t *VAR_11)
{


    FUNC_0(VAR_10, "magic %02x", VAR_11->magic );
    FUNC_0(VAR_10, "segments %02x", VAR_11->segment_count );
    FUNC_0(VAR_10, "spi_mode %02x", VAR_11->spi_mode );
    FUNC_0(VAR_10, "spi_speed %02x", VAR_11->spi_speed );
    FUNC_0(VAR_10, "spi_size %02x", VAR_11->spi_size );

    const char *VAR_12;
    switch ( VAR_11->spi_speed ) {
    case 129:
        VAR_12 = "40MHz";
        break;
    case 130:
        VAR_12 = "26.7MHz";
        break;
    case 131:
        VAR_12 = "20MHz";
        break;
    case 128:
        VAR_12 = "80MHz";
        break;
    default:
        VAR_12 = "20MHz";
        break;
    }
    FUNC_1(VAR_10, "SPI Speed      : %s", VAR_12 );
    FUNC_1(VAR_10, "SPI Mode       : %s", VAR_12 );

    switch ( VAR_11->spi_size ) {
    case 135:
        VAR_12 = "1MB";
        break;
    case 134:
        VAR_12 = "2MB";
        break;
    case 133:
        VAR_12 = "4MB";
        break;
    case 132:
        VAR_12 = "8MB";
        break;
    case 136:
        VAR_12 = "16MB";
        break;
    default:
        VAR_12 = "2MB";
        break;
    }
    FUNC_1(VAR_10, "SPI Flash Size : %s", VAR_12 );

}
