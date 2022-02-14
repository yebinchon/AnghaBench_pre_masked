
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_13__ {scalar_t__* position; int window; scalar_t__ stride; int real_to_complex; scalar_t__ nfrag; int state; } ;
struct TYPE_12__ {scalar_t__* position; scalar_t__ nsamples; int * data; int xdat; } ;
typedef TYPE_1__ AudioFragment ;
typedef TYPE_2__ ATempoContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int const*,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_1__* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,int *,int *) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int **,int *) ;

__attribute__((used)) static int FUNC_12(ATempoContext *VAR_2,
                     uint8_t **VAR_3,
                     uint8_t *VAR_4)
{
    AudioFragment *VAR_5 = FUNC_8(VAR_2);
    int64_t VAR_6;
    int64_t VAR_7;
    int64_t VAR_8;
    int64_t VAR_9;

    const uint8_t *VAR_10;
    uint8_t *VAR_11;

    int VAR_12;
    int VAR_13;
    int VAR_14;

    VAR_2->state = VAR_1;

    if (!VAR_2->nfrag) {

        return 0;
    }

    if (VAR_2->position[0] == VAR_5->position[0] + VAR_5->nsamples &&
        VAR_2->position[1] == VAR_5->position[1] + VAR_5->nsamples) {

        return 0;
    }

    if (VAR_5->position[0] + VAR_5->nsamples < VAR_2->position[0]) {

        FUNC_10(VAR_2, ((void*)0), ((void*)0));

        if (VAR_2->nfrag) {

            FUNC_9(VAR_2, VAR_5);


            FUNC_4(VAR_2->real_to_complex, VAR_5->xdat);


            if (FUNC_6(VAR_2)) {

                FUNC_10(VAR_2, ((void*)0), ((void*)0));
            }
        }
    }


    VAR_6 = VAR_5->position[1] + FUNC_2(VAR_2->window / 2,
                                            VAR_5->nsamples);

    while (VAR_2->position[1] < VAR_6) {
        if (FUNC_11(VAR_2, VAR_3, VAR_4) != 0) {
            return FUNC_0(VAR_0);
        }
    }


    if (VAR_5->position[0] + VAR_5->nsamples < VAR_2->position[0]) {
        FUNC_7(VAR_2);
        return FUNC_0(VAR_0);
    }


    VAR_7 = FUNC_1(VAR_2->position[1], VAR_6);
    VAR_8 = VAR_5->position[1] + VAR_5->nsamples;
    VAR_9 = VAR_7 - VAR_5->position[1];
    FUNC_3(VAR_7 <= VAR_8 && VAR_5->position[1] <= VAR_7);

    VAR_10 = VAR_5->data + VAR_9 * VAR_2->stride;
    VAR_11 = (uint8_t *)*VAR_3;

    VAR_12 = (int)(VAR_8 - VAR_7) * VAR_2->stride;
    VAR_13 = VAR_4 - VAR_11;
    VAR_14 = FUNC_2(VAR_12, VAR_13);

    FUNC_5(VAR_11, VAR_10, VAR_14);
    VAR_11 += VAR_14;

    VAR_2->position[1] += (VAR_14 / VAR_2->stride);


    *VAR_3 = (uint8_t *)VAR_11;

    return VAR_2->position[1] == VAR_8 ? 0 : FUNC_0(VAR_0);
}
