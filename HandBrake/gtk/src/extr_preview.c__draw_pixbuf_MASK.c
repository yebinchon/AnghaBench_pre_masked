
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* preview; } ;
typedef TYPE_2__ signal_user_data_t ;
typedef int cairo_t ;
struct TYPE_4__ {int render_width; int render_height; } ;
typedef int GdkPixbuf ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,int *,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(signal_user_data_t * VAR_1, cairo_t *VAR_2, GdkPixbuf *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7;

    FUNC_5(VAR_2);
    FUNC_3(VAR_2, 0, 0, VAR_1->preview->render_width,
                              VAR_1->preview->render_height);
    FUNC_6(VAR_2, VAR_0);
    FUNC_1(VAR_2);
    FUNC_4(VAR_2);

    VAR_4 = FUNC_10(VAR_3);
    VAR_5 = FUNC_9(VAR_3);
    VAR_6 = FUNC_0((VAR_1->preview->render_width - VAR_4) / 2, 0);
    VAR_7 = FUNC_0((VAR_1->preview->render_height - VAR_5) / 2, 0);
    if (VAR_7 > 0 || VAR_6 > 0)
    {
        FUNC_7(VAR_2, VAR_6, VAR_7);
    }

    FUNC_8(VAR_2, VAR_3, 0, 0);
    FUNC_2(VAR_2);
}
