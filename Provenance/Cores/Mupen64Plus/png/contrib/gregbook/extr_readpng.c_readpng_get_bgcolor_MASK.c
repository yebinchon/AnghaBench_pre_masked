
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uch ;
typedef TYPE_1__* png_color_16p ;
struct TYPE_3__ {int red; int green; int blue; int gray; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int ,int ,TYPE_1__**) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(uch *VAR_6, uch *VAR_7, uch *VAR_8)
{
    png_color_16p VAR_9;





    if (FUNC_4(FUNC_3(VAR_5))) {
        FUNC_0(&VAR_5, &VAR_4, ((void*)0));
        return 2;
    }


    if (!FUNC_2(VAR_5, VAR_4, VAR_1))
        return 1;





    FUNC_1(VAR_5, VAR_4, &VAR_9);





    if (VAR_2 == 16) {
        *VAR_6 = VAR_9->red >> 8;
        *VAR_7 = VAR_9->green >> 8;
        *VAR_8 = VAR_9->blue >> 8;
    } else if (VAR_3 == VAR_0 && VAR_2 < 8) {
        if (VAR_2 == 1)
            *VAR_6 = *VAR_7 = *VAR_8 = VAR_9->gray? 255 : 0;
        else if (VAR_2 == 2)
            *VAR_6 = *VAR_7 = *VAR_8 = (255/3) * VAR_9->gray;
        else
            *VAR_6 = *VAR_7 = *VAR_8 = (255/15) * VAR_9->gray;
    } else {
        *VAR_6 = (uch)VAR_9->red;
        *VAR_7 = (uch)VAR_9->green;
        *VAR_8 = (uch)VAR_9->blue;
    }

    return 0;
}
