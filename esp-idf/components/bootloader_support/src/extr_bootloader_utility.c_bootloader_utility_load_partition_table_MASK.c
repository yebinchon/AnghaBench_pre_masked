
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int size; int offset; } ;
struct TYPE_9__ {intptr_t type; intptr_t subtype; TYPE_1__ pos; int label; } ;
typedef TYPE_2__ esp_partition_info_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_10__ {TYPE_1__ ota_info; int app_count; TYPE_1__* ota; TYPE_1__ test; TYPE_1__ factory; } ;
typedef TYPE_3__ bootloader_state_t ;


 int FUNC_0 (int ,char*,intptr_t,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 intptr_t VAR_2 ;






 size_t VAR_3 ;
 size_t VAR_4 ;



 int VAR_5 ;
 TYPE_2__* FUNC_3 (intptr_t,int ) ;
 int FUNC_4 (TYPE_2__ const*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__ const*,int,int*) ;

bool FUNC_7(bootloader_state_t *VAR_6)
{
    const esp_partition_info_t *VAR_7;
    const char *VAR_8;
    esp_err_t VAR_9;
    int VAR_10;

    VAR_7 = FUNC_3(VAR_2, VAR_1);
    if (!VAR_7) {
        FUNC_1(VAR_5, "bootloader_mmap(0x%x, 0x%x) failed", VAR_2, VAR_1);
        return 0;
    }
    FUNC_0(VAR_5, "mapped partition table 0x%x at 0x%x", VAR_2, (intptr_t)VAR_7);

    VAR_9 = FUNC_6(VAR_7, 1, &VAR_10);
    if (VAR_9 != VAR_0) {
        FUNC_1(VAR_5, "Failed to verify partition table");
        return 0;
    }

    FUNC_2(VAR_5, "Partition Table:");
    FUNC_2(VAR_5, "## Label            Usage          Type ST Offset   Length");

    for (int VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
        const esp_partition_info_t *VAR_12 = &VAR_7[VAR_11];
        FUNC_0(VAR_5, "load partition table entry 0x%x", (intptr_t)VAR_12);
        FUNC_0(VAR_5, "type=%x subtype=%x", VAR_12->type, VAR_12->subtype);
        VAR_8 = "unknown";


        switch (VAR_12->type) {
        case 129:
            switch (VAR_12->subtype) {
            case 131:
                VAR_6->factory = VAR_12->pos;
                VAR_8 = "factory app";
                break;
            case 130:
                VAR_6->test = VAR_12->pos;
                VAR_8 = "test app";
                break;
            default:

                if ((VAR_12->subtype & ~VAR_4) == VAR_3) {
                    VAR_6->ota[VAR_12->subtype & VAR_4] = VAR_12->pos;
                    ++VAR_6->app_count;
                    VAR_8 = "OTA app";
                } else {
                    VAR_8 = "Unknown app";
                }
                break;
            }
            break;
        case 128:
            switch (VAR_12->subtype) {
            case 134:
                VAR_6->ota_info = VAR_12->pos;
                VAR_8 = "OTA data";
                break;
            case 133:
                VAR_8 = "RF data";
                break;
            case 132:
                VAR_8 = "WiFi data";
                break;
            case 135:
                VAR_8 = "NVS keys";
                break;
            case 136:
                VAR_8 = "efuse";



                break;
            default:
                VAR_8 = "Unknown data";
                break;
            }
            break;
        default:
            break;
        }


        FUNC_2(VAR_5, "%2d %-16s %-16s %02x %02x %08x %08x", VAR_11, VAR_12->label, VAR_8,
                 VAR_12->type, VAR_12->subtype,
                 VAR_12->pos.offset, VAR_12->pos.size);
    }

    FUNC_4(VAR_7);

    FUNC_2(VAR_5, "End of partition table");
    return 1;
}
