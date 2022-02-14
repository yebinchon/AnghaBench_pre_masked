
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* lsp; } ;
struct TYPE_5__ {size_t bitrate; float* lspf; TYPE_1__ frame; } ;
typedef TYPE_2__ EVRCContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 float*** VAR_2 ;
 int** VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static int FUNC_0(EVRCContext *VAR_5)
{
    const float * const *VAR_6 = VAR_2[VAR_5->bitrate];
    int VAR_7, VAR_8, VAR_9 = 0;

    for (VAR_7 = 0; VAR_7 < VAR_4[VAR_5->bitrate]; VAR_7++) {
        int VAR_10 = VAR_3[VAR_5->bitrate][VAR_7];
        const float *VAR_11 = VAR_6[VAR_7];

        for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
            VAR_5->lspf[VAR_9++] = VAR_11[VAR_5->frame.lsp[VAR_7] * VAR_10 + VAR_8];
    }


    for (VAR_7 = 1; VAR_7 < VAR_0; VAR_7++)
        if (VAR_5->lspf[VAR_7] <= VAR_5->lspf[VAR_7 - 1])
            return -1;


    for (VAR_7 = 0, VAR_9 = 0; VAR_7 < VAR_4[VAR_5->bitrate] - 1; VAR_7++) {
        VAR_9 += VAR_3[VAR_5->bitrate][VAR_7];
        if (VAR_5->lspf[VAR_9] - VAR_5->lspf[VAR_9 - 1] <= VAR_1)
            return -1;
    }

    return 0;
}
