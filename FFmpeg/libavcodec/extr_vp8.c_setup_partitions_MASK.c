
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int num_coeff_partitions; int* coeff_partition_size; int * coeff_partition; int c; } ;
typedef TYPE_1__ VP8Context ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(VP8Context *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    const uint8_t *VAR_3 = VAR_1;
    int VAR_4;
    int VAR_5;

    VAR_0->num_coeff_partitions = 1 << FUNC_2(&VAR_0->c, 2);

    VAR_1 += 3 * (VAR_0->num_coeff_partitions - 1);
    VAR_2 -= 3 * (VAR_0->num_coeff_partitions - 1);
    if (VAR_2 < 0)
        return -1;

    for (VAR_4 = 0; VAR_4 < VAR_0->num_coeff_partitions - 1; VAR_4++) {
        int VAR_6 = FUNC_0(VAR_3 + 3 * VAR_4);
        if (VAR_2 - VAR_6 < 0)
            return -1;
        VAR_0->coeff_partition_size[VAR_4] = VAR_6;

        VAR_5 = FUNC_1(&VAR_0->coeff_partition[VAR_4], VAR_1, VAR_6);
        if (VAR_5 < 0)
            return VAR_5;
        VAR_1 += VAR_6;
        VAR_2 -= VAR_6;
    }

    VAR_0->coeff_partition_size[VAR_4] = VAR_2;
    FUNC_1(&VAR_0->coeff_partition[VAR_4], VAR_1, VAR_2);

    return 0;
}
