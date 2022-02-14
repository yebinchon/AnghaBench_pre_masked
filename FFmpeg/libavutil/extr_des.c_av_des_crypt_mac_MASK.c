
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int uint64_t ;
struct TYPE_3__ {int * round_keys; scalar_t__ triple_des; } ;
typedef TYPE_1__ AVDES ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int,int ,int) ;

__attribute__((used)) static void FUNC_3(AVDES *VAR_0, uint8_t *VAR_1, const uint8_t *VAR_2,
                             int VAR_3, uint8_t *VAR_4, int VAR_5, int VAR_6)
{
    uint64_t VAR_7 = VAR_4 ? FUNC_0(VAR_4) : 0;
    while (VAR_3-- > 0) {
        uint64_t VAR_8;
        uint64_t VAR_9 = VAR_2 ? FUNC_0(VAR_2) : 0;
        if (VAR_5) {
            uint64_t VAR_10 = VAR_9;
            if (VAR_0->triple_des) {
                VAR_9 = FUNC_2(VAR_9, VAR_0->round_keys[2], 1);
                VAR_9 = FUNC_2(VAR_9, VAR_0->round_keys[1], 0);
            }
            VAR_8 = FUNC_2(VAR_9, VAR_0->round_keys[0], 1) ^ VAR_7;
            VAR_7 = VAR_4 ? VAR_10 : 0;
        } else {
            VAR_8 = FUNC_2(VAR_9 ^ VAR_7, VAR_0->round_keys[0], 0);
            if (VAR_0->triple_des) {
                VAR_8 = FUNC_2(VAR_8, VAR_0->round_keys[1], 1);
                VAR_8 = FUNC_2(VAR_8, VAR_0->round_keys[2], 0);
            }
            VAR_7 = VAR_4 ? VAR_8 : 0;
        }
        FUNC_1(VAR_1, VAR_8);
        VAR_2 += 8;
        if (!VAR_6)
            VAR_1 += 8;
    }
    if (VAR_4)
        FUNC_1(VAR_4, VAR_7);
}
