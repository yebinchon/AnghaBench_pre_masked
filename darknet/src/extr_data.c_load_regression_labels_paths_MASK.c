
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** vals; } ;
typedef TYPE_1__ matrix ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,char*,char*) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,int *) ;
 TYPE_1__ FUNC_4 (int,int) ;

matrix FUNC_5(char **VAR_0, int VAR_1, int VAR_2)
{
    matrix VAR_3 = FUNC_4(VAR_1, VAR_2);
    int VAR_4,VAR_5;
    for(VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4){
        char VAR_6[4096];
        FUNC_1(VAR_0[VAR_4], "images", "labels", VAR_6);
        FUNC_1(VAR_6, "JPEGImages", "labels", VAR_6);
        FUNC_1(VAR_6, ".BMP", ".txt", VAR_6);
        FUNC_1(VAR_6, ".JPEG", ".txt", VAR_6);
        FUNC_1(VAR_6, ".JPG", ".txt", VAR_6);
        FUNC_1(VAR_6, ".JPeG", ".txt", VAR_6);
        FUNC_1(VAR_6, ".Jpeg", ".txt", VAR_6);
        FUNC_1(VAR_6, ".PNG", ".txt", VAR_6);
        FUNC_1(VAR_6, ".TIF", ".txt", VAR_6);
        FUNC_1(VAR_6, ".bmp", ".txt", VAR_6);
        FUNC_1(VAR_6, ".jpeg", ".txt", VAR_6);
        FUNC_1(VAR_6, ".jpg", ".txt", VAR_6);
        FUNC_1(VAR_6, ".png", ".txt", VAR_6);
        FUNC_1(VAR_6, ".tif", ".txt", VAR_6);

        FILE *VAR_7 = FUNC_2(VAR_6, "r");
        for(VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5){
            FUNC_3(VAR_7, "%f", &(VAR_3.vals[VAR_4][VAR_5]));
        }
        FUNC_0(VAR_7);
    }
    return VAR_3;
}
