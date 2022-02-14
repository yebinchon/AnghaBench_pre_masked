
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int image ;
struct TYPE_3__ {int aspect; int dy; int dx; int h; int w; int scale; int rad; } ;
typedef TYPE_1__ augment_args ;


 TYPE_1__ FUNC_0 (int ,float,float,int,int,int,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ) ;

image FUNC_2(image VAR_0, float VAR_1, float VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    augment_args VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    image VAR_8 = FUNC_1(VAR_0, VAR_7.rad, VAR_7.scale, VAR_7.w, VAR_7.h, VAR_7.dx, VAR_7.dy, VAR_7.aspect);
    return VAR_8;
}
