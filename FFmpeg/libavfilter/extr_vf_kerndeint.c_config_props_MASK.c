
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int w; int format; int h; TYPE_1__* dst; } ;
struct TYPE_9__ {int flags; int log2_chroma_h; } ;
struct TYPE_8__ {int is_packed_rgb; int tmp_bwidth; int * tmp_data; int tmp_linesize; int vsub; } ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef TYPE_2__ KerndeintContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_1)
{
    KerndeintContext *VAR_2 = VAR_1->dst->priv;
    const AVPixFmtDescriptor *VAR_3 = FUNC_2(VAR_1->format);
    int VAR_4;

    VAR_2->is_packed_rgb = FUNC_2(VAR_1->format)->flags & VAR_0;
    VAR_2->vsub = VAR_3->log2_chroma_h;

    VAR_4 = FUNC_0(VAR_2->tmp_data, VAR_2->tmp_linesize,
                         VAR_1->w, VAR_1->h, VAR_1->format, 16);
    if (VAR_4 < 0)
        return VAR_4;
    FUNC_3(VAR_2->tmp_data[0], 0, VAR_4);

    if ((VAR_4 = FUNC_1(VAR_2->tmp_bwidth, VAR_1->format, VAR_1->w)) < 0)
        return VAR_4;

    return 0;
}
