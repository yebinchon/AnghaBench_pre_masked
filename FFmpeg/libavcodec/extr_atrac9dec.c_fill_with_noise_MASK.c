
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {double* coeffs; } ;
struct TYPE_5__ {int lfg; } ;
typedef TYPE_1__ ATRAC9Context ;
typedef TYPE_2__ ATRAC9ChannelData ;


 float FUNC_0 (double) ;
 float FUNC_1 (float,float) ;
 int FUNC_2 (int *,double*) ;

__attribute__((used)) static inline void FUNC_3(ATRAC9Context *VAR_0, ATRAC9ChannelData *VAR_1,
                                   int VAR_2, int VAR_3)
{
    float VAR_4 = 0.0f;
    for (int VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += 2) {
        double VAR_6[2];
        FUNC_2(&VAR_0->lfg, VAR_6);
        VAR_1->coeffs[VAR_2 + VAR_5 + 0] = VAR_6[0];
        VAR_1->coeffs[VAR_2 + VAR_5 + 1] = VAR_6[1];
        VAR_4 = FUNC_1(FUNC_1(FUNC_0(VAR_6[0]), FUNC_0(VAR_6[1])), VAR_4);
    }

    for (int VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
        VAR_1->coeffs[VAR_2 + VAR_7] /= VAR_4;
}
