
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_25__ {int * inputs; TYPE_5__* priv; } ;
struct TYPE_24__ {TYPE_8__* src; } ;
struct TYPE_23__ {scalar_t__ score; scalar_t__ whole; int matchframes; TYPE_2__* second; TYPE_1__* first; } ;
struct TYPE_22__ {int nb_inputs; scalar_t__ mode; TYPE_4__* streamcontexts; int filename; } ;
struct TYPE_20__ {double num; double den; } ;
struct TYPE_21__ {int exported; TYPE_3__ time_base; } ;
struct TYPE_19__ {scalar_t__ pts; } ;
struct TYPE_18__ {scalar_t__ pts; } ;
typedef TYPE_4__ StreamContext ;
typedef TYPE_5__ SignatureContext ;
typedef TYPE_6__ MatchingInfo ;
typedef TYPE_7__ AVFilterLink ;
typedef TYPE_8__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_8__*,int ,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_8__*,TYPE_4__*,int) ;
 int FUNC_2 (int ) ;
 TYPE_6__ FUNC_3 (TYPE_8__*,TYPE_5__*,TYPE_4__*,TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->src;
    SignatureContext *VAR_5 = VAR_4->priv;
    StreamContext *VAR_6, *VAR_7;
    MatchingInfo VAR_8;
    int VAR_9, VAR_10, VAR_11;
    int VAR_12 = 1;


    for (VAR_9 = 0; VAR_9 < VAR_5->nb_inputs; VAR_9++){
        VAR_6 = &(VAR_5->streamcontexts[VAR_9]);

        VAR_11 = FUNC_2(VAR_4->inputs[VAR_9]);


        if (VAR_11 < 0 && VAR_11 != VAR_0)
            return VAR_11;


        if (VAR_11 == VAR_0 && !VAR_6->exported) {

            if (FUNC_4(VAR_5->filename) > 0) {
                if (FUNC_1(VAR_4, VAR_6, VAR_9) < 0)
                    return VAR_11;
            }
            VAR_6->exported = 1;
        }
        VAR_12 &= VAR_6->exported;
    }


    if (VAR_12 && VAR_5->mode != VAR_2) {

        for (VAR_9 = 0; VAR_9 < VAR_5->nb_inputs; VAR_9++) {
            VAR_6 = &(VAR_5->streamcontexts[VAR_9]);
            for (VAR_10 = VAR_9+1; VAR_10 < VAR_5->nb_inputs; VAR_10++) {
                VAR_7 = &(VAR_5->streamcontexts[VAR_10]);
                VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_5->mode);
                if (VAR_8.score != 0) {
                    FUNC_0(VAR_4, VAR_1, "matching of video %d at %f and %d at %f, %d frames matching\n",
                            VAR_9, ((double) VAR_8.first->pts * VAR_6->time_base.num) / VAR_6->time_base.den,
                            VAR_10, ((double) VAR_8.second->pts * VAR_7->time_base.num) / VAR_7->time_base.den,
                            VAR_8.matchframes);
                    if (VAR_8.whole)
                        FUNC_0(VAR_4, VAR_1, "whole video matching\n");
                } else {
                    FUNC_0(VAR_4, VAR_1, "no matching of video %d and %d\n", VAR_9, VAR_10);
                }
            }
        }
    }

    return VAR_11;
}
