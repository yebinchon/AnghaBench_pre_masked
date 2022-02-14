
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_8__ {scalar_t__ window; scalar_t__* position; scalar_t__ size; scalar_t__ stride; int head; int tail; int ring; int * buffer; } ;
struct TYPE_7__ {scalar_t__* position; int * data; scalar_t__ nsamples; } ;
typedef TYPE_1__ AudioFragment ;
typedef TYPE_2__ ATempoContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 TYPE_1__* FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int const**,int const*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(ATempoContext *VAR_1,
                         const uint8_t **VAR_2,
                         const uint8_t *VAR_3)
{

    AudioFragment *VAR_4 = FUNC_5(VAR_1);
    uint8_t *VAR_5;
    int64_t VAR_6, VAR_7, VAR_8;
    uint32_t VAR_9;
    const uint8_t *VAR_10, *VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

    int64_t VAR_18 = VAR_4->position[0] + VAR_1->window;
    if (VAR_2 && FUNC_6(VAR_1, VAR_2, VAR_3, VAR_18) != 0) {
        return FUNC_0(VAR_0);
    }


    VAR_6 =
        VAR_18 > VAR_1->position[0] ?
        VAR_18 - VAR_1->position[0] : 0;

    VAR_9 =
        VAR_6 < (int64_t)VAR_1->window ?
        (uint32_t)(VAR_1->window - VAR_6) : 0;


    VAR_4->nsamples = VAR_9;
    VAR_5 = VAR_4->data;

    VAR_7 = VAR_1->position[0] - VAR_1->size;
    VAR_8 = 0;

    if (VAR_4->position[0] < VAR_7) {

        VAR_8 = FUNC_1(VAR_7 - VAR_4->position[0], (int64_t)VAR_9);
        FUNC_2(VAR_8 != VAR_9);

        FUNC_4(VAR_5, 0, VAR_8 * VAR_1->stride);
        VAR_5 += VAR_8 * VAR_1->stride;
    }

    if (VAR_8 == VAR_9) {
        return 0;
    }


    VAR_16 = (VAR_1->head < VAR_1->tail ?
          VAR_1->tail - VAR_1->head :
          VAR_1->ring - VAR_1->head);

    VAR_17 = VAR_1->head < VAR_1->tail ? 0 : VAR_1->tail;


    FUNC_2(VAR_9 <= VAR_8 + VAR_16 + VAR_17);

    VAR_10 = VAR_1->buffer + VAR_1->head * VAR_1->stride;
    VAR_11 = VAR_1->buffer;

    VAR_12 = VAR_4->position[0] + VAR_8 - VAR_7;
    VAR_13 = VAR_12 < VAR_16 ? 0 : VAR_12 - VAR_16;

    VAR_14 = VAR_12 < VAR_16 ? FUNC_1(VAR_16 - VAR_12, (int)(VAR_9 - VAR_8)) : 0;
    VAR_15 = VAR_9 - VAR_8 - VAR_14;

    if (VAR_14) {
        FUNC_3(VAR_5, VAR_10 + VAR_12 * VAR_1->stride, VAR_14 * VAR_1->stride);
        VAR_5 += VAR_14 * VAR_1->stride;
    }

    if (VAR_15) {
        FUNC_3(VAR_5, VAR_11 + VAR_13 * VAR_1->stride, VAR_15 * VAR_1->stride);
    }

    return 0;
}
