
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {scalar_t__ pixel_type; } ;
struct TYPE_7__ {int nb_channels; int xdelta; TYPE_3__* channels; } ;
struct TYPE_6__ {int xsize; int ysize; int * uncompressed_data; int * tmp; } ;
typedef TYPE_1__ EXRThreadData ;
typedef TYPE_2__ EXRContext ;
typedef TYPE_3__ EXRChannel ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int FUNC_0 (int **,int) ;
 int FUNC_1 (int **,int) ;
 scalar_t__ FUNC_2 (int *,unsigned long*,int const*,int) ;

__attribute__((used)) static int FUNC_3(EXRContext *VAR_2, const uint8_t *VAR_3,
                            int VAR_4, int VAR_5,
                            EXRThreadData *VAR_6)
{
    unsigned long VAR_7, VAR_8 = 0;
    const uint8_t *VAR_9 = VAR_6->tmp;
    uint8_t *VAR_10;
    int VAR_11, VAR_12, VAR_13;

    for (VAR_12 = 0; VAR_12 < VAR_2->nb_channels; VAR_12++) {
        if (VAR_2->channels[VAR_12].pixel_type == 130) {
            VAR_8 += (VAR_6->xsize * VAR_6->ysize * 3);
        } else if (VAR_2->channels[VAR_12].pixel_type == 129) {
            VAR_8 += (VAR_6->xsize * VAR_6->ysize * 2);
        } else {
            VAR_8 += (VAR_6->xsize * VAR_6->ysize * 4);
        }
    }

    VAR_7 = VAR_8;

    if (FUNC_2(VAR_6->tmp, &VAR_7, VAR_3, VAR_4) != VAR_1) {
        return VAR_0;
    } else if (VAR_7 != VAR_8) {
        return VAR_0;
    }

    VAR_10 = VAR_6->uncompressed_data;
    for (VAR_12 = 0; VAR_12 < VAR_6->ysize; VAR_12++)
        for (VAR_11 = 0; VAR_11 < VAR_2->nb_channels; VAR_11++) {
            EXRChannel *VAR_14 = &VAR_2->channels[VAR_11];
            const uint8_t *VAR_15[4];
            uint32_t VAR_16 = 0;

            switch (VAR_14->pixel_type) {
            case 130:
                VAR_15[0] = VAR_9;
                VAR_15[1] = VAR_15[0] + VAR_6->xsize;
                VAR_15[2] = VAR_15[1] + VAR_6->xsize;
                VAR_9 = VAR_15[2] + VAR_6->xsize;

                for (VAR_13 = 0; VAR_13 < VAR_6->xsize; ++VAR_13) {
                    uint32_t VAR_17 = ((unsigned)*(VAR_15[0]++) << 24) |
                                    (*(VAR_15[1]++) << 16) |
                                    (*(VAR_15[2]++) << 8);
                    VAR_16 += VAR_17;
                    FUNC_1(&VAR_10, VAR_16);
                }
                break;
            case 129:
                VAR_15[0] = VAR_9;
                VAR_15[1] = VAR_15[0] + VAR_6->xsize;
                VAR_9 = VAR_15[1] + VAR_6->xsize;
                for (VAR_13 = 0; VAR_13 < VAR_6->xsize; VAR_13++) {
                    uint32_t VAR_18 = (*(VAR_15[0]++) << 8) | *(VAR_15[1]++);

                    VAR_16 += VAR_18;
                    FUNC_0(&VAR_10, VAR_16);
                }
                break;
            case 128:
                VAR_15[0] = VAR_9;
                VAR_15[1] = VAR_15[0] + VAR_2->xdelta;
                VAR_15[2] = VAR_15[1] + VAR_2->xdelta;
                VAR_15[3] = VAR_15[2] + VAR_2->xdelta;
                VAR_9 = VAR_15[3] + VAR_2->xdelta;

                for (VAR_13 = 0; VAR_13 < VAR_2->xdelta; ++VAR_13) {
                    uint32_t VAR_19 = ((uint32_t)*(VAR_15[0]++) << 24) |
                    (*(VAR_15[1]++) << 16) |
                    (*(VAR_15[2]++) << 8 ) |
                    (*(VAR_15[3]++));
                    VAR_16 += VAR_19;
                    FUNC_1(&VAR_10, VAR_16);
                }
                break;
            default:
                return VAR_0;
            }
        }

    return 0;
}
