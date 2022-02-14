
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int format; int h; int w; TYPE_1__* dst; } ;
struct TYPE_9__ {int log2_chroma_h; } ;
struct TYPE_8__ {int nb_planes; int * planeheight; int planewidth; } ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef TYPE_2__ FieldHintContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_0)
{
    FieldHintContext *VAR_1 = VAR_0->dst->priv;
    const AVPixFmtDescriptor *VAR_2 = FUNC_3(VAR_0->format);
    int VAR_3;

    if ((VAR_3 = FUNC_1(VAR_1->planewidth, VAR_0->format, VAR_0->w)) < 0)
        return VAR_3;

    VAR_1->planeheight[1] = VAR_1->planeheight[2] = FUNC_0(VAR_0->h, VAR_2->log2_chroma_h);
    VAR_1->planeheight[0] = VAR_1->planeheight[3] = VAR_0->h;

    VAR_1->nb_planes = FUNC_2(VAR_0->format);

    return 0;
}
