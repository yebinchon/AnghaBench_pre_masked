
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {unsigned int range; unsigned int scale; unsigned int low; unsigned int* prob; unsigned int hash_shift; int* range_hash; } ;
typedef TYPE_1__ lag_rac ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline uint8_t FUNC_1(lag_rac *VAR_0)
{
    unsigned VAR_1, VAR_2;
    int VAR_3;

    FUNC_0(VAR_0);

    VAR_1 = VAR_0->range >> VAR_0->scale;

    if (VAR_0->low < VAR_1 * VAR_0->prob[255]) {

        if (VAR_0->low < VAR_1 * VAR_0->prob[1]) {
            VAR_3 = 0;
        } else {
            VAR_2 = VAR_0->low / (VAR_1<<(VAR_0->hash_shift));

            VAR_3 = VAR_0->range_hash[VAR_2];
            while (VAR_0->low >= VAR_1 * VAR_0->prob[VAR_3 + 1])
                VAR_3++;
        }

        VAR_0->range = VAR_1 * (VAR_0->prob[VAR_3 + 1] - VAR_0->prob[VAR_3]);
    } else {
        VAR_3 = 255;
        VAR_0->range -= VAR_1 * VAR_0->prob[255];
    }

    if (!VAR_0->range)
        VAR_0->range = 0x80;

    VAR_0->low -= VAR_1 * VAR_0->prob[VAR_3];

    return VAR_3;
}
