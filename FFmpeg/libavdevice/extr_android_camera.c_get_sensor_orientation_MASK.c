
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * i32; int * u8; } ;
struct TYPE_10__ {TYPE_1__ data; } ;
struct TYPE_9__ {TYPE_2__* priv_data; } ;
struct TYPE_8__ {int sensor_orientation; int lens_facing; int camera_metadata; } ;
typedef TYPE_2__ AndroidCameraCtx ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ ACameraMetadata_const_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_4__*) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_2)
{
    AndroidCameraCtx *VAR_3 = VAR_2->priv_data;
    ACameraMetadata_const_entry VAR_4;
    ACameraMetadata_const_entry VAR_5;

    FUNC_0(VAR_3->camera_metadata,
                                  VAR_0, &VAR_4);
    FUNC_0(VAR_3->camera_metadata,
                                  VAR_1, &VAR_5);

    VAR_3->lens_facing = VAR_4.data.u8[0];
    VAR_3->sensor_orientation = VAR_5.data.i32[0];
}
