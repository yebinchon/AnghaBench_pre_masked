
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_6__ {int nb_components; int log2_chroma_w; int log2_chroma_h; int flags; TYPE_1__* comp; } ;
struct TYPE_5__ {int depth; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const*) ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(enum AVPixelFormat VAR_1, int VAR_2,
                         int VAR_3, uint32_t VAR_4, int VAR_5)
{
    int VAR_6 = 1;
    const AVPixFmtDescriptor *VAR_7 = FUNC_1(VAR_1);

    FUNC_0(VAR_7);

    if (VAR_7->nb_components != VAR_2) {
        return 0;
    }

    switch (VAR_2) {
    case 4:
        VAR_6 = VAR_6 && VAR_7->comp[3].depth >= VAR_3 &&
                         (VAR_4 >> 14 & 3) == 0 &&
                         (VAR_4 >> 12 & 3) == 0;
    case 3:
        VAR_6 = VAR_6 && VAR_7->comp[2].depth >= VAR_3 &&
                         (VAR_4 >> 10 & 3) == VAR_7->log2_chroma_w &&
                         (VAR_4 >> 8 & 3) == VAR_7->log2_chroma_h;
    case 2:
        VAR_6 = VAR_6 && VAR_7->comp[1].depth >= VAR_3 &&
                         (VAR_4 >> 6 & 3) == VAR_7->log2_chroma_w &&
                         (VAR_4 >> 4 & 3) == VAR_7->log2_chroma_h;

    case 1:
        VAR_6 = VAR_6 && VAR_7->comp[0].depth >= VAR_3 &&
                         (VAR_4 >> 2 & 3) == 0 &&
                         (VAR_4 & 3) == 0 &&
                         (VAR_7->flags & VAR_0) == VAR_5 * VAR_0;
    }
    return VAR_6;
}
