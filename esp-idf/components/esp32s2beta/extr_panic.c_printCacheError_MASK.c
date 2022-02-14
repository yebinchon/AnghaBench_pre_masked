
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static inline void FUNC_4(void)
{
    uint32_t VAR_15 = 0, VAR_16 = 0;
    uint32_t VAR_17[2];
    VAR_17[0] = FUNC_1(VAR_0);
    VAR_17[1] = FUNC_1(VAR_1);
    for (int VAR_18 = 0; VAR_18 < 32; VAR_18++) {
        switch (VAR_17[0] & FUNC_0(VAR_18))
        {
        case 129:
            VAR_15 = FUNC_1(VAR_10);
            VAR_16 = FUNC_1(VAR_11);
            FUNC_3("Icache sync parameter configuration error, the error address and size is 0x");
            FUNC_2(VAR_15);
            FUNC_3("(0x");
            FUNC_2(VAR_16);
            FUNC_3(")\r\n");
            break;
        case 130:
            VAR_15 = FUNC_1(VAR_12);
            VAR_16 = FUNC_1(VAR_13);
            FUNC_3("Icache preload parameter configuration error, the error address and size is 0x");
            FUNC_2(VAR_15);
            FUNC_3("(0x");
            FUNC_2(VAR_16);
            FUNC_3(")\r\n");
            break;
        case 131:
            VAR_15 = FUNC_1(VAR_14);
            FUNC_3("Icache reject error occurred while accessing the address 0x");
            FUNC_2(VAR_15);

            if (FUNC_1(VAR_3) & VAR_2) {
                FUNC_3(" (invalid mmu entry)");
            }
            FUNC_3("\r\n");
            break;
        default:
            break;
        }
        switch (VAR_17[1] & FUNC_0(VAR_18))
        {
        case 132:
            VAR_15 = FUNC_1(VAR_5);
            VAR_16 = FUNC_1(VAR_6);
            FUNC_3("Dcache sync parameter configuration error, the error address and size is 0x");
            FUNC_2(VAR_15);
            FUNC_3("(0x");
            FUNC_2(VAR_16);
            FUNC_3(")\r\n");
            break;
        case 133:
            VAR_15 = FUNC_1(VAR_7);
            VAR_16 = FUNC_1(VAR_8);
            FUNC_3("Dcache preload parameter configuration error, the error address and size is 0x");
            FUNC_2(VAR_15);
            FUNC_3("(0x");
            FUNC_2(VAR_16);
            FUNC_3(")\r\n");
            break;
        case 134:
            FUNC_3("Write back error occurred while dcache tries to write back to flash\r\n");
            break;
        case 135:
            VAR_15 = FUNC_1(VAR_9);
            FUNC_3("Dcache reject error occurred while accessing the address 0x");
            FUNC_2(VAR_15);

            if (FUNC_1(VAR_3) & VAR_2) {
                FUNC_3(" (invalid mmu entry)");
            }
            FUNC_3("\r\n");
            break;
        case 128:
            VAR_15 = FUNC_1(VAR_4);
            FUNC_3("MMU entry fault error occurred while accessing the address 0x");
            FUNC_2(VAR_15);

            if (FUNC_1(VAR_3) & VAR_2) {
                FUNC_3(" (invalid mmu entry)");
            }
            FUNC_3("\r\n");
            break;
        default:
            break;
        }
    }
    FUNC_3("\r\n");
}
