
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_12__ {TYPE_2__* priv; } ;
struct TYPE_11__ {int h; int w; int format; TYPE_5__* dst; } ;
struct TYPE_10__ {int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_9__ {int bitdepth; int* width; int* height; int sad; } ;
struct TYPE_8__ {int depth; } ;
typedef TYPE_2__ FreezeDetectContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->dst;
    FreezeDetectContext *VAR_3 = VAR_2->priv;
    const AVPixFmtDescriptor *VAR_4 = FUNC_2(VAR_1->format);

    VAR_3->bitdepth = VAR_4->comp[0].depth;

    for (int VAR_5 = 0; VAR_5 < 4; VAR_5++) {
        ptrdiff_t VAR_6 = FUNC_1(VAR_1->format, VAR_1->w, VAR_5);
        VAR_3->width[VAR_5] = VAR_6 >> (VAR_3->bitdepth > 8);
        VAR_3->height[VAR_5] = VAR_1->h >> ((VAR_5 == 1 || VAR_5 == 2) ? VAR_4->log2_chroma_h : 0);
    }

    VAR_3->sad = FUNC_3(VAR_3->bitdepth == 8 ? 8 : 16);
    if (!VAR_3->sad)
        return FUNC_0(VAR_0);

    return 0;
}
