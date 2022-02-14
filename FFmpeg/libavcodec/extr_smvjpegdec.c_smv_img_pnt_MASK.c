
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {int flags; int nb_components; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_4__ {scalar_t__ plane; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int **,int *,int const,int,int) ;

__attribute__((used)) static inline void FUNC_4(uint8_t *VAR_3[4], uint8_t *VAR_4[4],
                               const int VAR_5[4],
                               enum AVPixelFormat VAR_6, int VAR_7, int VAR_8,
                               int VAR_9)
{
    const AVPixFmtDescriptor *VAR_10 = FUNC_2(VAR_6);
    int VAR_11, VAR_12 = 0;

    if (VAR_10->flags & VAR_0)
        return;

    for (VAR_11 = 0; VAR_11 < VAR_10->nb_components; VAR_11++)
        VAR_12 = FUNC_1(VAR_12, VAR_10->comp[VAR_11].plane + 1);

    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
        int VAR_13 = VAR_8;
        if (VAR_11 == 1 || VAR_11 == 2) {
            VAR_13 = FUNC_0(VAR_8, VAR_10->log2_chroma_h);
        }
        FUNC_3(&VAR_3[VAR_11], VAR_4[VAR_11],
            VAR_5[VAR_11], VAR_13, VAR_9);
    }
    if (VAR_10->flags & VAR_1 ||
        VAR_10->flags & VAR_2)
        VAR_3[1] = VAR_4[1];
}
