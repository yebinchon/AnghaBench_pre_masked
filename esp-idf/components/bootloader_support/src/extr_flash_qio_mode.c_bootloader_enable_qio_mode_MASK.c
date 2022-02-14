
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ mfg_id; int id_mask; int flash_id; int status_qio_bit; int write_status_fn; int read_status_fn; int manufacturer; } ;
typedef TYPE_1__ qio_info_t ;
struct TYPE_6__ {int device_id; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_4 (int ) ;

void FUNC_5(void)
{
    uint32_t VAR_5;
    uint8_t VAR_6;
    uint16_t VAR_7;
    int VAR_8;

    FUNC_0(VAR_2, "Probing for QIO mode enable...");
    FUNC_3(&VAR_4);

    VAR_5 = VAR_4.device_id;
    FUNC_0(VAR_2, "Raw SPI flash chip id 0x%x", VAR_5);

    VAR_6 = (VAR_5 >> 16) & 0xFF;
    VAR_7 = VAR_5 & 0xFFFF;
    FUNC_0(VAR_2, "Manufacturer ID 0x%02x chip ID 0x%04x", VAR_6, VAR_7);

    for (VAR_8 = 0; VAR_8 < VAR_1 - 1; VAR_8++) {
        const qio_info_t *VAR_9 = &VAR_3[VAR_8];
        if (VAR_6 == VAR_9->mfg_id && (VAR_7 & VAR_9->id_mask) == (VAR_9->flash_id & VAR_9->id_mask)) {
            FUNC_1(VAR_2, "Enabling QIO for flash chip %s", VAR_3[VAR_8].manufacturer);
            break;
        }
    }

    if (VAR_8 == VAR_1 - 1) {
        FUNC_1(VAR_2, "Enabling default flash chip QIO");
    }



    FUNC_2(VAR_3[VAR_8].read_status_fn,
                    VAR_3[VAR_8].write_status_fn,
                    VAR_3[VAR_8].status_qio_bit);
}
