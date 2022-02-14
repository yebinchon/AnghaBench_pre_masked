
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int gb; TYPE_1__** j_ac_vlc; } ;
struct TYPE_4__ {int table; } ;
typedef TYPE_2__ IntraX8Context ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(IntraX8Context *const VAR_3, const int VAR_4,
                          int *const VAR_5, int *const VAR_6, int *const VAR_7)
{
    int VAR_8, VAR_9;


    VAR_8 = FUNC_2(VAR_3->gb, VAR_3->j_ac_vlc[VAR_4]->table, VAR_0, VAR_1);

    if (VAR_8 < 46) {
        int VAR_10, VAR_11;
        if (VAR_8 < 0) {
            *VAR_6 =
            *VAR_7 =
            *VAR_5 = 64;
            return;
        }
        *VAR_7 =
        VAR_10 = VAR_8 > 22;
        VAR_8 -= 23 * VAR_10;



        VAR_11 = (0xE50000 >> (VAR_8 & 0x1E)) & 3;



        VAR_10 = 0x01030F >> (VAR_11 << 3);

        *VAR_5 = VAR_8 & VAR_10;
        *VAR_6 = VAR_11;
    } else if (VAR_8 < 73) {
        uint32_t VAR_12;
        uint32_t VAR_13;

        VAR_8 -= 46;
        VAR_12 = VAR_2[VAR_8];

        VAR_9 = FUNC_0(VAR_3->gb, VAR_12 & 0xF);
        VAR_12 >>= 8;
        VAR_13 = VAR_12 & 0xff;
        VAR_12 >>= 8;

        *VAR_5 = (VAR_12 & 0xff) + (VAR_9 & VAR_13);
        *VAR_6 = (VAR_12 >> 8) + (VAR_9 & ~VAR_13);
        *VAR_7 = VAR_8 > (58 - 46);
    } else if (VAR_8 < 75) {
        static const uint8_t VAR_14[32] = {
            0x22, 0x32, 0x33, 0x53, 0x23, 0x42, 0x43, 0x63,
            0x24, 0x52, 0x34, 0x73, 0x25, 0x62, 0x44, 0x83,
            0x26, 0x72, 0x35, 0x54, 0x27, 0x82, 0x45, 0x64,
            0x28, 0x92, 0x36, 0x74, 0x29, 0xa2, 0x46, 0x84,
        };

        *VAR_7 = !(VAR_8 & 1);
        VAR_9 = FUNC_0(VAR_3->gb, 5);
        *VAR_5 = VAR_14[VAR_9] >> 4;
        *VAR_6 = VAR_14[VAR_9] & 0x0F;
    } else {
        *VAR_6 = FUNC_0(VAR_3->gb, 7 - 3 * (VAR_8 & 1));
        *VAR_5 = FUNC_0(VAR_3->gb, 6);
        *VAR_7 = FUNC_1(VAR_3->gb);
    }
    return;
}
