
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* priv; } ;
struct TYPE_10__ {void* w; void* h; int format; TYPE_4__* dst; } ;
struct TYPE_9__ {int nb_components; int flags; int log2_chroma_w; int log2_chroma_h; } ;
struct TYPE_8__ {int nb_planes; int nb_components; int* blank; int step; void** width; void** height; int displace; } ;
typedef TYPE_1__ DisplaceContext ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 void* FUNC_0 (void*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;
    DisplaceContext *VAR_5 = VAR_4->priv;
    const AVPixFmtDescriptor *VAR_6 = FUNC_3(VAR_3->format);
    int VAR_7, VAR_8;

    VAR_5->nb_planes = FUNC_2(VAR_3->format);
    VAR_5->nb_components = VAR_6->nb_components;

    if (VAR_5->nb_planes > 1 || VAR_5->nb_components == 1)
        VAR_5->displace = VAR_2;
    else
        VAR_5->displace = VAR_1;

    if (!(VAR_6->flags & VAR_0)) {
        VAR_5->blank[1] = VAR_5->blank[2] = 128;
        VAR_5->blank[0] = 16;
    }

    VAR_5->step = FUNC_1(VAR_6) >> 3;
    VAR_8 = VAR_6->log2_chroma_w;
    VAR_7 = VAR_6->log2_chroma_h;
    VAR_5->height[1] = VAR_5->height[2] = FUNC_0(VAR_3->h, VAR_7);
    VAR_5->height[0] = VAR_5->height[3] = VAR_3->h;
    VAR_5->width[1] = VAR_5->width[2] = FUNC_0(VAR_3->w, VAR_8);
    VAR_5->width[0] = VAR_5->width[3] = VAR_3->w;

    return 0;
}
