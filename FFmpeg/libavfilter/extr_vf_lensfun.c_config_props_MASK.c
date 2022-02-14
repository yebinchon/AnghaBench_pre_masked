
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int w; int h; TYPE_4__* dst; } ;
struct TYPE_7__ {int mode; float* interpolation; scalar_t__ interpolation_type; void* distortion_coords; scalar_t__ modifier; int reverse; int target_geometry; int scale; int focus_distance; int aperture; int focal_length; scalar_t__ lens; TYPE_1__* camera; } ;
struct TYPE_6__ {int CropFactor; } ;
typedef TYPE_2__ LensfunContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_1 (int,int) ;
 float FUNC_2 (float) ;
 int FUNC_3 (scalar_t__,int ,int ,int,int,void*) ;
 int FUNC_4 (scalar_t__,int ,int ,int,int,void*) ;
 int FUNC_5 (scalar_t__,int ,int ,int,int,void*) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ,int ,int ,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int,int) ;
 float FUNC_8 (float) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_13)
{
    AVFilterContext *VAR_14 = VAR_13->dst;
    LensfunContext *VAR_15 = VAR_14->priv;
    int VAR_16;
    float VAR_17;
    int VAR_18 = 0;

    if (!VAR_15->modifier) {
        if (VAR_15->camera && VAR_15->lens) {
            VAR_15->modifier = FUNC_7(VAR_15->lens,
                                                VAR_15->camera->CropFactor,
                                                VAR_13->w,
                                                VAR_13->h);
            if (VAR_15->mode & VAR_12)
                VAR_18 |= VAR_9;
            if (VAR_15->mode & VAR_2)
                VAR_18 |= VAR_5 | VAR_6 | VAR_7;
            if (VAR_15->mode & VAR_11)
                VAR_18 |= VAR_8;
            FUNC_6(VAR_15->modifier,
                                   VAR_15->lens,
                                   VAR_10,
                                   VAR_15->focal_length,
                                   VAR_15->aperture,
                                   VAR_15->focus_distance,
                                   VAR_15->scale,
                                   VAR_15->target_geometry,
                                   VAR_18,
                                   VAR_15->reverse);
        } else {

            return VAR_0;
        }
    }

    if (!VAR_15->distortion_coords) {
        if (VAR_15->mode & VAR_11) {
            VAR_15->distortion_coords = FUNC_1(VAR_13->w * VAR_13->h, sizeof(float) * 2 * 3);
            if (!VAR_15->distortion_coords)
                return FUNC_0(VAR_1);
            if (VAR_15->mode & VAR_2) {

                FUNC_5(VAR_15->modifier,
                                                               0, 0,
                                                               VAR_13->w, VAR_13->h,
                                                               VAR_15->distortion_coords);
            } else {

                FUNC_4(VAR_15->modifier,
                                                      0, 0,
                                                      VAR_13->w, VAR_13->h,
                                                      VAR_15->distortion_coords);
            }
        } else if (VAR_15->mode & VAR_2) {
            VAR_15->distortion_coords = FUNC_1(VAR_13->w * VAR_13->h, sizeof(float) * 2);
            if (!VAR_15->distortion_coords)
                return FUNC_0(VAR_1);

            FUNC_3(VAR_15->modifier,
                                                  0, 0,
                                                  VAR_13->w, VAR_13->h,
                                                  VAR_15->distortion_coords);
        }
    }

    if (!VAR_15->interpolation)
        if (VAR_15->interpolation_type == VAR_3) {
            VAR_15->interpolation = FUNC_1(VAR_4, sizeof(float) * 4);
            if (!VAR_15->interpolation)
                return FUNC_0(VAR_1);
            for (VAR_16 = 0; VAR_16 < 4 * VAR_4; ++VAR_16) {
                if (VAR_16 == 0) {
                    VAR_15->interpolation[VAR_16] = 1.0f;
                } else {
                    VAR_17 = FUNC_8((float)VAR_16 / VAR_4);
                    VAR_15->interpolation[VAR_16] = FUNC_2(VAR_17);
                }
            }
        }

    return 0;
}
