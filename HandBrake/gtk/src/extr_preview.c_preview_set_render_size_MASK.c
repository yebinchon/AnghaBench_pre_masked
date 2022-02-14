
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* preview; int builder; } ;
typedef TYPE_2__ signal_user_data_t ;
struct TYPE_8__ {double min_aspect; double max_aspect; int width_inc; int height_inc; } ;
struct TYPE_6__ {int render_width; int render_height; } ;
typedef int GtkWindow ;
typedef int GtkWidget ;
typedef int GhbSurface ;
typedef TYPE_3__ GdkGeometry ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*,int) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *) ;

void
FUNC_8(signal_user_data_t *VAR_2, int VAR_3, int VAR_4)
{
    GtkWidget * VAR_5;
    GtkWindow * VAR_6;
    GhbSurface * VAR_7;
    GdkGeometry VAR_8;

    VAR_5 = FUNC_0 (VAR_2->builder, "preview_image");
    FUNC_5(VAR_5, VAR_3, VAR_4);
    VAR_6 = FUNC_2(FUNC_0(VAR_2->builder, "preview_window"));
    VAR_7 = FUNC_4(FUNC_1(VAR_6));
    FUNC_7(VAR_6);
    if (VAR_7 != ((void*)0))
    {
        VAR_8.min_aspect = (double)(VAR_3 - 4) / VAR_4;
        VAR_8.max_aspect = (double)(VAR_3 + 4) / VAR_4;
        VAR_8.width_inc = VAR_8.height_inc = 2;
        FUNC_3(VAR_7, &VAR_8,
                                       VAR_0|VAR_1);
    }
    FUNC_6(VAR_6, VAR_3, VAR_4);

    VAR_2->preview->render_width = VAR_3;
    VAR_2->preview->render_height = VAR_4;
}
