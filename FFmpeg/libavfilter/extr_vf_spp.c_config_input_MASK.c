
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int h; int w; int format; TYPE_1__* dst; } ;
struct TYPE_12__ {int log2_chroma_h; int log2_chroma_w; TYPE_2__* comp; } ;
struct TYPE_11__ {void* src; void* temp; void* temp_linesize; int vsub; int hsub; int dct; } ;
struct TYPE_10__ {int depth; } ;
struct TYPE_9__ {TYPE_3__* priv; } ;
typedef TYPE_3__ SPPContext ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFilterLink ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (int,int) ;
 void* FUNC_2 (void*,int const) ;
 int FUNC_3 (int ,char*,int const,int ) ;
 TYPE_4__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_2)
{
    SPPContext *VAR_3 = VAR_2->dst->priv;
    const int VAR_4 = FUNC_1(VAR_2->h + 16, 16);
    const AVPixFmtDescriptor *VAR_5 = FUNC_4(VAR_2->format);
    const int VAR_6 = VAR_5->comp[0].depth;

    FUNC_3(VAR_3->dct, "bits_per_sample", VAR_6, 0);
    FUNC_5(VAR_3->dct);

    if (VAR_0)
        FUNC_6(VAR_3);

    VAR_3->hsub = VAR_5->log2_chroma_w;
    VAR_3->vsub = VAR_5->log2_chroma_h;
    VAR_3->temp_linesize = FUNC_1(VAR_2->w + 16, 16);
    VAR_3->temp = FUNC_2(VAR_3->temp_linesize, VAR_4 * sizeof(*VAR_3->temp));
    VAR_3->src = FUNC_2(VAR_3->temp_linesize, VAR_4 * sizeof(*VAR_3->src) * 2);

    if (!VAR_3->temp || !VAR_3->src)
        return FUNC_0(VAR_1);
    return 0;
}
