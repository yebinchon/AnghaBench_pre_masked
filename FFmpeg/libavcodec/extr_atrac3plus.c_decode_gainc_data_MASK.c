
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* channels; } ;
struct TYPE_7__ {int num_gain_subbands; int * gain_data; } ;
typedef int GetBitContext ;
typedef TYPE_2__ Atrac3pChanUnitCtx ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int,int) ;
 int FUNC_1 (int *,TYPE_2__*,int,int,int *) ;
 int FUNC_2 (int *,TYPE_2__*,int,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static int FUNC_6(GetBitContext *VAR_1, Atrac3pChanUnitCtx *VAR_2,
                             int VAR_3, AVCodecContext *VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        FUNC_5(VAR_2->channels[VAR_5].gain_data, 0,
               sizeof(*VAR_2->channels[VAR_5].gain_data) * VAR_0);

        if (FUNC_4(VAR_1)) {
            VAR_6 = FUNC_3(VAR_1, 4) + 1;
            if (FUNC_4(VAR_1))
                VAR_2->channels[VAR_5].num_gain_subbands = FUNC_3(VAR_1, 4) + 1;
            else
                VAR_2->channels[VAR_5].num_gain_subbands = VAR_6;

            if ((VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_5, VAR_6)) < 0 ||
                (VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_5, VAR_6)) < 0 ||
                (VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_5, VAR_6, VAR_4)) < 0)
                return VAR_8;

            if (VAR_6 > 0) {
                for (VAR_7 = VAR_6; VAR_7 < VAR_2->channels[VAR_5].num_gain_subbands; VAR_7++)
                    VAR_2->channels[VAR_5].gain_data[VAR_7] =
                        VAR_2->channels[VAR_5].gain_data[VAR_7 - 1];
            }
        } else {
            VAR_2->channels[VAR_5].num_gain_subbands = 0;
        }
    }

    return 0;
}
