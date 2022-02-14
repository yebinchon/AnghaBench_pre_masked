
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sad ;
typedef int * av_pixelutils_sad_fn ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (void*,int ,char*) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 (int **,int **,int) ;
 int ** VAR_1 ;

av_pixelutils_sad_fn FUNC_4(int VAR_2, int VAR_3, int VAR_4, void *VAR_5)
{

    FUNC_1(VAR_5, VAR_0, "pixelutils support is required "
           "but libavutil is not compiled with it\n");
    return ((void*)0);
}
