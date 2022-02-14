
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_7__ {int flags; int nb_components; int log2_chroma_w; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_6__ {int depth; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;




 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (int*,int*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__ const*) ;

__attribute__((used)) static int FUNC_5(enum AVPixelFormat VAR_9,
                              enum AVPixelFormat VAR_10,
                              unsigned *VAR_11, unsigned VAR_12)
{
    const AVPixFmtDescriptor *VAR_13 = FUNC_1(VAR_10);
    const AVPixFmtDescriptor *VAR_14 = FUNC_1(VAR_9);
    int VAR_15, VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20;
    int VAR_21, VAR_22, VAR_23, VAR_24;
    int VAR_25 = VAR_8 - 1;

    if (!VAR_13 || !VAR_14)
        return -4;

    if ((VAR_13->flags & VAR_0) ||
        (VAR_14->flags & VAR_0)) {
        if (VAR_9 == VAR_10)
            return -1;
        else
            return -2;
    }


    *VAR_11 = VAR_22 = 0;

    if (VAR_9 == VAR_10)
        return VAR_8;

    if ((VAR_21 = FUNC_3(&VAR_17, &VAR_18, VAR_10)) < 0)
        return -3;
    if ((VAR_21 = FUNC_3(&VAR_19, &VAR_20, VAR_9)) < 0)
        return -3;

    VAR_15 = FUNC_2(VAR_13);
    VAR_16 = FUNC_2(VAR_14);
    if (VAR_9 == VAR_1)
        VAR_24 = FUNC_0(VAR_13->nb_components, 4);
    else
        VAR_24 = FUNC_0(VAR_13->nb_components, VAR_14->nb_components);

    for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++) {
        int VAR_26 = (VAR_9 == VAR_1) ? 7/VAR_24 : (VAR_14->comp[VAR_23].depth - 1);
        if (VAR_13->comp[VAR_23].depth - 1 > VAR_26 && (VAR_12 & VAR_6)) {
            VAR_22 |= VAR_6;
            VAR_25 -= 65536 >> VAR_26;
        }
    }

    if (VAR_12 & VAR_7) {
        if (VAR_14->log2_chroma_w > VAR_13->log2_chroma_w) {
            VAR_22 |= VAR_7;
            VAR_25 -= 256 << VAR_14->log2_chroma_w;
        }
        if (VAR_14->log2_chroma_h > VAR_13->log2_chroma_h) {
            VAR_22 |= VAR_7;
            VAR_25 -= 256 << VAR_14->log2_chroma_h;
        }

        if (VAR_14->log2_chroma_w == 1 && VAR_13->log2_chroma_w == 0 &&
            VAR_14->log2_chroma_h == 1 && VAR_13->log2_chroma_h == 0 ) {
            VAR_25 += 512;
        }
    }

    if(VAR_12 & VAR_5)
    switch(VAR_16) {
    case 130:
        if (VAR_15 != 130 &&
            VAR_15 != 131)
            VAR_22 |= VAR_5;
        break;
    case 131:
        if (VAR_15 != 131)
            VAR_22 |= VAR_5;
        break;
    case 129:
        if (VAR_15 != 129)
            VAR_22 |= VAR_5;
        break;
    case 128:
        if (VAR_15 != 128 &&
            VAR_15 != 129 &&
            VAR_15 != 131)
            VAR_22 |= VAR_5;
        break;
    default:

        if (VAR_15 != VAR_16)
            VAR_22 |= VAR_5;
        break;
    }
    if(VAR_22 & VAR_5)
        VAR_25 -= (VAR_24 * 65536) >> FUNC_0(VAR_14->comp[0].depth - 1, VAR_13->comp[0].depth - 1);

    if (VAR_16 == 131 &&
        VAR_15 != 131 && (VAR_12 & VAR_3)) {
        VAR_22 |= VAR_3;
        VAR_25 -= 2 * 65536;
    }
    if (!FUNC_4(VAR_14) && (FUNC_4(VAR_13) && (VAR_12 & VAR_2))) {
        VAR_22 |= VAR_2;
        VAR_25 -= 65536;
    }
    if (VAR_9 == VAR_1 && (VAR_12 & VAR_4) &&
        (VAR_10 != VAR_1 && (VAR_15 != 131 || (FUNC_4(VAR_13) && (VAR_12 & VAR_2))))) {
        VAR_22 |= VAR_4;
        VAR_25 -= 65536;
    }

    *VAR_11 = VAR_22;
    return VAR_25;
}
