
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int confidence; int framesig; } ;
struct TYPE_12__ {double meandist; int matchframes; int whole; struct TYPE_12__* next; TYPE_3__* second; TYPE_3__* first; int offset; int score; int framerateratio; } ;
struct TYPE_11__ {int thl1; int thdi; double thit; } ;
typedef TYPE_1__ SignatureContext ;
typedef TYPE_2__ MatchingInfo ;
typedef TYPE_3__ FineSignature ;
typedef int AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double FUNC_0 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ,TYPE_3__**,TYPE_3__**,int,int*,int) ;

__attribute__((used)) static MatchingInfo FUNC_3(AVFilterContext *VAR_8, SignatureContext *VAR_9, MatchingInfo *VAR_10, MatchingInfo VAR_11, int VAR_12)
{
    int VAR_13, VAR_14 = 0, VAR_15 = 1, VAR_16 = VAR_0;
    int VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;
    double VAR_21, VAR_22 = VAR_11.meandist;
    int VAR_23 = 0;
    FineSignature *VAR_24, *VAR_25, *VAR_26, *VAR_27;
    int VAR_28 = VAR_7;

    for (; VAR_10 != ((void*)0); VAR_10 = VAR_10->next) {
        VAR_24 = VAR_10->first;
        VAR_25 = VAR_10->second;
        while (1) {
            VAR_13 = FUNC_1(VAR_8, VAR_9, VAR_24->framesig, VAR_25->framesig);

            if (VAR_13 > VAR_9->thl1) {
                if (VAR_24->confidence >= 1 || VAR_25->confidence >= 1) {

                    VAR_23++;
                }

                if (VAR_23 > 2) {
                    VAR_24 = VAR_26;
                    VAR_25 = VAR_27;
                    if (VAR_16 == VAR_0) {

                        VAR_24 = VAR_10->first;
                        VAR_25 = VAR_10->second;
                        VAR_16 = VAR_2;
                    } else {
                        break;
                    }
                }
            } else {

                VAR_14 += VAR_13;
                VAR_18++;
                VAR_23=0;

                VAR_26 = VAR_24;
                VAR_27 = VAR_25;

                if (VAR_24->confidence < 1) VAR_19++;
                if (VAR_25->confidence < 1) VAR_20++;
            }

            VAR_17++;

            VAR_16 = FUNC_2(VAR_10->framerateratio, &VAR_24, &VAR_25, VAR_17, &VAR_15, VAR_16);
            if (VAR_16 == VAR_1) {
                VAR_28 = VAR_6;
                VAR_24 = VAR_10->first;
                VAR_25 = VAR_10->second;
                VAR_16 = FUNC_2(VAR_10->framerateratio, &VAR_24, &VAR_25, VAR_17, &VAR_15, VAR_2);
            }

            if (VAR_16 == VAR_3) {
                VAR_28 |= VAR_5;
                break;
            }

            if (VAR_9->thdi != 0 && VAR_15 >= VAR_9->thdi) {
                break;
            }
        }

        if (VAR_15 < VAR_9->thdi)
            continue;
        if ((double) VAR_18 / (double) VAR_17 < VAR_9->thit)
            continue;
        if ((double) VAR_18*0.5 < FUNC_0(VAR_19, VAR_20))
            continue;

        VAR_21 = (double) VAR_18 / (double) VAR_14;

        if (VAR_21 < VAR_22 ||
                (VAR_28 == VAR_6) | VAR_5 ||
                VAR_12 == VAR_4){
            VAR_22 = VAR_21;

            VAR_11.meandist = VAR_21;
            VAR_11.matchframes = VAR_15;
            VAR_11.framerateratio = VAR_10->framerateratio;
            VAR_11.score = VAR_10->score;
            VAR_11.offset = VAR_10->offset;
            VAR_11.first = VAR_10->first;
            VAR_11.second = VAR_10->second;
            VAR_11.whole = 0;
            VAR_11.next = ((void*)0);
        }


        if (VAR_28 == (VAR_6 | VAR_5)) {
            VAR_11.whole = 1;
            break;
        }


        if (VAR_12 == VAR_4) {
            break;
        }
    }
    return VAR_11;
}
