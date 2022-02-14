
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int** mvs; scalar_t__ sb; struct TYPE_10__* subs; } ;
struct TYPE_9__ {int * pixel_refs; int * pixel_weights; int * pixel_mvs; TYPE_2__* frames; } ;
struct TYPE_8__ {TYPE_1__* avf; } ;
struct TYPE_7__ {int width; int height; } ;
typedef int PixelWeights ;
typedef int PixelRefs ;
typedef int PixelMVS ;
typedef TYPE_3__ MIContext ;
typedef TYPE_4__ Block ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(MIContext *VAR_1, Block *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;
    int VAR_9 = VAR_1->frames[0].avf->width;
    int VAR_10 = VAR_1->frames[0].avf->height;

    for (VAR_8 = 0; VAR_8 < 2; VAR_8++)
        for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
            Block *VAR_11 = &VAR_2->subs[VAR_7 + VAR_8 * 2];

            if (VAR_11->sb)
                FUNC_1(VAR_1, VAR_11, VAR_3 + (VAR_7 << (VAR_5 - 1)), VAR_4 + (VAR_8 << (VAR_5 - 1)), VAR_5 - 1, VAR_6);
            else {
                int VAR_12, VAR_13;
                int VAR_14 = VAR_11->mvs[0][0] * 2;
                int VAR_15 = VAR_11->mvs[0][1] * 2;

                int VAR_16 = VAR_3 + (VAR_7 << (VAR_5 - 1));
                int VAR_17 = VAR_4 + (VAR_8 << (VAR_5 - 1));
                int VAR_18 = VAR_16 + (1 << (VAR_5 - 1));
                int VAR_19 = VAR_17 + (1 << (VAR_5 - 1));

                for (VAR_13 = VAR_17; VAR_13 < VAR_19; VAR_13++) {
                    int VAR_20 = -VAR_13;
                    int VAR_21 = VAR_10 - VAR_13 - 1;
                    for (VAR_12 = VAR_16; VAR_12 < VAR_18; VAR_12++) {
                        int VAR_22 = -VAR_12;
                        int VAR_23 = VAR_9 - VAR_12 - 1;
                        PixelMVS *VAR_24 = &VAR_1->pixel_mvs[VAR_12 + VAR_13 * VAR_9];
                        PixelWeights *VAR_25 = &VAR_1->pixel_weights[VAR_12 + VAR_13 * VAR_9];
                        PixelRefs *VAR_26 = &VAR_1->pixel_refs[VAR_12 + VAR_13 * VAR_9];

                        FUNC_0(VAR_0, VAR_14, VAR_15);
                    }
                }
            }
        }
}
