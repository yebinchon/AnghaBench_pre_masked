
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum TwinVQFrameType { ____Placeholder_TwinVQFrameType } TwinVQFrameType ;
struct TYPE_4__ {int n_lsp; } ;
typedef TYPE_1__ TwinVQModeTab ;
struct TYPE_5__ {float** cos_tabs; TYPE_1__* mtab; } ;
typedef TYPE_2__ TwinVQContext ;


 float FUNC_0 (float const*,int ,int ) ;
 int FUNC_1 (int,int,float const*,int) ;
 int FUNC_2 (float*,float,float,int) ;

__attribute__((used)) static inline void FUNC_3(TwinVQContext *VAR_0,
                                         enum TwinVQFrameType VAR_1,
                                         float *VAR_2, const float *VAR_3,
                                         int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7;
    const TwinVQModeTab *VAR_8 = VAR_0->mtab;
    const float *VAR_9 = VAR_0->cos_tabs[VAR_1];


    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7 += VAR_5)
        VAR_2[VAR_7] =
            FUNC_0(VAR_3,
                              FUNC_1(VAR_7, VAR_6, VAR_9, VAR_4),
                              VAR_8->n_lsp);


    for (VAR_7 = VAR_5; VAR_7 <= VAR_4 - 2 * VAR_5; VAR_7 += VAR_5) {
        if (VAR_2[VAR_7 + VAR_5] + VAR_2[VAR_7 - VAR_5] > 1.95 * VAR_2[VAR_7] ||
            VAR_2[VAR_7 + VAR_5] >= VAR_2[VAR_7 - VAR_5]) {
            FUNC_2(VAR_2 + VAR_7 - VAR_5 + 1, VAR_2[VAR_7], VAR_2[VAR_7 - VAR_5], VAR_5 - 1);
        } else {
            VAR_2[VAR_7 - VAR_5 / 2] =
                FUNC_0(VAR_3,
                                  FUNC_1(VAR_7 - VAR_5 / 2, VAR_6, VAR_9, VAR_4),
                                  VAR_8->n_lsp);
            FUNC_2(VAR_2 + VAR_7 - VAR_5 + 1, VAR_2[VAR_7 - VAR_5 / 2],
                        VAR_2[VAR_7 - VAR_5], VAR_5 / 2 - 1);
            FUNC_2(VAR_2 + VAR_7 - VAR_5 / 2 + 1, VAR_2[VAR_7],
                        VAR_2[VAR_7 - VAR_5 / 2], VAR_5 / 2 - 1);
        }
    }

    FUNC_2(VAR_2 + VAR_4 - 2 * VAR_5 + 1, VAR_2[VAR_4 - VAR_5],
                VAR_2[VAR_4 - 2 * VAR_5], VAR_5 - 1);
}
