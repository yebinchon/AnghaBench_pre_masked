
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {int nb_components; int log2_chroma_h; int flags; TYPE_1__* comp; } ;
struct TYPE_4__ {int plane; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int const* const) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int*,int,int) ;
 int FUNC_7 (int,int,int,int) ;
 TYPE_2__* FUNC_8 (int) ;
 int FUNC_9 (int *,int const*,int) ;

int FUNC_10(uint8_t *VAR_2, int VAR_3,
                            const uint8_t * const VAR_4[4],
                            const int VAR_5[4],
                            enum AVPixelFormat VAR_6,
                            int VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10, VAR_11, VAR_12 = 0, VAR_13[4];
    int VAR_14 = FUNC_7(VAR_6, VAR_7, VAR_8, VAR_9);
    const AVPixFmtDescriptor *VAR_15 = FUNC_8(VAR_6);
    int VAR_16;

    if (VAR_14 > VAR_3 || VAR_14 < 0 || !VAR_15)
        return FUNC_0(VAR_1);

    for (VAR_10 = 0; VAR_10 < VAR_15->nb_components; VAR_10++)
        VAR_12 = FUNC_4(VAR_15->comp[VAR_10].plane, VAR_12);

    VAR_12++;

    VAR_16 = FUNC_6(VAR_13, VAR_6, VAR_7);
    FUNC_5(VAR_16 >= 0);

    for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
        int VAR_17, VAR_18 = (VAR_10 == 1 || VAR_10 == 2) ? VAR_15->log2_chroma_h : 0;
        const uint8_t *VAR_19 = VAR_4[VAR_10];
        VAR_17 = (VAR_8 + (1 << VAR_18) - 1) >> VAR_18;

        for (VAR_11 = 0; VAR_11 < VAR_17; VAR_11++) {
            FUNC_9(VAR_2, VAR_19, VAR_13[VAR_10]);
            VAR_2 += FUNC_3(VAR_13[VAR_10], VAR_9);
            VAR_19 += VAR_5[VAR_10];
        }
    }

    if (VAR_15->flags & VAR_0) {
        uint32_t *VAR_20 = (uint32_t *)VAR_2;

        for (VAR_10 = 0; VAR_10<256; VAR_10++)
            FUNC_2(VAR_20 + VAR_10, FUNC_1(VAR_4[1] + 4*VAR_10));
    }

    return VAR_14;
}
