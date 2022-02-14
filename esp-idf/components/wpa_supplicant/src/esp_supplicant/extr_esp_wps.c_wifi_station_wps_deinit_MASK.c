
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_sm {int * wps; struct wps_sm* wps_ctx; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct wps_sm* VAR_4 ;
 int FUNC_2 (struct wps_sm*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

int
FUNC_5(void)
{
    struct wps_sm *VAR_5 = VAR_4;

    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_1(VAR_3);
    FUNC_1(VAR_2);
    FUNC_0(((void*)0));

    if (VAR_5->dev) {
        FUNC_4(VAR_5->dev);
        VAR_5->dev = ((void*)0);
    }
    if (VAR_5->wps_ctx) {
        FUNC_2(VAR_5->wps_ctx);
        VAR_5->wps_ctx = ((void*)0);
    }
    if (VAR_5->wps) {
        FUNC_3();
        VAR_5->wps = ((void*)0);
    }
    if (VAR_5) {
        FUNC_2(VAR_4);
        VAR_4 = ((void*)0);
    }

    return VAR_1;
}
