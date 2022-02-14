
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nbits; } ;
struct TYPE_5__ {int* pfa_prereindex; int* pfa_postreindex; TYPE_1__ ptwo_fft; } ;
typedef TYPE_2__ MDCT15Context ;


 void* FUNC_0 (int,int) ;

__attribute__((used)) static inline int FUNC_1(MDCT15Context *VAR_0)
{
    int VAR_1, VAR_2;
    const int VAR_3 = VAR_0->ptwo_fft.nbits;
    const int VAR_4 = 1 << VAR_3;
    const int VAR_5 = VAR_4 << ((4 - VAR_3) & 3);
    const int VAR_6 = 0xeeeeeeef & ((1U << VAR_3) - 1);

    VAR_0->pfa_prereindex = FUNC_0(15 * VAR_4, sizeof(*VAR_0->pfa_prereindex));
    if (!VAR_0->pfa_prereindex)
        return 1;

    VAR_0->pfa_postreindex = FUNC_0(15 * VAR_4, sizeof(*VAR_0->pfa_postreindex));
    if (!VAR_0->pfa_postreindex)
        return 1;


    for (VAR_1 = 0; VAR_1 < VAR_4; VAR_1++) {
        for (VAR_2 = 0; VAR_2 < 15; VAR_2++) {
            const int VAR_7 = ((VAR_4 * VAR_2)/15 + VAR_1) >> VAR_3;
            const int VAR_8 = (((VAR_2*VAR_5)/15) + (VAR_1*VAR_6)) >> VAR_3;
            const int VAR_9 = 15*VAR_1 + (VAR_2 - VAR_7*15)*(1 << VAR_3);
            const int VAR_10 = VAR_1*VAR_6*15 + VAR_2*VAR_5 - 15*VAR_8*VAR_4;
            VAR_0->pfa_prereindex[VAR_1*15 + VAR_2] = VAR_9 << 1;
            VAR_0->pfa_postreindex[VAR_10] = VAR_4*VAR_2 + VAR_1;
        }
    }

    return 0;
}
