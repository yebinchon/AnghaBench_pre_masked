
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* ulg ;
typedef void* uch ;
typedef scalar_t__ png_uint_32 ;
typedef int png_structp ;
typedef int png_infop ;
typedef int png_fixed_point ;
typedef TYPE_1__* png_color_16p ;
struct TYPE_6__ {int bg_red; int bg_green; int bg_blue; int display_exponent; int rowbytes; int (* mainprog_init ) () ;int channels; int passes; scalar_t__ need_bgcolor; void* height; void* width; } ;
typedef TYPE_2__ mainprog_info ;
struct TYPE_5__ {int red; int green; int blue; int gray; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,scalar_t__*,scalar_t__*,int*,int*,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_1__**) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int*) ;
 scalar_t__ FUNC_6 (int ,int ,int*) ;
 TYPE_2__* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int,double) ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int VAR_4 ;
 int FUNC_18 () ;

__attribute__((used)) static void FUNC_19(png_structp VAR_5, png_infop VAR_6)
{
    mainprog_info *VAR_7;
    int VAR_8, VAR_9;
    png_uint_32 VAR_10, VAR_11;



    png_fixed_point VAR_12;
    VAR_7 = FUNC_7(VAR_5);

    if (VAR_7 == ((void*)0)) {
        FUNC_1(VAR_4,
          "readpng2 error:  main struct not recoverable in info_callback.\n");
        FUNC_0(VAR_4);
        return;







    }




    FUNC_2(VAR_5, VAR_6, &VAR_10, &VAR_11, &VAR_9, &VAR_8,
       ((void*)0), ((void*)0), ((void*)0));
    VAR_7->width = (ulg)VAR_10;
    VAR_7->height = (ulg)VAR_11;





    if (VAR_7->need_bgcolor)
    {
        png_color_16p VAR_13;




        if (FUNC_3(VAR_5, VAR_6, &VAR_13))
        {




           if (VAR_9 == 16) {
               VAR_7->bg_red = VAR_13->red >> 8;
               VAR_7->bg_green = VAR_13->green >> 8;
               VAR_7->bg_blue = VAR_13->blue >> 8;
           } else if (VAR_8 == VAR_0 && VAR_9 < 8) {
               if (VAR_9 == 1)
                   VAR_7->bg_red = VAR_7->bg_green =
                     VAR_7->bg_blue = VAR_13->gray? 255 : 0;
               else if (VAR_9 == 2)
                   VAR_7->bg_red = VAR_7->bg_green =
                     VAR_7->bg_blue = (255/3) * VAR_13->gray;
               else
                   VAR_7->bg_red = VAR_7->bg_green =
                     VAR_7->bg_blue = (255/15) * VAR_13->gray;
           } else {
               VAR_7->bg_red = (uch)VAR_13->red;
               VAR_7->bg_green = (uch)VAR_13->green;
               VAR_7->bg_blue = (uch)VAR_13->blue;
           }
        }
    }







    if (VAR_8 == VAR_2)
        FUNC_11(VAR_5);
    if (VAR_8 == VAR_0 && VAR_9 < 8)
        FUNC_11(VAR_5);
    if (FUNC_9(VAR_5, VAR_6, VAR_3))
        FUNC_11(VAR_5);
    if (VAR_8 == VAR_0 ||
        VAR_8 == VAR_1)
        FUNC_14(VAR_5);
    if (FUNC_6(VAR_5, VAR_6, &VAR_12))
        FUNC_13(VAR_5,
            (png_fixed_point)(100000*VAR_7->display_exponent+.5), VAR_12);
    else
        FUNC_13(VAR_5,
            (png_fixed_point)(100000*VAR_7->display_exponent+.5), 45455);




    VAR_7->passes = FUNC_15(VAR_5);





    FUNC_10(VAR_5, VAR_6);

    VAR_7->rowbytes = (int)FUNC_8(VAR_5, VAR_6);
    VAR_7->channels = FUNC_4(VAR_5, VAR_6);







    (*VAR_7->mainprog_init)();




    return;
}
