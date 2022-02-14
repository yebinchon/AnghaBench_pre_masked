
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int sample_fmt; } ;
struct TYPE_4__ {int internal_ftype; int channels; int** offset; TYPE_3__* avctx; int nmean; } ;
typedef TYPE_1__ ShortenContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;



 int FUNC_1 (TYPE_3__*,int ,char*) ;

__attribute__((used)) static int FUNC_2(ShortenContext *VAR_4)
{
    int32_t VAR_5 = 0;
    int VAR_6, VAR_7;
    int VAR_8 = FUNC_0(1, VAR_4->nmean);

    switch (VAR_4->internal_ftype) {
    case 128:
        VAR_4->avctx->sample_fmt = VAR_3;
        VAR_5 = 0x80;
        break;
    case 130:
    case 129:
        VAR_4->avctx->sample_fmt = VAR_2;
        break;
    default:
        FUNC_1(VAR_4->avctx, VAR_1, "unknown audio type\n");
        return VAR_0;
    }

    for (VAR_6 = 0; VAR_6 < VAR_4->channels; VAR_6++)
        for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
            VAR_4->offset[VAR_6][VAR_7] = VAR_5;
    return 0;
}
