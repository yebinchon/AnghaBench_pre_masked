
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
typedef int i2c_cmd_handle_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_6__ {TYPE_2__* size; TYPE_1__* chip_address; int end; } ;
struct TYPE_5__ {int* ival; scalar_t__ count; } ;
struct TYPE_4__ {int* ival; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,char**,void**) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ) ;
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
 int VAR_10 ;
 TYPE_3__ VAR_11 ;
 int VAR_12 ;
 int FUNC_15 (char*,...) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_16(int VAR_15, char **VAR_16)
{
    int VAR_17 = FUNC_1(VAR_15, VAR_16, (void **)&VAR_11);
    if (VAR_17 != 0) {
        FUNC_2(VAR_13, VAR_11.end, VAR_16[0]);
        return 0;
    }


    int VAR_18 = VAR_11.chip_address->ival[0];

    int VAR_19 = 1;
    if (VAR_11.size->count) {
        VAR_19 = VAR_11.size->ival[0];
    }
    if (VAR_19 != 1 && VAR_19 != 2 && VAR_19 != 4) {
        FUNC_0(VAR_8, "Wrong read size. Only support 1,2,4");
        return 1;
    }
    FUNC_9();
    FUNC_7(VAR_10, VAR_5, VAR_3, VAR_4, 0);
    uint8_t VAR_20;
    uint8_t VAR_21[4];
    int32_t VAR_22[16];
    FUNC_15("     0  1  2  3  4  5  6  7  8  9  a  b  c  d  e  f"
           "    0123456789abcdef\r\n");
    for (int VAR_23 = 0; VAR_23 < 128; VAR_23 += 16) {
        FUNC_15("%02x: ", VAR_23);
        for (int VAR_24 = 0; VAR_24 < 16; VAR_24 += VAR_19) {
            FUNC_3(VAR_14);
            VAR_20 = VAR_23 + VAR_24;
            i2c_cmd_handle_t VAR_25 = FUNC_4();
            FUNC_12(VAR_25);
            FUNC_14(VAR_25, VAR_18 << 1 | VAR_9, VAR_0);
            FUNC_14(VAR_25, VAR_20, VAR_0);
            FUNC_12(VAR_25);
            FUNC_14(VAR_25, VAR_18 << 1 | VAR_7, VAR_0);
            if (VAR_19 > 1) {
                FUNC_10(VAR_25, VAR_21, VAR_19 - 1, VAR_1);
            }
            FUNC_11(VAR_25, VAR_21 + VAR_19 - 1, VAR_6);
            FUNC_13(VAR_25);
            esp_err_t VAR_26 = FUNC_8(VAR_10, VAR_25, 50 / VAR_12);
            FUNC_5(VAR_25);
            if (VAR_26 == VAR_2) {
                for (int VAR_27 = 0; VAR_27 < VAR_19; VAR_27++) {
                    FUNC_15("%02x ", VAR_21[VAR_27]);
                    VAR_22[VAR_24 + VAR_27] = VAR_21[VAR_27];
                }
            } else {
                for (int VAR_28 = 0; VAR_28 < VAR_19; VAR_28++) {
                    FUNC_15("XX ");
                    VAR_22[VAR_24 + VAR_28] = -1;
                }
            }
        }
        FUNC_15("   ");
        for (int VAR_29 = 0; VAR_29 < 16; VAR_29++) {
            if (VAR_22[VAR_29] < 0) {
                FUNC_15("X");
            }
            if ((VAR_22[VAR_29] & 0xff) == 0x00 || (VAR_22[VAR_29] & 0xff) == 0xff) {
                FUNC_15(".");
            } else if ((VAR_22[VAR_29] & 0xff) < 32 || (VAR_22[VAR_29] & 0xff) >= 127) {
                FUNC_15("?");
            } else {
                FUNC_15("%c", VAR_22[VAR_29] & 0xff);
            }
        }
        FUNC_15("\r\n");
    }
    FUNC_6(VAR_10);
    return 0;
}
