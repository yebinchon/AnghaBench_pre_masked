
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_9__ {int table; } ;
struct TYPE_8__ {int table; } ;
struct TYPE_6__ {size_t* permutated; } ;
struct TYPE_7__ {int* intra_matrix; int gb; TYPE_1__ scantable; } ;
typedef TYPE_2__ ASV1Context ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 TYPE_3__ VAR_2 ;
 void* FUNC_2 (int *,int ,int ,int) ;

__attribute__((used)) static inline int FUNC_3(ASV1Context *VAR_3, int16_t VAR_4[64])
{
    int VAR_5, VAR_6, VAR_7;

    VAR_6 = FUNC_0(&VAR_3->gb, 4);

    VAR_4[0] = 8 * FUNC_0(&VAR_3->gb, 8);

    VAR_7 = FUNC_2(&VAR_3->gb, VAR_2.table, VAR_0, 1);
    if (VAR_7) {
        if (VAR_7 & 4)
            VAR_4[VAR_3->scantable.permutated[1]] = (FUNC_1(&VAR_3->gb) * VAR_3->intra_matrix[1]) >> 4;
        if (VAR_7 & 2)
            VAR_4[VAR_3->scantable.permutated[2]] = (FUNC_1(&VAR_3->gb) * VAR_3->intra_matrix[2]) >> 4;
        if (VAR_7 & 1)
            VAR_4[VAR_3->scantable.permutated[3]] = (FUNC_1(&VAR_3->gb) * VAR_3->intra_matrix[3]) >> 4;
    }

    for (VAR_5 = 1; VAR_5 < VAR_6 + 1; VAR_5++) {
        const int VAR_8 = FUNC_2(&VAR_3->gb, VAR_1.table, VAR_0, 1);

        if (VAR_8) {
            if (VAR_8 & 8)
                VAR_4[VAR_3->scantable.permutated[4 * VAR_5 + 0]] = (FUNC_1(&VAR_3->gb) * VAR_3->intra_matrix[4 * VAR_5 + 0]) >> 4;
            if (VAR_8 & 4)
                VAR_4[VAR_3->scantable.permutated[4 * VAR_5 + 1]] = (FUNC_1(&VAR_3->gb) * VAR_3->intra_matrix[4 * VAR_5 + 1]) >> 4;
            if (VAR_8 & 2)
                VAR_4[VAR_3->scantable.permutated[4 * VAR_5 + 2]] = (FUNC_1(&VAR_3->gb) * VAR_3->intra_matrix[4 * VAR_5 + 2]) >> 4;
            if (VAR_8 & 1)
                VAR_4[VAR_3->scantable.permutated[4 * VAR_5 + 3]] = (FUNC_1(&VAR_3->gb) * VAR_3->intra_matrix[4 * VAR_5 + 3]) >> 4;
        }
    }

    return 0;
}
