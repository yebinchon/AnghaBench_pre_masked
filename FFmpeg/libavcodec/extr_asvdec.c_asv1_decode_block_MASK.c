
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_7__ {int table; } ;
struct TYPE_5__ {size_t* permutated; } ;
struct TYPE_6__ {int* intra_matrix; int gb; TYPE_1__ scantable; int avctx; } ;
typedef TYPE_2__ ASV1Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ,int) ;

__attribute__((used)) static inline int FUNC_4(ASV1Context *VAR_4, int16_t VAR_5[64])
{
    int VAR_6;

    VAR_5[0] = 8 * FUNC_2(&VAR_4->gb, 8);

    for (VAR_6 = 0; VAR_6 < 11; VAR_6++) {
        const int VAR_7 = FUNC_3(&VAR_4->gb, VAR_3.table, VAR_2, 1);

        if (VAR_7) {
            if (VAR_7 == 16)
                break;
            if (VAR_7 < 0 || VAR_6 >= 10) {
                FUNC_1(VAR_4->avctx, VAR_1, "coded coeff pattern damaged\n");
                return VAR_0;
            }

            if (VAR_7 & 8)
                VAR_5[VAR_4->scantable.permutated[4 * VAR_6 + 0]] = (FUNC_0(&VAR_4->gb) * VAR_4->intra_matrix[4 * VAR_6 + 0]) >> 4;
            if (VAR_7 & 4)
                VAR_5[VAR_4->scantable.permutated[4 * VAR_6 + 1]] = (FUNC_0(&VAR_4->gb) * VAR_4->intra_matrix[4 * VAR_6 + 1]) >> 4;
            if (VAR_7 & 2)
                VAR_5[VAR_4->scantable.permutated[4 * VAR_6 + 2]] = (FUNC_0(&VAR_4->gb) * VAR_4->intra_matrix[4 * VAR_6 + 2]) >> 4;
            if (VAR_7 & 1)
                VAR_5[VAR_4->scantable.permutated[4 * VAR_6 + 3]] = (FUNC_0(&VAR_4->gb) * VAR_4->intra_matrix[4 * VAR_6 + 3]) >> 4;
        }
    }

    return 0;
}
