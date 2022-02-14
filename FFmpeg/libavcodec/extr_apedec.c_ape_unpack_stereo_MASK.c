
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int** decoded; int frameflags; int (* predictor_decode_stereo ) (TYPE_1__*,int) ;scalar_t__ error; int (* entropy_decode_stereo ) (TYPE_1__*,int) ;int avctx; } ;
typedef TYPE_1__ APEContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(APEContext *VAR_2, int VAR_3)
{
    unsigned VAR_4, VAR_5;
    int32_t *VAR_6 = VAR_2->decoded[0];
    int32_t *VAR_7 = VAR_2->decoded[1];

    if ((VAR_2->frameflags & VAR_0) == VAR_0) {

        FUNC_0(VAR_2->avctx, VAR_1, "pure silence stereo\n");
        return;
    }

    VAR_2->entropy_decode_stereo(VAR_2, VAR_3);
    if (VAR_2->error)
        return;


    VAR_2->predictor_decode_stereo(VAR_2, VAR_3);


    while (VAR_3--) {
        VAR_4 = *VAR_7 - (unsigned)(*VAR_6 / 2);
        VAR_5 = VAR_4 + *VAR_6;

        *(VAR_6++) = VAR_4;
        *(VAR_7++) = VAR_5;
    }
}
