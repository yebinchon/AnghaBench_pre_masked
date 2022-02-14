
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int numcomps; TYPE_2__* comps; } ;
typedef TYPE_3__ opj_image_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_10__ {int nb_components; int log2_chroma_w; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_8__ {int dx; int dy; int prec; } ;
struct TYPE_7__ {int depth; } ;
typedef TYPE_4__ AVPixFmtDescriptor ;


 TYPE_4__* FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(const opj_image_t *VAR_0, enum AVPixelFormat VAR_1)
{
    const AVPixFmtDescriptor *VAR_2 = FUNC_0(VAR_1);
    int VAR_3 = 1;

    if (VAR_2->nb_components != VAR_0->numcomps) {
        return 0;
    }

    switch (VAR_2->nb_components) {
    case 4:
        VAR_3 = VAR_3 &&
                VAR_2->comp[3].depth >= VAR_0->comps[3].prec &&
                1 == VAR_0->comps[3].dx &&
                1 == VAR_0->comps[3].dy;
    case 3:
        VAR_3 = VAR_3 &&
                VAR_2->comp[2].depth >= VAR_0->comps[2].prec &&
                1 << VAR_2->log2_chroma_w == VAR_0->comps[2].dx &&
                1 << VAR_2->log2_chroma_h == VAR_0->comps[2].dy;
    case 2:
        VAR_3 = VAR_3 &&
                VAR_2->comp[1].depth >= VAR_0->comps[1].prec &&
                1 << VAR_2->log2_chroma_w == VAR_0->comps[1].dx &&
                1 << VAR_2->log2_chroma_h == VAR_0->comps[1].dy;
    case 1:
        VAR_3 = VAR_3 &&
                VAR_2->comp[0].depth >= VAR_0->comps[0].prec &&
                1 == VAR_0->comps[0].dx &&
                1 == VAR_0->comps[0].dy;
    default:
        break;
    }

    return VAR_3;
}
