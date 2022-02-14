
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct MD5Context {int dummy; } ;
struct TYPE_5__ {scalar_t__ offset; scalar_t__ size; } ;
typedef TYPE_1__ esp_partition_pos_t ;
struct TYPE_6__ {int magic; scalar_t__ type; scalar_t__ subtype; TYPE_1__ pos; } ;
typedef TYPE_2__ esp_partition_info_t ;
typedef int esp_err_t ;
typedef int digest ;
struct TYPE_7__ {scalar_t__ chip_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (unsigned char*,struct MD5Context*) ;
 int FUNC_3 (struct MD5Context*) ;
 int FUNC_4 (struct MD5Context*,unsigned char*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 scalar_t__ FUNC_5 (unsigned char*,unsigned char*,int) ;

esp_err_t FUNC_6(const esp_partition_info_t *VAR_10, bool VAR_11, int *VAR_12)
{
    int VAR_13 = 0;
    int VAR_14;
    uint32_t VAR_15 = VAR_9.chip_size;
    *VAR_12 = 0;

    for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
        const esp_partition_info_t *VAR_16 = &VAR_10[VAR_14];

        if (VAR_16->magic == VAR_3) {
            const esp_partition_pos_t *VAR_17 = &VAR_16->pos;
            if (VAR_17->offset > VAR_15 || VAR_17->offset + VAR_17->size > VAR_15) {
                if (VAR_11) {
                    FUNC_1(VAR_8, "partition %d invalid - offset 0x%x size 0x%x exceeds flash chip size 0x%x",
                             VAR_14, VAR_17->offset, VAR_17->size, VAR_15);
                }
                return VAR_0;
            }
        } else if (VAR_16->magic == VAR_4) {
            if (VAR_13) {
                if (VAR_11) {
                    FUNC_1(VAR_8, "Only one MD5 checksum is allowed");
                }
                return VAR_1;
            }

            struct MD5Context VAR_18;
            unsigned char VAR_19[16];
            FUNC_3(&VAR_18);
            FUNC_4(&VAR_18, (unsigned char *) VAR_10, VAR_14 * sizeof(esp_partition_info_t));
            FUNC_2(VAR_19, &VAR_18);

            unsigned char *VAR_20 = ((unsigned char *) VAR_16) + 16;

            if (FUNC_5(VAR_20, VAR_19, sizeof(VAR_19)) != 0) {
                if (VAR_11) {
                    FUNC_1(VAR_8, "Incorrect MD5 checksum");
                }
                return VAR_1;
            }


            VAR_13 = 1;
        } else if (VAR_16->magic == 0xFFFF
                   && VAR_16->type == VAR_7
                   && VAR_16->subtype == VAR_6) {
            FUNC_0(VAR_8, "partition table verified, %d entries", VAR_14);
            *VAR_12 = VAR_14 - VAR_13;
            return VAR_2;
        } else {
            if (VAR_11) {
                FUNC_1(VAR_8, "partition %d invalid magic number 0x%x", VAR_14, VAR_16->magic);
            }
            return VAR_1;
        }
    }

    if (VAR_11) {
        FUNC_1(VAR_8, "partition table has no terminating entry, not valid");
    }
    return VAR_1;
}
