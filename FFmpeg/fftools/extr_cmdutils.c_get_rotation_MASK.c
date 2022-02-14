
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int32_t ;
typedef int AVStream ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*) ;
 int * FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (double) ;
 int FUNC_4 (double) ;
 int FUNC_5 (double) ;

double FUNC_6(AVStream *VAR_2)
{
    uint8_t* VAR_3 = FUNC_2(VAR_2,
                                                     VAR_1, ((void*)0));
    double VAR_4 = 0;
    if (VAR_3)
        VAR_4 = -FUNC_0((int32_t*) VAR_3);

    VAR_4 -= 360*FUNC_4(VAR_4/360 + 0.9/360);

    if (FUNC_3(VAR_4 - 90*FUNC_5(VAR_4/90)) > 2)
        FUNC_1(((void*)0), VAR_0, "Odd rotation angle.\n"
               "If you want to help, upload a sample "
               "of this file to ftp://upload.ffmpeg.org/incoming/ "
               "and contact the ffmpeg-devel mailing list. (ffmpeg-devel@ffmpeg.org)");

    return VAR_4;
}
