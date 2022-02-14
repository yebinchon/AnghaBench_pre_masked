
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int partitions; int* partition_to_class; int nclasses; int multiplier; int rangebits; int values; TYPE_2__* list; TYPE_1__* classes; } ;
typedef TYPE_3__ vorbis_enc_floor ;
struct TYPE_6__ {int x; } ;
struct TYPE_5__ {int dim; int subclass; int masterbook; int* books; } ;
typedef int PutBitContext ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(PutBitContext *VAR_0, vorbis_enc_floor *VAR_1)
{
    int VAR_2;

    FUNC_0(VAR_0, 16, 1);

    FUNC_0(VAR_0, 5, VAR_1->partitions);

    for (VAR_2 = 0; VAR_2 < VAR_1->partitions; VAR_2++)
        FUNC_0(VAR_0, 4, VAR_1->partition_to_class[VAR_2]);

    for (VAR_2 = 0; VAR_2 < VAR_1->nclasses; VAR_2++) {
        int VAR_3, VAR_4;

        FUNC_0(VAR_0, 3, VAR_1->classes[VAR_2].dim - 1);
        FUNC_0(VAR_0, 2, VAR_1->classes[VAR_2].subclass);

        if (VAR_1->classes[VAR_2].subclass)
            FUNC_0(VAR_0, 8, VAR_1->classes[VAR_2].masterbook);

        VAR_4 = (1 << VAR_1->classes[VAR_2].subclass);

        for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
            FUNC_0(VAR_0, 8, VAR_1->classes[VAR_2].books[VAR_3] + 1);
    }

    FUNC_0(VAR_0, 2, VAR_1->multiplier - 1);
    FUNC_0(VAR_0, 4, VAR_1->rangebits);

    for (VAR_2 = 2; VAR_2 < VAR_1->values; VAR_2++)
        FUNC_0(VAR_0, VAR_1->rangebits, VAR_1->list[VAR_2].x);
}
