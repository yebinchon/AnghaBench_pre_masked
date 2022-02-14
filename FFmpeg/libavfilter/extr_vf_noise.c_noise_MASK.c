
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int int8_t ;
struct TYPE_5__ {int flags; int* rand_shift; int *** prev_shift; int * noise; } ;
struct TYPE_4__ {int (* line_noise ) (int const*,int const*,int *,int,int) ;int (* line_noise_avg ) (int const*,int const*,int,int const**) ;TYPE_2__* param; } ;
typedef TYPE_1__ NoiseContext ;
typedef TYPE_2__ FilterParams ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_1 (int const*,int,int const*,int,int,int) ;
 int FUNC_2 (int const*,int const*,int,int const**) ;
 int FUNC_3 (int const*,int const*,int *,int,int) ;

__attribute__((used)) static void FUNC_4(uint8_t *VAR_2, const uint8_t *VAR_3,
                  int VAR_4, int VAR_5,
                  int VAR_6, int VAR_7, int VAR_8, NoiseContext *VAR_9, int VAR_10)
{
    FilterParams *VAR_11 = &VAR_9->param[VAR_10];
    int8_t *VAR_12 = VAR_11->noise;
    const int VAR_13 = VAR_11->flags;
    int VAR_14;

    if (!VAR_12) {
        if (VAR_2 != VAR_3)
            FUNC_1(VAR_2, VAR_4, VAR_3, VAR_5, VAR_6, VAR_8 - VAR_7);
        return;
    }

    for (VAR_14 = VAR_7; VAR_14 < VAR_8; VAR_14++) {
        const int VAR_15 = VAR_14 & (VAR_0 - 1);
        int VAR_16;
        for (VAR_16=0; VAR_16 < VAR_6; VAR_16+= VAR_0) {
            int VAR_17 = FUNC_0(VAR_6 - VAR_16, VAR_0);
            int VAR_18 = VAR_11->rand_shift[VAR_15];

            if (VAR_13 & VAR_1) {
                VAR_9->line_noise_avg(VAR_2 + VAR_16, VAR_3 + VAR_16, VAR_17, (const int8_t**)VAR_11->prev_shift[VAR_15]);
                VAR_11->prev_shift[VAR_15][VAR_18 & 3] = VAR_12 + VAR_18;
            } else {
                VAR_9->line_noise(VAR_2 + VAR_16, VAR_3 + VAR_16, VAR_12, VAR_17, VAR_18);
            }
        }
        VAR_2 += VAR_4;
        VAR_3 += VAR_5;
    }
}
