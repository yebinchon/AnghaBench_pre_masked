
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* skipFlagBits; int* skipFlagCount; int* skipFlags; int * skipFlagRaw; int * bandWidthT; int * bandFlagsBuf; } ;
struct TYPE_5__ {int gb; } ;
typedef TYPE_1__ IMCContext ;
typedef TYPE_2__ IMCChannel ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static void FUNC_2(IMCContext *VAR_2, IMCChannel *VAR_3)
{
    int VAR_4, VAR_5;

    FUNC_1(VAR_3->skipFlagBits, 0, sizeof(VAR_3->skipFlagBits));
    FUNC_1(VAR_3->skipFlagCount, 0, sizeof(VAR_3->skipFlagCount));
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if (!VAR_3->bandFlagsBuf[VAR_4] || !VAR_3->bandWidthT[VAR_4])
            continue;

        if (!VAR_3->skipFlagRaw[VAR_4]) {
            VAR_3->skipFlagBits[VAR_4] = VAR_1[VAR_4 + 1] - VAR_1[VAR_4];

            for (VAR_5 = VAR_1[VAR_4]; VAR_5 < VAR_1[VAR_4 + 1]; VAR_5++) {
                VAR_3->skipFlags[VAR_5] = FUNC_0(&VAR_2->gb);
                if (VAR_3->skipFlags[VAR_5])
                    VAR_3->skipFlagCount[VAR_4]++;
            }
        } else {
            for (VAR_5 = VAR_1[VAR_4]; VAR_5 < VAR_1[VAR_4 + 1] - 1; VAR_5 += 2) {
                if (!FUNC_0(&VAR_2->gb)) {
                    VAR_3->skipFlagBits[VAR_4]++;
                    VAR_3->skipFlags[VAR_5] = 1;
                    VAR_3->skipFlags[VAR_5 + 1] = 1;
                    VAR_3->skipFlagCount[VAR_4] += 2;
                } else {
                    if (FUNC_0(&VAR_2->gb)) {
                        VAR_3->skipFlagBits[VAR_4] += 2;
                        VAR_3->skipFlags[VAR_5] = 0;
                        VAR_3->skipFlags[VAR_5 + 1] = 1;
                        VAR_3->skipFlagCount[VAR_4]++;
                    } else {
                        VAR_3->skipFlagBits[VAR_4] += 3;
                        VAR_3->skipFlags[VAR_5 + 1] = 0;
                        if (!FUNC_0(&VAR_2->gb)) {
                            VAR_3->skipFlags[VAR_5] = 1;
                            VAR_3->skipFlagCount[VAR_4]++;
                        } else {
                            VAR_3->skipFlags[VAR_5] = 0;
                        }
                    }
                }
            }

            if (VAR_5 < VAR_1[VAR_4 + 1]) {
                VAR_3->skipFlagBits[VAR_4]++;
                if ((VAR_3->skipFlags[VAR_5] = FUNC_0(&VAR_2->gb)))
                    VAR_3->skipFlagCount[VAR_4]++;
            }
        }
    }
}
