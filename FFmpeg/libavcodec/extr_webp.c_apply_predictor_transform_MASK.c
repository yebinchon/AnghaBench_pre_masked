
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum PredictionMode { ____Placeholder_PredictionMode } PredictionMode ;
struct TYPE_6__ {int avctx; TYPE_2__* image; } ;
typedef TYPE_1__ WebPContext ;
struct TYPE_8__ {int height; int width; } ;
struct TYPE_7__ {int size_reduction; TYPE_3__* frame; } ;
typedef TYPE_2__ ImageContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int,int,int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,char*,int) ;
 int FUNC_2 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_3(WebPContext *VAR_7)
{
    ImageContext *VAR_8 = &VAR_7->image[VAR_2];
    ImageContext *VAR_9 = &VAR_7->image[VAR_3];
    int VAR_10, VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_8->frame->height; VAR_11++) {
        for (VAR_10 = 0; VAR_10 < VAR_8->frame->width; VAR_10++) {
            int VAR_12 = VAR_10 >> VAR_9->size_reduction;
            int VAR_13 = VAR_11 >> VAR_9->size_reduction;
            enum PredictionMode VAR_14 = FUNC_0(VAR_9->frame, VAR_12, VAR_13, 2);

            if (VAR_10 == 0) {
                if (VAR_11 == 0)
                    VAR_14 = VAR_4;
                else
                    VAR_14 = VAR_6;
            } else if (VAR_11 == 0)
                VAR_14 = VAR_5;

            if (VAR_14 > 13) {
                FUNC_1(VAR_7->avctx, VAR_1,
                       "invalid predictor mode: %d\n", VAR_14);
                return VAR_0;
            }
            FUNC_2(VAR_8->frame, VAR_14, VAR_10, VAR_11);
        }
    }
    return 0;
}
