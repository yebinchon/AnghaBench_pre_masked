
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_4__ {int height; int width; } ;
struct TYPE_3__ {int refresh_rate; TYPE_2__ native_window; int egl; int height; int width; } ;
typedef TYPE_1__ orbis_ctx_data_t ;
typedef int EGLint ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 () ;
 int FUNC_4 (void*) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static bool FUNC_6(void *VAR_2,
                                      video_frame_info_t *VAR_3,
                                      unsigned VAR_4, unsigned VAR_5,
                                      bool VAR_6)
{

    static const EGLint VAR_7[] =
        {
            129, 2,
            128};

    orbis_ctx_data_t *VAR_8 = (orbis_ctx_data_t *)VAR_2;

    VAR_8->width = VAR_1;
    VAR_8->height = VAR_0;

    VAR_8->native_window.width = VAR_8->width;
    VAR_8->native_window.height = VAR_8->height;

    VAR_8->refresh_rate = 60;
    return 1;

error:
    FUNC_5("[ctx_orbis]: EGL error: %d.\n", FUNC_0());
    FUNC_4(VAR_2);

    return 0;
}
