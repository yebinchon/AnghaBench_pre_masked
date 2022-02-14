
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__* position; int const ring; double tempo; int stride; int tail; int size; int head; int * buffer; } ;
typedef TYPE_1__ ATempoContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int const,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_4(ATempoContext *VAR_1,
                         const uint8_t **VAR_2,
                         const uint8_t *VAR_3,
                         int64_t VAR_4)
{

    const uint8_t *VAR_5 = *VAR_2;
    const int VAR_6 = VAR_4 - VAR_1->position[0];

    if (VAR_4 <= VAR_1->position[0]) {
        return 0;
    }


    FUNC_2(VAR_6 <= VAR_1->ring || VAR_1->tempo > 2.0);

    while (VAR_1->position[0] < VAR_4 && VAR_5 < VAR_3) {
        int VAR_7 = (VAR_3 - VAR_5) / VAR_1->stride;


        int VAR_8 = FUNC_1(VAR_6, VAR_7);
        int VAR_9;
        int VAR_10;

        VAR_8 = FUNC_1(VAR_8, VAR_1->ring);
        VAR_9 = FUNC_1(VAR_8, VAR_1->ring - VAR_1->tail);
        VAR_10 = FUNC_1(VAR_8 - VAR_9, VAR_1->ring);

        if (VAR_9) {
            uint8_t *VAR_11 = VAR_1->buffer + VAR_1->tail * VAR_1->stride;
            FUNC_3(VAR_11, VAR_5, VAR_9 * VAR_1->stride);

            VAR_5 += VAR_9 * VAR_1->stride;
            VAR_1->position[0] += VAR_9;

            VAR_1->size = FUNC_1(VAR_1->size + VAR_9, VAR_1->ring);
            VAR_1->tail = (VAR_1->tail + VAR_9) % VAR_1->ring;
            VAR_1->head =
                VAR_1->size < VAR_1->ring ?
                VAR_1->tail - VAR_1->size :
                VAR_1->tail;
        }

        if (VAR_10) {
            uint8_t *VAR_12 = VAR_1->buffer;
            FUNC_3(VAR_12, VAR_5, VAR_10 * VAR_1->stride);

            VAR_5 += VAR_10 * VAR_1->stride;
            VAR_1->position[0] += VAR_10;

            VAR_1->size = FUNC_1(VAR_1->size + VAR_10, VAR_1->ring);
            VAR_1->tail = (VAR_1->tail + VAR_10) % VAR_1->ring;
            VAR_1->head =
                VAR_1->size < VAR_1->ring ?
                VAR_1->tail - VAR_1->size :
                VAR_1->tail;
        }
    }


    *VAR_2 = VAR_5;


    FUNC_2(VAR_1->position[0] <= VAR_4);

    return VAR_1->position[0] == VAR_4 ? 0 : FUNC_0(VAR_0);
}
