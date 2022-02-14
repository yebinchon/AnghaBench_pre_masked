
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int format; TYPE_1__* dst; } ;
struct TYPE_10__ {int flags; int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_9__ {int bpp; int alpha; int is_packed_rgb; int black_level; int black_level_scaled; int rgba_map; int vsub; int hsub; } ;
struct TYPE_8__ {TYPE_2__* priv; } ;
typedef TYPE_2__ FadeContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__ const*) ;
 TYPE_3__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_3)
{
    FadeContext *VAR_4 = VAR_3->dst->priv;
    const AVPixFmtDescriptor *VAR_5 = FUNC_1(VAR_3->format);

    VAR_4->hsub = VAR_5->log2_chroma_w;
    VAR_4->vsub = VAR_5->log2_chroma_h;

    VAR_4->bpp = VAR_5->flags & VAR_1 ?
             1 :
             FUNC_0(VAR_5) >> 3;
    VAR_4->alpha &= !!(VAR_5->flags & VAR_0);
    VAR_4->is_packed_rgb = FUNC_2(VAR_4->rgba_map, VAR_3->format) >= 0;


    VAR_4->black_level =
            FUNC_3(VAR_3->format, VAR_2) && !VAR_4->alpha ? 16 : 0;


    VAR_4->black_level_scaled = (VAR_4->black_level << 16) + 32768;
    return 0;
}
