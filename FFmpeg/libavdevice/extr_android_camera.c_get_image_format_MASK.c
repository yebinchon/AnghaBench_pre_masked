
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int image_format; } ;
typedef TYPE_1__ AndroidCameraCtx ;
typedef TYPE_2__ AVFormatContext ;
typedef int AImage ;


 int FUNC_0 (int *,int,int **,int*) ;
 int FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*,int ,char*,...) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_6, AImage *VAR_7)
{
    AndroidCameraCtx *VAR_8 = VAR_6->priv_data;
    int32_t VAR_9[2];
    uint8_t *VAR_10[2];
    int VAR_11[2];

    for (int VAR_12 = 0; VAR_12 < 2; VAR_12++) {
        FUNC_1(VAR_7, VAR_12 + 1, &VAR_9[VAR_12]);
        FUNC_0(VAR_7, VAR_12 + 1, &VAR_10[VAR_12], &VAR_11[VAR_12]);
    }

    if (VAR_9[0] != VAR_9[1]) {
        FUNC_3(VAR_6, VAR_1,
               "Pixel strides of U and V plane should have been the same.\n");
        return VAR_0;
    }

    switch (VAR_9[0]) {
        case 1:
            VAR_8->image_format = VAR_4;
            break;
        case 2:
            if (VAR_10[0] < VAR_10[1]) {
                VAR_8->image_format = VAR_2;
            } else {
                VAR_8->image_format = VAR_3;
            }
            break;
        default:
            FUNC_3(VAR_6, VAR_1,
                   "Unknown pixel stride %d of U and V plane, cannot determine camera image format.\n",
                   VAR_9[0]);
            return FUNC_2(VAR_5);
    }

    return 0;
}
