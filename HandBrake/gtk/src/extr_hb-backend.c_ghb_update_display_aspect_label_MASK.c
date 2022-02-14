
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef double gint ;
typedef int gchar ;


 int FUNC_0 (int *) ;
 double FUNC_1 (int ,char*) ;
 int * FUNC_2 (double,double) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;

void
FUNC_5(signal_user_data_t *VAR_0)
{
    gint VAR_1, VAR_2;
    gint VAR_3, VAR_4;
    double VAR_5;
    gchar *VAR_6;

    VAR_1 = FUNC_1(VAR_0->settings, "scale_width");
    VAR_2 = FUNC_1(VAR_0->settings, "scale_height");
    VAR_3 = FUNC_1(VAR_0->settings, "PicturePARWidth");
    VAR_4 = FUNC_1(VAR_0->settings, "PicturePARHeight");
    VAR_5 = (double)VAR_1 * VAR_3 / VAR_4;
    VAR_6 = FUNC_2(VAR_5, VAR_2);
    FUNC_4(VAR_0, "display_aspect", FUNC_3(VAR_6));
    FUNC_0(VAR_6);
}
