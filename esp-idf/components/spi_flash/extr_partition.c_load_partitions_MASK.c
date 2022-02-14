
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int spi_flash_mmap_handle_t ;
struct TYPE_9__ {scalar_t__ type; scalar_t__ subtype; int encrypted; scalar_t__* label; int size; int address; int flash_chip; } ;
struct TYPE_10__ {int user_registered; TYPE_2__ info; } ;
typedef TYPE_3__ partition_list_item_t ;
struct TYPE_8__ {int size; int offset; } ;
struct TYPE_11__ {scalar_t__ magic; scalar_t__ type; scalar_t__ subtype; int flags; scalar_t__ label; TYPE_1__ pos; } ;
typedef TYPE_4__ esp_partition_info_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_11 ;
 int FUNC_3 () ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (int,int,int ,void const**,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__*,char const*,int) ;

__attribute__((used)) static esp_err_t FUNC_7(void)
{
    const uint32_t* VAR_14;
    spi_flash_mmap_handle_t VAR_15;

    esp_err_t VAR_16 = FUNC_4(VAR_3 & 0xffff0000,
            VAR_10, VAR_9, (const void**) &VAR_14, &VAR_15);
    if (VAR_16 != VAR_1) {
        return VAR_16;
    }

    const esp_partition_info_t* VAR_17 = (const esp_partition_info_t*)
            (VAR_14 + (VAR_3 & 0xffff) / sizeof(*VAR_14));
    const esp_partition_info_t* VAR_18 = VAR_17 + VAR_10 / sizeof(*VAR_17);

    partition_list_item_t* VAR_19 = ((void*)0);
    for (; VAR_17 != VAR_18; ++VAR_17) {
        if (VAR_17->magic != VAR_2) {
            break;
        }

        partition_list_item_t* VAR_20 = (partition_list_item_t*) FUNC_2(sizeof(partition_list_item_t), 1);
        if (VAR_20 == ((void*)0)) {
            VAR_16 = VAR_0;
            break;
        }
        VAR_20->info.flash_chip = VAR_11;
        VAR_20->info.address = VAR_17->pos.offset;
        VAR_20->info.size = VAR_17->pos.size;
        VAR_20->info.type = VAR_17->type;
        VAR_20->info.subtype = VAR_17->subtype;
        VAR_20->info.encrypted = VAR_17->flags & VAR_4;
        VAR_20->user_registered = 0;

        if (!FUNC_3()) {

            VAR_20->info.encrypted = 0;
        } else if (VAR_17->type == VAR_7
                || (VAR_17->type == VAR_8 && VAR_17->subtype == VAR_6)
                || (VAR_17->type == VAR_8 && VAR_17->subtype == VAR_5)) {


            VAR_20->info.encrypted = 1;
        }


        FUNC_6(VAR_20->info.label, (const char*) VAR_17->label, sizeof(VAR_20->info.label) - 1);
        VAR_20->info.label[sizeof(VAR_17->label)] = 0;

        if (VAR_19 == ((void*)0)) {
            FUNC_1(&VAR_13, VAR_20, VAR_12);
        } else {
            FUNC_0(VAR_19, VAR_20, VAR_12);
        }
        VAR_19 = VAR_20;
    }
    FUNC_5(VAR_15);
    return VAR_16;
}
