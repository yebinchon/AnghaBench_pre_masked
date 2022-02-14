
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* preview; } ;
typedef TYPE_2__ signal_user_data_t ;
struct TYPE_5__ {int render_width; int render_height; } ;
typedef int GdkPixbuf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 (TYPE_2__*,int,int) ;

GdkPixbuf * FUNC_5(signal_user_data_t *VAR_1, GdkPixbuf *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6;
    GdkPixbuf * VAR_7;

    if (VAR_2 == ((void*)0))
    {
        return ((void*)0);
    }

    VAR_3 = FUNC_2(VAR_2);
    VAR_4 = FUNC_1(VAR_2);

    if (VAR_1->preview->render_width <= 0 || VAR_1->preview->render_height <= 0)
    {

        FUNC_4(VAR_1, VAR_3, VAR_4);
        FUNC_0(VAR_2);
        return VAR_2;
    }


    if (VAR_3 != VAR_1->preview->render_width ||
        VAR_4 != VAR_1->preview->render_height)
    {
        double VAR_8, VAR_9;

        VAR_8 = (double)VAR_1->preview->render_width / VAR_3;
        VAR_9 = (double)VAR_1->preview->render_height / VAR_4;
        if (VAR_8 <= VAR_9)
        {
            VAR_5 = VAR_1->preview->render_width;
            VAR_6 = VAR_4 * VAR_8;
        }
        else
        {
            VAR_5 = VAR_3 * VAR_9;
            VAR_6 = VAR_1->preview->render_height;
        }

        int VAR_10 = VAR_1->preview->render_width - VAR_5;
        if (VAR_10 > 0 && VAR_10 <= 16)
            VAR_5 = VAR_1->preview->render_width;

        VAR_10 = VAR_1->preview->render_height - VAR_6;
        if (VAR_10 > 0 && VAR_10 <= 16)
            VAR_6 = VAR_1->preview->render_height;

        VAR_7 = FUNC_3(VAR_2, VAR_5, VAR_6,
                                                 VAR_0);
        return VAR_7;
    }
    else
    {
        FUNC_0(VAR_2);
    }
    return VAR_2;
}
