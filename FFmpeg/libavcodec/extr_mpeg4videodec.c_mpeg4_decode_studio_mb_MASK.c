
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_6__ {int dpcm_direction; int mb_intra; size_t chroma_format; int gb; int ** dpcm_macroblock; int avctx; int ** block32; int qscale; } ;
typedef TYPE_1__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int* VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,unsigned int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(MpegEncContext *VAR_4, int16_t VAR_5[12][64])
{
    int VAR_6;

    VAR_4->dpcm_direction = 0;



    VAR_4->mb_intra = 1;
    if (FUNC_1(&VAR_4->gb)) {


        if (!FUNC_1(&VAR_4->gb)) {
            FUNC_8(&VAR_4->gb);
            VAR_4->qscale = FUNC_5(VAR_4);
        }

        for (VAR_6 = 0; VAR_6 < VAR_3[VAR_4->chroma_format]; VAR_6++) {
            if (FUNC_4(VAR_4, (*VAR_4->block32)[VAR_6], VAR_6) < 0)
                return VAR_0;
        }
    } else {

        FUNC_0(VAR_4->avctx, &VAR_4->gb, "DPCM block start");
        VAR_4->dpcm_direction = FUNC_1(&VAR_4->gb) ? -1 : 1;
        for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
            if (FUNC_3(VAR_4, (*VAR_4->dpcm_macroblock)[VAR_6], VAR_6) < 0)
                return VAR_0;
        }
    }

    if (FUNC_2(&VAR_4->gb) >= 24 && FUNC_7(&VAR_4->gb, 23) == 0) {
        FUNC_6(&VAR_4->gb);
        return VAR_1;
    }


    if (FUNC_2(&VAR_4->gb) == 0)
        return VAR_1;


    if (FUNC_2(&VAR_4->gb) < 8U && FUNC_7(&VAR_4->gb, FUNC_2(&VAR_4->gb)) == 0)
        return VAR_1;

    return VAR_2;
}
