
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef double uint64_t ;
struct TYPE_4__ {scalar_t__ (* sse_line ) (int const*,int const*,int const) ;} ;
struct TYPE_5__ {int nb_components; int* planewidth; int* planeheight; TYPE_1__ dsp; } ;
typedef TYPE_2__ PSNRContext ;


 scalar_t__ FUNC_0 (int const*,int const*,int const) ;

__attribute__((used)) static inline
void FUNC_1(PSNRContext *VAR_0,
                        const uint8_t *VAR_1[4], const int VAR_2[4],
                        const uint8_t *VAR_3[4], const int VAR_4[4],
                        int VAR_5, int VAR_6, double VAR_7[4])
{
    int VAR_8, VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_0->nb_components; VAR_9++) {
        const int VAR_10 = VAR_0->planewidth[VAR_9];
        const int VAR_11 = VAR_0->planeheight[VAR_9];
        const uint8_t *VAR_12 = VAR_1[VAR_9];
        const uint8_t *VAR_13 = VAR_3[VAR_9];
        const int VAR_14 = VAR_4[VAR_9];
        const int VAR_15 = VAR_2[VAR_9];
        uint64_t VAR_16 = 0;
        for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
            VAR_16 += VAR_0->dsp.sse_line(VAR_12, VAR_13, VAR_10);
            VAR_13 += VAR_14;
            VAR_12 += VAR_15;
        }
        VAR_7[VAR_9] = VAR_16 / (double)(VAR_10 * VAR_11);
    }
}
