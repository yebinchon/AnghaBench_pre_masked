
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int* lastA; int* buf; int** coeffsA; int* historybuffer; int* filterA; } ;
struct TYPE_6__ {int** decoded; TYPE_1__ predictor; } ;
typedef TYPE_1__ APEPredictor ;
typedef TYPE_2__ APEContext ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_2__*,int*,int *,int) ;
 int FUNC_2 (int*,int*,int) ;

__attribute__((used)) static void FUNC_3(APEContext *VAR_4, int VAR_5)
{
    APEPredictor *VAR_6 = &VAR_4->predictor;
    int32_t *VAR_7 = VAR_4->decoded[0];
    int32_t VAR_8, VAR_9, VAR_10, VAR_11;

    FUNC_1(VAR_4, VAR_4->decoded[0], ((void*)0), VAR_5);

    VAR_9 = VAR_6->lastA[0];

    while (VAR_5--) {
        VAR_10 = *VAR_7;

        VAR_6->buf[VAR_3] = VAR_9;
        VAR_6->buf[VAR_3 - 1] = VAR_6->buf[VAR_3] - VAR_6->buf[VAR_3 - 1];

        VAR_8 = VAR_6->buf[VAR_3 ] * VAR_6->coeffsA[0][0] +
                      VAR_6->buf[VAR_3 - 1] * VAR_6->coeffsA[0][1] +
                      VAR_6->buf[VAR_3 - 2] * VAR_6->coeffsA[0][2] +
                      VAR_6->buf[VAR_3 - 3] * VAR_6->coeffsA[0][3];

        VAR_9 = VAR_10 + (VAR_8 >> 10);

        VAR_6->buf[VAR_2] = FUNC_0(VAR_6->buf[VAR_3 ]);
        VAR_6->buf[VAR_2 - 1] = FUNC_0(VAR_6->buf[VAR_3 - 1]);

        VAR_11 = FUNC_0(VAR_10);
        VAR_6->coeffsA[0][0] += VAR_6->buf[VAR_2 ] * VAR_11;
        VAR_6->coeffsA[0][1] += VAR_6->buf[VAR_2 - 1] * VAR_11;
        VAR_6->coeffsA[0][2] += VAR_6->buf[VAR_2 - 2] * VAR_11;
        VAR_6->coeffsA[0][3] += VAR_6->buf[VAR_2 - 3] * VAR_11;

        VAR_6->buf++;


        if (VAR_6->buf == VAR_6->historybuffer + VAR_0) {
            FUNC_2(VAR_6->historybuffer, VAR_6->buf,
                    VAR_1 * sizeof(*VAR_6->historybuffer));
            VAR_6->buf = VAR_6->historybuffer;
        }

        VAR_6->filterA[0] = VAR_9 + ((int)(VAR_6->filterA[0] * 31U) >> 5);
        *(VAR_7++) = VAR_6->filterA[0];
    }

    VAR_6->lastA[0] = VAR_9;
}
