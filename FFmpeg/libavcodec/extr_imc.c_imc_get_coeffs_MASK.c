
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* CWlengthT; int* codewords; int * skipFlags; scalar_t__* bandFlagsBuf; scalar_t__* bandWidthT; int * sumLenArr; } ;
struct TYPE_5__ {int gb; } ;
typedef TYPE_1__ IMCContext ;
typedef TYPE_2__ IMCChannel ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,int,int,int) ;
 int* VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(AVCodecContext *VAR_3,
                           IMCContext *VAR_4, IMCChannel *VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9;

    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
        if (!VAR_5->sumLenArr[VAR_6])
            continue;
        if (VAR_5->bandFlagsBuf[VAR_6] || VAR_5->bandWidthT[VAR_6]) {
            for (VAR_7 = VAR_2[VAR_6]; VAR_7 < VAR_2[VAR_6 + 1]; VAR_7++) {
                VAR_8 = VAR_5->CWlengthT[VAR_7];
                VAR_9 = 0;

                if (VAR_8 && (!VAR_5->bandFlagsBuf[VAR_6] || !VAR_5->skipFlags[VAR_7])) {
                    if (FUNC_2(&VAR_4->gb) + VAR_8 > 512) {
                        FUNC_0(VAR_3, VAR_0,
                            "Potential problem on band %i, coefficient %i"
                            ": cw_len=%i\n", VAR_6, VAR_7, VAR_8);
                    } else
                        VAR_9 = FUNC_1(&VAR_4->gb, VAR_8);
                }

                VAR_5->codewords[VAR_7] = VAR_9;
            }
        }
    }
}
