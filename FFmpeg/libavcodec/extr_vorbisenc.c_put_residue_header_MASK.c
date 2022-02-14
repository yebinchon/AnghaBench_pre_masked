
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int begin; int end; int partition_size; int classifications; int classbook; int** books; } ;
typedef TYPE_1__ vorbis_enc_residue ;
typedef int PutBitContext ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(PutBitContext *VAR_0, vorbis_enc_residue *VAR_1)
{
    int VAR_2;

    FUNC_0(VAR_0, 16, VAR_1->type);

    FUNC_0(VAR_0, 24, VAR_1->begin);
    FUNC_0(VAR_0, 24, VAR_1->end);
    FUNC_0(VAR_0, 24, VAR_1->partition_size - 1);
    FUNC_0(VAR_0, 6, VAR_1->classifications - 1);
    FUNC_0(VAR_0, 8, VAR_1->classbook);

    for (VAR_2 = 0; VAR_2 < VAR_1->classifications; VAR_2++) {
        int VAR_3, VAR_4 = 0;
        for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
            VAR_4 |= (VAR_1->books[VAR_2][VAR_3] != -1) << VAR_3;

        FUNC_0(VAR_0, 3, VAR_4 & 7);
        FUNC_0(VAR_0, 1, VAR_4 > 7);

        if (VAR_4 > 7)
            FUNC_0(VAR_0, 5, VAR_4 >> 3);
    }

    for (VAR_2 = 0; VAR_2 < VAR_1->classifications; VAR_2++) {
        int VAR_5;
        for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
            if (VAR_1->books[VAR_2][VAR_5] != -1)
                FUNC_0(VAR_0, 8, VAR_1->books[VAR_2][VAR_5]);
    }
}
