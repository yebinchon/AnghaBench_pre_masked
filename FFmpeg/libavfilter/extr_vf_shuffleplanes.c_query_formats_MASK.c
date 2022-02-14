
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int flags; scalar_t__ log2_chroma_w; scalar_t__ log2_chroma_h; } ;
struct TYPE_7__ {int* map; } ;
typedef TYPE_1__ ShufflePlanesContext ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_2)
{
    AVFilterFormats *VAR_3 = ((void*)0);
    ShufflePlanesContext *VAR_4 = VAR_2->priv;
    int VAR_5, VAR_6, VAR_7;

    for (VAR_5 = 0; FUNC_1(VAR_5); VAR_5++) {
        const AVPixFmtDescriptor *VAR_8 = FUNC_1(VAR_5);
        int VAR_9 = FUNC_0(VAR_5);

        if (!(VAR_8->flags & VAR_1) &&
            !(VAR_8->flags & VAR_0)) {
            for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
                if (VAR_4->map[VAR_7] >= VAR_9)
                    break;

                if ((VAR_8->log2_chroma_h || VAR_8->log2_chroma_w) &&
                    (VAR_7 == 1 || VAR_7 == 2) != (VAR_4->map[VAR_7] == 1 || VAR_4->map[VAR_7] == 2))
                    break;
            }

            if (VAR_7 != 4)
                continue;
            if ((VAR_6 = FUNC_2(&VAR_3, VAR_5)) < 0) {
                FUNC_3(&VAR_3);
                return VAR_6;
            }
        }
    }

    return FUNC_4(VAR_2, VAR_3);
}
