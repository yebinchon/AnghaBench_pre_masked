
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_dict_t ;
typedef int GhbValue ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,char*,int) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;

void FUNC_12(GhbValue *VAR_1)
{
    GhbValue *VAR_2, *VAR_3;

    VAR_2 = FUNC_6(VAR_1);
    VAR_3 = FUNC_0(VAR_1, "Job");


    FUNC_10(VAR_2, VAR_3);
    FUNC_11(VAR_2, VAR_3);
    FUNC_9(VAR_2, VAR_3);


    GhbValue *VAR_4, *VAR_5;
    int VAR_6, VAR_7, VAR_8[4];

    VAR_4 = FUNC_5(VAR_1);
    VAR_6 = FUNC_1(VAR_1, "scale_width");
    VAR_7 = FUNC_1(VAR_1, "scale_height");

    VAR_8[0] = FUNC_1(VAR_1, "PictureTopCrop");
    VAR_8[1] = FUNC_1(VAR_1, "PictureBottomCrop");
    VAR_8[2] = FUNC_1(VAR_1, "PictureLeftCrop");
    VAR_8[3] = FUNC_1(VAR_1, "PictureRightCrop");

    hb_dict_t * VAR_9 = FUNC_2();
    FUNC_4(VAR_9, "width", VAR_6);
    FUNC_4(VAR_9, "height", VAR_7);
    FUNC_4(VAR_9, "crop-top", VAR_8[0]);
    FUNC_4(VAR_9, "crop-bottom", VAR_8[1]);
    FUNC_4(VAR_9, "crop-left", VAR_8[2]);
    FUNC_4(VAR_9, "crop-right", VAR_8[3]);

    VAR_5 = FUNC_2();
    FUNC_4(VAR_5, "ID", VAR_0);
    FUNC_3(VAR_5, "Settings", VAR_9);
    FUNC_8(VAR_4, VAR_5);

    FUNC_7(&VAR_2);
}
