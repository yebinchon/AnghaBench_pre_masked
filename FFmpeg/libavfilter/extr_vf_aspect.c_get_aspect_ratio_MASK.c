
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {TYPE_2__* priv; } ;
struct TYPE_15__ {double den; scalar_t__ num; } ;
struct TYPE_19__ {double w; double h; TYPE_1__ sample_aspect_ratio; int format; TYPE_6__* dst; } ;
struct TYPE_18__ {int log2_chroma_w; int log2_chroma_h; } ;
struct TYPE_17__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_16__ {int ratio_expr; int max; } ;
typedef TYPE_2__ AspectContext ;
typedef TYPE_3__ AVRational ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 TYPE_3__ FUNC_1 (double,int ) ;
 int FUNC_2 (double*,int ,int ,double*,int *,int *,int *,int *,int *,int ,TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,int ,char*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ,TYPE_6__*) ;
 TYPE_4__* FUNC_5 (int ) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_11, AVRational *VAR_12)
{
    AVFilterContext *VAR_13 = VAR_11->dst;
    AspectContext *VAR_14 = VAR_11->dst->priv;
    const AVPixFmtDescriptor *VAR_15 = FUNC_5(VAR_11->format);
    double VAR_16[VAR_2], VAR_17;
    int VAR_18;

    VAR_16[VAR_9] = VAR_11->w;
    VAR_16[VAR_5] = VAR_11->h;
    VAR_16[VAR_3] = (double) VAR_11->w / VAR_11->h;
    VAR_16[VAR_7] = VAR_11->sample_aspect_ratio.num ?
        (double) VAR_11->sample_aspect_ratio.num / VAR_11->sample_aspect_ratio.den : 1;
    VAR_16[VAR_4] = VAR_16[VAR_3] * VAR_16[VAR_7];
    VAR_16[VAR_6] = 1 << VAR_15->log2_chroma_w;
    VAR_16[VAR_8] = 1 << VAR_15->log2_chroma_h;


    VAR_18 = FUNC_2(&VAR_17, VAR_14->ratio_expr,
                                      VAR_10, VAR_16,
                                      ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, VAR_13);
    if (VAR_18 < 0) {
        VAR_18 = FUNC_4(VAR_12, VAR_14->ratio_expr, VAR_14->max, 0, VAR_13);
    } else
        *VAR_12 = FUNC_1(VAR_17, VAR_14->max);

    if (VAR_18 < 0) {
        FUNC_3(VAR_13, VAR_0,
               "Error when evaluating the expression '%s'\n", VAR_14->ratio_expr);
        return VAR_18;
    }
    if (VAR_12->num < 0 || VAR_12->den <= 0) {
        FUNC_3(VAR_13, VAR_0,
                "Invalid string '%s' for aspect ratio\n", VAR_14->ratio_expr);
        return FUNC_0(VAR_1);
    }
    return 0;
}
