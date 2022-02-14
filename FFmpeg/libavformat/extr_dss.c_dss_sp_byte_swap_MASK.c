
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int swap; int dss_sp_swap_byte; } ;
typedef TYPE_1__ DSSDemuxContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_1(DSSDemuxContext *VAR_1,
                             uint8_t *VAR_2, const uint8_t *VAR_3)
{
    int VAR_4;

    if (VAR_1->swap) {
        for (VAR_4 = 3; VAR_4 < VAR_0; VAR_4 += 2)
            VAR_2[VAR_4] = VAR_3[VAR_4];

        for (VAR_4 = 0; VAR_4 < VAR_0 - 2; VAR_4 += 2)
            VAR_2[VAR_4] = VAR_3[VAR_4 + 4];

        VAR_2[1] = VAR_1->dss_sp_swap_byte;
    } else {
        FUNC_0(VAR_2, VAR_3, VAR_0);
        VAR_1->dss_sp_swap_byte = VAR_3[VAR_0 - 2];
    }


    VAR_2[VAR_0 - 2] = 0;
    VAR_1->swap ^= 1;
}
