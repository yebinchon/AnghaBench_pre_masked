
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {TYPE_1__* priv; } ;
struct TYPE_11__ {int h; int w; int format; TYPE_4__* dst; } ;
struct TYPE_10__ {int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_9__ {int mode; int dctB; int requantize; int src; void* temp_stride; int vsub; int hsub; } ;
typedef TYPE_1__ PP7Context ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (void*,int const) ;
 TYPE_2__* FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_6)
{
    AVFilterContext *VAR_7 = VAR_6->dst;
    PP7Context *VAR_8 = VAR_7->priv;
    const int VAR_9 = FUNC_1(VAR_6->h + 16, 16);
    const AVPixFmtDescriptor *VAR_10 = FUNC_3(VAR_6->format);

    VAR_8->hsub = VAR_10->log2_chroma_w;
    VAR_8->vsub = VAR_10->log2_chroma_h;

    VAR_8->temp_stride = FUNC_1(VAR_6->w + 16, 16);
    VAR_8->src = FUNC_2(VAR_8->temp_stride, (VAR_9 + 8) * sizeof(uint8_t));

    if (!VAR_8->src)
        return FUNC_0(VAR_1);

    FUNC_5(VAR_8);

    switch (VAR_8->mode) {
        case 0: VAR_8->requantize = VAR_3; break;
        case 1: VAR_8->requantize = VAR_5; break;
        default:
        case 2: VAR_8->requantize = VAR_4; break;
    }

    VAR_8->dctB = VAR_2;

    if (VAR_0)
        FUNC_4(VAR_8);

    return 0;
}
