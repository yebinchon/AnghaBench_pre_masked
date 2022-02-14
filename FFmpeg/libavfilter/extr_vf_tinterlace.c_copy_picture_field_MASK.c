
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_10__ {int log2_chroma_w; int log2_chroma_h; int nb_components; } ;
struct TYPE_9__ {TYPE_2__* csp; int (* lowpass_line ) (int *,int,int const*,int,int,int) ;} ;
struct TYPE_8__ {TYPE_1__* comp; } ;
struct TYPE_7__ {int depth; } ;
typedef TYPE_3__ TInterlaceContext ;
typedef TYPE_4__ AVPixFmtDescriptor ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int,int const*,int,int,int) ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (int *,int,int const*,int,int,int) ;

__attribute__((used)) static inline
void FUNC_4(TInterlaceContext *VAR_5,
                        uint8_t *VAR_6[4], int VAR_7[4],
                        const uint8_t *VAR_8[4], int VAR_9[4],
                        enum AVPixelFormat VAR_10, int VAR_11, int VAR_12,
                        int VAR_13, int VAR_14, int VAR_15,
                        int VAR_16)
{
    const AVPixFmtDescriptor *VAR_17 = FUNC_2(VAR_10);
    int VAR_18 = VAR_17->log2_chroma_w;
    int VAR_19, VAR_20 = VAR_17->log2_chroma_h;
    int VAR_21 = VAR_13 == VAR_2 ? 1 : 2;
    int VAR_22;

    for (VAR_19 = 0; VAR_19 < VAR_17->nb_components; VAR_19++) {
        int VAR_23 = VAR_19 == 1 || VAR_19 == 2 ? FUNC_0(VAR_12, VAR_20) : VAR_12;
        int VAR_24 = VAR_19 == 1 || VAR_19 == 2 ? FUNC_0( VAR_11, VAR_18) : VAR_11;
        uint8_t *VAR_25 = VAR_6[VAR_19];
        const uint8_t *VAR_26 = VAR_8[VAR_19];
        int VAR_27 = VAR_9[VAR_19] * VAR_21;
        int VAR_28 = VAR_7[VAR_19] * (VAR_14 ? 2 : 1);
        int VAR_29 = (1 << VAR_5->csp->comp[VAR_19].depth) - 1;

        VAR_23 = (VAR_23 + (VAR_13 == VAR_1)) / VAR_21;
        if (VAR_13 == VAR_0)
            VAR_26 += VAR_9[VAR_19];
        if (VAR_14 && VAR_15 == VAR_0)
            VAR_25 += VAR_7[VAR_19];



        if (VAR_16 & (VAR_4 | VAR_3)) {
            int VAR_30 = !!(VAR_16 & VAR_3);
            for (VAR_22 = VAR_23; VAR_22 > 0; VAR_22--) {
                ptrdiff_t VAR_31 = VAR_9[VAR_19];
                ptrdiff_t VAR_32 = -VAR_31;
                if (VAR_22 >= (VAR_23 - VAR_30)) VAR_32 = 0;
                else if (VAR_22 <= (1 + VAR_30)) VAR_31 = 0;

                VAR_5->lowpass_line(VAR_25, VAR_24, VAR_26, VAR_32, VAR_31, VAR_29);
                VAR_25 += VAR_28;
                VAR_26 += VAR_27;
            }
        } else {
            if (VAR_5->csp->comp[VAR_19].depth > 8)
                VAR_24 *= 2;
            FUNC_1(VAR_25, VAR_28, VAR_26, VAR_27, VAR_24, VAR_23);
        }
    }
}
