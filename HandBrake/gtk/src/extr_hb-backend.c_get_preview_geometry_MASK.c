
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int prefs; int settings; } ;
typedef TYPE_4__ signal_user_data_t ;
struct TYPE_13__ {int width; int height; int par; } ;
struct TYPE_16__ {TYPE_2__ geometry; } ;
typedef TYPE_5__ hb_title_t ;
struct TYPE_17__ {int width; int height; int par; } ;
typedef TYPE_6__ hb_geometry_t ;
struct TYPE_12__ {void* den; void* num; } ;
struct TYPE_14__ {void* height; void* width; TYPE_1__ par; } ;
struct TYPE_18__ {scalar_t__ mode; int modulus; int* crop; TYPE_3__ geometry; scalar_t__ maxHeight; scalar_t__ maxWidth; scalar_t__ itu_par; int keep; } ;
typedef TYPE_7__ hb_geometry_settings_t ;
typedef int gdouble ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 void* FUNC_1 (int ,char*) ;
 void* FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(signal_user_data_t *VAR_3, const hb_title_t *VAR_4,
                     hb_geometry_t *VAR_5, hb_geometry_settings_t *VAR_6)
{
    VAR_5->width = VAR_4->geometry.width;
    VAR_5->height = VAR_4->geometry.height;
    VAR_5->par = VAR_4->geometry.par;

    VAR_6->mode = FUNC_2(VAR_3->settings, "PicturePAR");
    VAR_6->keep = (FUNC_0(VAR_3->settings, "PictureKeepRatio") ||
                                 VAR_6->mode == VAR_1 ||
                                 VAR_6->mode == VAR_0) ?
                                 VAR_2 : 0;
    VAR_6->itu_par = 0;
    VAR_6->modulus = FUNC_2(VAR_3->settings, "PictureModulus");
    VAR_6->crop[0] = FUNC_1(VAR_3->settings, "PictureTopCrop");
    VAR_6->crop[1] = FUNC_1(VAR_3->settings, "PictureBottomCrop");
    VAR_6->crop[2] = FUNC_1(VAR_3->settings, "PictureLeftCrop");
    VAR_6->crop[3] = FUNC_1(VAR_3->settings, "PictureRightCrop");
    VAR_6->geometry.width = FUNC_1(VAR_3->settings, "scale_width");
    VAR_6->geometry.height = FUNC_1(VAR_3->settings, "scale_height");
    VAR_6->geometry.par.num = FUNC_1(VAR_3->settings, "PicturePARWidth");
    VAR_6->geometry.par.den = FUNC_1(VAR_3->settings, "PicturePARHeight");
    VAR_6->maxWidth = 0;
    VAR_6->maxHeight = 0;
    if (FUNC_0(VAR_3->prefs, "preview_show_crop"))
    {
        gdouble VAR_7 = (gdouble)VAR_6->geometry.width /
                  (VAR_4->geometry.width - VAR_6->crop[2] - VAR_6->crop[3]);
        gdouble VAR_8 = (gdouble)VAR_6->geometry.height /
                  (VAR_4->geometry.height - VAR_6->crop[0] - VAR_6->crop[1]);

        VAR_6->geometry.width += VAR_7 * (VAR_6->crop[2] + VAR_6->crop[3]);
        VAR_6->geometry.height += VAR_8 * (VAR_6->crop[0] + VAR_6->crop[1]);
        VAR_6->crop[0] = 0;
        VAR_6->crop[1] = 0;
        VAR_6->crop[2] = 0;
        VAR_6->crop[3] = 0;
        VAR_6->modulus = 2;
    }
}
