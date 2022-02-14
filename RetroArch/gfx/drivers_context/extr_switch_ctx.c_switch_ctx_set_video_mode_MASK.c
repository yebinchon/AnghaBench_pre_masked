
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_3__ {scalar_t__ height; int width; } ;
struct TYPE_4__ {int refresh_rate; int width; scalar_t__ height; int win; int egl; TYPE_1__ native_window; } ;
typedef TYPE_2__ switch_ctx_data_t ;
typedef int EGLint ;




 int FUNC_0 () ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,scalar_t__,int ,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*,int *,scalar_t__*) ;

__attribute__((used)) static bool FUNC_8(void *VAR_0,
                                      video_frame_info_t *VAR_1,
                                      unsigned VAR_2, unsigned VAR_3,
                                      bool VAR_4)
{

    static const EGLint VAR_5[] =
        {
            129, 2,
            128};

    switch_ctx_data_t *VAR_6 = (switch_ctx_data_t *)VAR_0;

    FUNC_7(VAR_0, &VAR_6->width, &VAR_6->height);

    VAR_6->native_window.width = VAR_6->width;
    VAR_6->native_window.height = VAR_6->height;

    VAR_6->refresh_rate = 60;
    FUNC_4(VAR_6->win, 0, 1080 - VAR_6->height, VAR_6->width, 1080);

    return 1;

error:
    FUNC_5("[NXGL]: EGL error: %d.\n", FUNC_0());
    FUNC_6(VAR_0);

    return 0;
}
