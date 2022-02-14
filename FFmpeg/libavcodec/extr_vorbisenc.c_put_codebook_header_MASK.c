
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ndimensions; int nentries; int* lens; int lookup; int* quantlist; int seq_p; int delta; int min; } ;
typedef TYPE_1__ vorbis_enc_codebook ;
typedef int PutBitContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(PutBitContext *VAR_0, vorbis_enc_codebook *VAR_1)
{
    int VAR_2;
    int VAR_3 = 0;

    FUNC_3(VAR_0, 24, 0x564342);
    FUNC_3(VAR_0, 16, VAR_1->ndimensions);
    FUNC_3(VAR_0, 24, VAR_1->nentries);

    for (VAR_2 = 1; VAR_2 < VAR_1->nentries; VAR_2++)
        if (VAR_1->lens[VAR_2] < VAR_1->lens[VAR_2-1])
            break;
    if (VAR_2 == VAR_1->nentries)
        VAR_3 = 1;

    FUNC_3(VAR_0, 1, VAR_3);
    if (VAR_3) {
        int VAR_4 = VAR_1->lens[0];
        FUNC_3(VAR_0, 5, VAR_4 - 1);
        VAR_2 = 0;
        while (VAR_2 < VAR_1->nentries) {
            int VAR_5;
            for (VAR_5 = 0; VAR_5+VAR_2 < VAR_1->nentries; VAR_5++)
                if (VAR_1->lens[VAR_5+VAR_2] != VAR_4)
                    break;
            FUNC_3(VAR_0, FUNC_2(VAR_1->nentries - VAR_2), VAR_5);
            VAR_2 += VAR_5;
            VAR_4++;
        }
    } else {
        int VAR_6 = 0;
        for (VAR_2 = 0; VAR_2 < VAR_1->nentries; VAR_2++)
            if (!VAR_1->lens[VAR_2])
                break;
        if (VAR_2 != VAR_1->nentries)
            VAR_6 = 1;
        FUNC_3(VAR_0, 1, VAR_6);

        for (VAR_2 = 0; VAR_2 < VAR_1->nentries; VAR_2++) {
            if (VAR_6)
                FUNC_3(VAR_0, 1, !!VAR_1->lens[VAR_2]);
            if (VAR_1->lens[VAR_2])
                FUNC_3(VAR_0, 5, VAR_1->lens[VAR_2] - 1);
        }
    }

    FUNC_3(VAR_0, 4, VAR_1->lookup);
    if (VAR_1->lookup) {
        int VAR_7 = FUNC_1(VAR_1->lookup, VAR_1->ndimensions, VAR_1->nentries);
        int VAR_8 = FUNC_2(VAR_1->quantlist[0]);

        for (VAR_2 = 1; VAR_2 < VAR_7; VAR_2++)
            VAR_8 = FUNC_0(VAR_8, FUNC_2(VAR_1->quantlist[VAR_2]));

        FUNC_4(VAR_0, VAR_1->min);
        FUNC_4(VAR_0, VAR_1->delta);

        FUNC_3(VAR_0, 4, VAR_8 - 1);
        FUNC_3(VAR_0, 1, VAR_1->seq_p);

        for (VAR_2 = 0; VAR_2 < VAR_7; VAR_2++)
            FUNC_3(VAR_0, VAR_8, VAR_1->quantlist[VAR_2]);
    }
}
