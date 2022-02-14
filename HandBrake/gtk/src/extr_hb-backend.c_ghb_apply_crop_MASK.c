
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; } ;
struct TYPE_5__ {int* crop; TYPE_1__ geometry; } ;
typedef TYPE_2__ hb_title_t ;
typedef int gint ;
typedef scalar_t__ gboolean ;
typedef int GhbValue ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*) ;

void
FUNC_6(GhbValue *VAR_0, const hb_title_t * VAR_1)
{
    gboolean VAR_2, VAR_3;
    gint VAR_4[4] = {0,};

    VAR_2 = FUNC_2(VAR_0, "PictureAutoCrop");


    VAR_3 = FUNC_2(VAR_0, "PictureLooseCrop");

    if (VAR_2)
    {
        VAR_4[0] = VAR_1->crop[0];
        VAR_4[1] = VAR_1->crop[1];
        VAR_4[2] = VAR_1->crop[2];
        VAR_4[3] = VAR_1->crop[3];
    }
    else
    {
        VAR_4[0] = FUNC_3(VAR_0, "PictureTopCrop");
        VAR_4[1] = FUNC_3(VAR_0, "PictureBottomCrop");
        VAR_4[2] = FUNC_3(VAR_0, "PictureLeftCrop");
        VAR_4[3] = FUNC_3(VAR_0, "PictureRightCrop");
    }
    if (VAR_3)
    {
        gint VAR_5, VAR_6;
        gint VAR_7, VAR_8, VAR_9, VAR_10;
        gint VAR_11;

        VAR_11 = FUNC_5(VAR_0, "PictureModulus");
        if (VAR_11 <= 0)
            VAR_11 = 16;


        VAR_7 = VAR_1->geometry.width - VAR_4[2] - VAR_4[3];
        VAR_8 = VAR_1->geometry.height - VAR_4[0] - VAR_4[1];
        VAR_9 = FUNC_1(VAR_7, VAR_11);
        VAR_10 = FUNC_1(VAR_8, VAR_11);

        VAR_5 = FUNC_0((VAR_8 - VAR_10) / 2);
        VAR_6 = VAR_8 - VAR_10 - VAR_5;
        VAR_4[0] += VAR_5;
        VAR_4[1] += VAR_6;
        VAR_5 = FUNC_0((VAR_7 - VAR_9) / 2);
        VAR_6 = VAR_7 - VAR_9 - VAR_5;
        VAR_4[2] += VAR_5;
        VAR_4[3] += VAR_6;
    }

    if (VAR_1->geometry.height - VAR_4[0] -VAR_4[1] < 16)
    {
        VAR_4[0] = VAR_1->geometry.height - VAR_4[1] - 16;
        if (VAR_4[0] < 0)
        {
            VAR_4[1] += VAR_4[0];
            VAR_4[0] = 0;
        }
    }
    if (VAR_1->geometry.width - VAR_4[2] - VAR_4[3] < 16)
    {
        VAR_4[2] = VAR_1->geometry.width - VAR_4[3] - 16;
        if (VAR_4[2] < 0)
        {
            VAR_4[3] += VAR_4[2];
            VAR_4[2] = 0;
        }
    }
    FUNC_4(VAR_0, "PictureTopCrop", VAR_4[0]);
    FUNC_4(VAR_0, "PictureBottomCrop", VAR_4[1]);
    FUNC_4(VAR_0, "PictureLeftCrop", VAR_4[2]);
    FUNC_4(VAR_0, "PictureRightCrop", VAR_4[3]);
}
