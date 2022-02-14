
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int esp_err_t ;
struct TYPE_2__ {char* name; } ;
typedef TYPE_1__ cis_tuple_t ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int *,char*,...) ;

__attribute__((used)) static esp_err_t FUNC_4(const void* VAR_1, uint8_t* VAR_2, FILE* VAR_3)
{
    const cis_tuple_t* VAR_4 = (const cis_tuple_t*)VAR_1;
    VAR_2++;
    int VAR_5 = *(VAR_2++);
    FUNC_3(VAR_3, "TUPLE: %s, size: %d\n", VAR_4->name, VAR_5);
    FUNC_1(VAR_5, 2);

    FUNC_1(VAR_5--, 1);
    bool VAR_6 = VAR_2[0] & FUNC_0(7);
    bool VAR_7 = VAR_2[0] & FUNC_0(6);
    int VAR_8 = VAR_2[0] & 0x3F;
    FUNC_3(VAR_3, "  INDX: %02X, Intface: %d, Default: %d, Conf-Entry-Num: %d\n", *(VAR_2++), VAR_6, VAR_7, VAR_8);

    if (VAR_6) {
        FUNC_1(VAR_5--, 1);
        FUNC_3(VAR_3, "  IF: %02X\n", *(VAR_2++));
    }

    FUNC_1(VAR_5--, 1);
    bool VAR_9 = VAR_2[0] & FUNC_0(7);
    int VAR_10 = (VAR_2[0] >> 5 )&(0x3);
    bool VAR_11 = VAR_2[0] & FUNC_0(4);
    bool VAR_12 = VAR_2[0] & FUNC_0(3);
    bool VAR_13 = VAR_2[0] & FUNC_0(2);
    int VAR_14 = VAR_2[0] & 3;
    FUNC_3(VAR_3, "  FS: %02X, misc: %d, mem_space: %d, irq: %d, io_space: %d, timing: %d, power: %d\n", *(VAR_2++), VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

    FUNC_2(VAR_14 == 0);
    FUNC_2(!VAR_13);
    FUNC_2(!VAR_12);

    if (VAR_11) {
        FUNC_1(VAR_5--, 1);
        bool VAR_15 = VAR_2[0] & FUNC_0(4);
        FUNC_3(VAR_3, "  IR: %02X, mask: %d, ",*(VAR_2++), VAR_15);
        if (VAR_15) {
            FUNC_1(VAR_5, 2);
            VAR_5-=2;
            FUNC_3(VAR_3, "  IRQ: %02X %02X\n", VAR_2[0], VAR_2[1]);
            VAR_2+=2;
        }
    }

    if (VAR_10) {
        FUNC_1(VAR_5, 2);
        VAR_5-=2;
        FUNC_2(VAR_10==1);
        int VAR_16 = *(uint16_t*)VAR_2;
        FUNC_3(VAR_3, "  LEN: %04X\n", VAR_16);
        VAR_2+=2;
    }

    FUNC_2(VAR_9==0);
    return VAR_0;
}
