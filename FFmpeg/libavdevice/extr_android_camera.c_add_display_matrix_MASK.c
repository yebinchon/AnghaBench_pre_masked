
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
typedef int display_matrix ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__ lens_facing; int sensor_orientation; } ;
typedef TYPE_1__ AndroidCameraCtx ;
typedef int AVStream ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_3, AVStream *VAR_4)
{
    AndroidCameraCtx *VAR_5 = VAR_3->priv_data;
    uint8_t *VAR_6;
    int32_t VAR_7[9];

    FUNC_2(VAR_7, VAR_5->sensor_orientation);

    if (VAR_5->lens_facing == VAR_0) {
        FUNC_1(VAR_7, 1, 0);
    }

    VAR_6 = FUNC_3(VAR_4,
            VAR_1, sizeof(VAR_7));

    if (!VAR_6) {
        return FUNC_0(VAR_2);
    }

    FUNC_4(VAR_6, VAR_7, sizeof(VAR_7));

    return 0;
}
