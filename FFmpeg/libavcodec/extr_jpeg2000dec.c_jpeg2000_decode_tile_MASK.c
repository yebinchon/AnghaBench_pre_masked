
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {TYPE_3__* priv_data; } ;
struct TYPE_20__ {scalar_t__ format; } ;
struct TYPE_19__ {int ncomponents; int* cdef; int precision; TYPE_2__* tile; } ;
struct TYPE_18__ {TYPE_1__* codsty; } ;
struct TYPE_17__ {scalar_t__ mct; } ;
typedef TYPE_2__ Jpeg2000Tile ;
typedef TYPE_3__ Jpeg2000DecoderContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_4__*,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_4, void *VAR_5,
                                int VAR_6, int VAR_7)
{
    Jpeg2000DecoderContext *VAR_8 = VAR_4->priv_data;
    AVFrame *VAR_9 = VAR_5;
    Jpeg2000Tile *VAR_10 = VAR_8->tile + VAR_6;
    int VAR_11;

    FUNC_1(VAR_8, VAR_10);


    if (VAR_10->codsty[0].mct)
        FUNC_0(VAR_8, VAR_10);

    for (VAR_11 = 0; VAR_11 < VAR_8->ncomponents; VAR_11++) {
        if (VAR_8->cdef[VAR_11] < 0) {
            for (VAR_11 = 0; VAR_11 < VAR_8->ncomponents; VAR_11++) {
                VAR_8->cdef[VAR_11] = VAR_11 + 1;
            }
            if ((VAR_8->ncomponents & 1) == 0)
                VAR_8->cdef[VAR_8->ncomponents-1] = 0;
            break;
        }
    }

    if (VAR_8->precision <= 8) {
        FUNC_3(VAR_8, VAR_10, VAR_9, 8);
    } else {
        int VAR_12 = VAR_9->format == VAR_3 ||
                        VAR_9->format == VAR_1 ||
                        VAR_9->format == VAR_2 ||
                        VAR_9->format == VAR_0 ? 16 : VAR_8->precision;

        FUNC_2(VAR_8, VAR_10, VAR_9, VAR_12);
    }

    return 0;
}
