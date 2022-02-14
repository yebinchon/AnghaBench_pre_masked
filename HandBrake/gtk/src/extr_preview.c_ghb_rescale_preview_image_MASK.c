
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int builder; TYPE_1__* preview; } ;
typedef TYPE_2__ signal_user_data_t ;
struct TYPE_8__ {double width; double height; int pix; int scaled_pix; scalar_t__ render_width; } ;
typedef int GtkWidget ;


 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,double,double) ;
 int FUNC_5 (TYPE_2__*,int ) ;

void
FUNC_6(signal_user_data_t *VAR_0)
{
    FUNC_3(VAR_0);
    if (VAR_0->preview->width <= 0 || VAR_0->preview->height <= 0)
    {
        return;
    }
    double VAR_1 = (double)VAR_0->preview->render_width / VAR_0->preview->width;
    FUNC_4(VAR_0, VAR_0->preview->width * VAR_1,
                                VAR_0->preview->height * VAR_1);


    FUNC_5(VAR_0, VAR_0->preview->pix);


    VAR_0->preview->scaled_pix = FUNC_1(VAR_0, VAR_0->preview->pix);


    GtkWidget *VAR_2 = FUNC_0(VAR_0->builder, "preview_image");
    FUNC_2(VAR_2);
}
