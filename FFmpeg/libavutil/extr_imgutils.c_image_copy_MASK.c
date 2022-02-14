
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int const ptrdiff_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {int flags; int nb_components; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_4__ {scalar_t__ plane; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int *,int ,char*) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_6(uint8_t *VAR_4[4], const ptrdiff_t VAR_5[4],
                       const uint8_t *VAR_6[4], const ptrdiff_t VAR_7[4],
                       enum AVPixelFormat VAR_8, int VAR_9, int VAR_10,
                       void (*VAR_11)(uint8_t *, ptrdiff_t, const uint8_t *,
                                          ptrdiff_t, ptrdiff_t, int))
{
    const AVPixFmtDescriptor *VAR_12 = FUNC_4(VAR_8);

    if (!VAR_12 || VAR_12->flags & VAR_1)
        return;

    if (VAR_12->flags & VAR_2 ||
        VAR_12->flags & VAR_3) {
        VAR_11(VAR_4[0], VAR_5[0],
                   VAR_6[0], VAR_7[0],
                   VAR_9, VAR_10);

        if ((VAR_12->flags & VAR_2) || (VAR_4[1] && VAR_6[1]))
            FUNC_5(VAR_4[1], VAR_6[1], 4*256);
    } else {
        int VAR_13, VAR_14 = 0;

        for (VAR_13 = 0; VAR_13 < VAR_12->nb_components; VAR_13++)
            VAR_14 = FUNC_1(VAR_14, VAR_12->comp[VAR_13].plane + 1);

        for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
            int VAR_15 = VAR_10;
            ptrdiff_t VAR_16 = FUNC_2(VAR_8, VAR_9, VAR_13);
            if (VAR_16 < 0) {
                FUNC_3(((void*)0), VAR_0, "av_image_get_linesize failed\n");
                return;
            }
            if (VAR_13 == 1 || VAR_13 == 2) {
                VAR_15 = FUNC_0(VAR_10, VAR_12->log2_chroma_h);
            }
            VAR_11(VAR_4[VAR_13], VAR_5[VAR_13],
                       VAR_6[VAR_13], VAR_7[VAR_13],
                       VAR_16, VAR_15);
        }
    }
}
