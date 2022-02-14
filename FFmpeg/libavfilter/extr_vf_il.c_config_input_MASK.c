
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int h; int w; int format; TYPE_1__* dst; } ;
struct TYPE_9__ {int flags; int log2_chroma_h; } ;
struct TYPE_8__ {int has_alpha; int chroma_height; int linesize; int nb_planes; } ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef TYPE_2__ IlContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_1)
{
    IlContext *VAR_2 = VAR_1->dst->priv;
    const AVPixFmtDescriptor *VAR_3 = FUNC_3(VAR_1->format);
    int VAR_4;

    VAR_2->nb_planes = FUNC_2(VAR_1->format);

    VAR_2->has_alpha = !!(VAR_3->flags & VAR_0);
    if ((VAR_4 = FUNC_1(VAR_2->linesize, VAR_1->format, VAR_1->w)) < 0)
        return VAR_4;

    VAR_2->chroma_height = FUNC_0(VAR_1->h, VAR_3->log2_chroma_h);

    return 0;
}
