
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float h; float w; } ;
typedef TYPE_1__ image ;
struct TYPE_6__ {float rad; float scale; int w; int h; float dx; float dy; float aspect; int member_0; } ;
typedef TYPE_2__ augment_args ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 float FUNC_1 (float) ;
 int FUNC_2 (float,float) ;

augment_args FUNC_3(image VAR_1, float VAR_2, float VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    augment_args VAR_8 = {0};
    VAR_3 = FUNC_1(VAR_3);
    int VAR_9 = FUNC_0(VAR_4, VAR_5);
    int VAR_10 = (VAR_1.h < VAR_1.w*VAR_3) ? VAR_1.h : VAR_1.w*VAR_3;
    float VAR_11 = (float)VAR_9 / VAR_10;

    float VAR_12 = FUNC_2(-VAR_2, VAR_2) * VAR_0 / 360.;

    float VAR_13 = (VAR_1.w*VAR_11/VAR_3 - VAR_6) / 2.;
    float VAR_14 = (VAR_1.h*VAR_11 - VAR_6) / 2.;


    VAR_13 = FUNC_2(-VAR_13, VAR_13);
    VAR_14 = FUNC_2(-VAR_14, VAR_14);

    VAR_8.rad = VAR_12;
    VAR_8.scale = VAR_11;
    VAR_8.w = VAR_6;
    VAR_8.h = VAR_7;
    VAR_8.dx = VAR_13;
    VAR_8.dy = VAR_14;
    VAR_8.aspect = VAR_3;
    return VAR_8;
}
