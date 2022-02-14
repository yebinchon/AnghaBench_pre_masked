
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int** data; int* linesize; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static inline void FUNC_4(const AVFrame *VAR_0, const AVFrame *VAR_1,
                                   int VAR_2, int VAR_3,
                                   int VAR_4, int VAR_5,
                                   int VAR_6, int VAR_7,
                                   int VAR_8, int VAR_9)
{
    uint8_t VAR_10;
    uint8_t *VAR_11, *VAR_12, *VAR_13, *VAR_14;
    int VAR_15, VAR_16, VAR_17, VAR_18;
    int VAR_19, VAR_20;

    VAR_16 = FUNC_2(-VAR_7 + VAR_5, VAR_3);
    VAR_19 = (VAR_16 * VAR_8) / VAR_9;
    VAR_20 = ((VAR_16 * (VAR_8+1)) / VAR_9);

    VAR_15 = FUNC_1(-VAR_7, 0);
    VAR_12 = VAR_0->data[3] + (VAR_15 + VAR_19) * VAR_0->linesize[3];
    VAR_14 = VAR_1->data[3] + (VAR_7 + VAR_15 + VAR_19) * VAR_1->linesize[3];

    for (VAR_15 = VAR_15 + VAR_19; VAR_15 < VAR_20; VAR_15++) {
        VAR_17 = FUNC_1(-VAR_6, 0);
        VAR_11 = VAR_12 + VAR_17;
        VAR_13 = VAR_14 + VAR_6+VAR_17;

        for (VAR_18 = FUNC_2(-VAR_6 + VAR_4, VAR_2); VAR_17 < VAR_18; VAR_17++) {
            VAR_10 = *VAR_11;
            if (VAR_10 != 0 && VAR_10 != 255) {
                uint8_t VAR_21 = *VAR_13;
                VAR_10 = FUNC_3(VAR_10, VAR_21);
            }
            switch (VAR_10) {
            case 0:
                break;
            case 255:
                *VAR_13 = *VAR_11;
                break;
            default:

                *VAR_13 += FUNC_0((255 - *VAR_13) * *VAR_11);
            }
            VAR_13 += 1;
            VAR_11 += 1;
        }
        VAR_14 += VAR_1->linesize[3];
        VAR_12 += VAR_0->linesize[3];
    }
}
