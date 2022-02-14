
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int i2c_cmd_handle_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_8__ {TYPE_3__* data_length; TYPE_2__* register_address; TYPE_1__* chip_address; int end; } ;
struct TYPE_7__ {int* ival; scalar_t__ count; } ;
struct TYPE_6__ {int* ival; scalar_t__ count; } ;
struct TYPE_5__ {int* ival; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int,char**,void**) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int*,int,int ) ;
 int FUNC_11 (int ,int*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int,int ) ;
 int VAR_11 ;
 TYPE_4__ VAR_12 ;
 int* FUNC_15 (int) ;
 int VAR_13 ;
 int FUNC_16 (char*,...) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_17(int VAR_15, char **VAR_16)
{
    int VAR_17 = FUNC_1(VAR_15, VAR_16, (void **)&VAR_12);
    if (VAR_17 != 0) {
        FUNC_2(VAR_14, VAR_12.end, VAR_16[0]);
        return 0;
    }


    int VAR_18 = VAR_12.chip_address->ival[0];

    int VAR_19 = -1;
    if (VAR_12.register_address->count) {
        VAR_19 = VAR_12.register_address->ival[0];
    }

    int VAR_20 = 1;
    if (VAR_12.data_length->count) {
        VAR_20 = VAR_12.data_length->ival[0];
    }
    uint8_t *VAR_21 = FUNC_15(VAR_20);

    FUNC_9();
    FUNC_7(VAR_11, VAR_6, VAR_4, VAR_5, 0);
    i2c_cmd_handle_t VAR_22 = FUNC_4();
    FUNC_12(VAR_22);
    if (VAR_19 != -1) {
        FUNC_14(VAR_22, VAR_18 << 1 | VAR_10, VAR_0);
        FUNC_14(VAR_22, VAR_19, VAR_0);
        FUNC_12(VAR_22);
    }
    FUNC_14(VAR_22, VAR_18 << 1 | VAR_8, VAR_0);
    if (VAR_20 > 1) {
        FUNC_10(VAR_22, VAR_21, VAR_20 - 1, VAR_1);
    }
    FUNC_11(VAR_22, VAR_21 + VAR_20 - 1, VAR_7);
    FUNC_13(VAR_22);
    esp_err_t VAR_23 = FUNC_8(VAR_11, VAR_22, 1000 / VAR_13);
    FUNC_5(VAR_22);
    if (VAR_23 == VAR_3) {
        for (int VAR_24 = 0; VAR_24 < VAR_20; VAR_24++) {
            FUNC_16("0x%02x ", VAR_21[VAR_24]);
            if ((VAR_24 + 1) % 16 == 0) {
                FUNC_16("\r\n");
            }
        }
        if (VAR_20 % 16) {
            FUNC_16("\r\n");
        }
    } else if (VAR_23 == VAR_2) {
        FUNC_0(VAR_9, "Bus is busy");
    } else {
        FUNC_0(VAR_9, "Read failed");
    }
    FUNC_3(VAR_21);
    FUNC_6(VAR_11);
    return 0;
}
