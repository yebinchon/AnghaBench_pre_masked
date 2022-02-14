
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int image ;
struct TYPE_3__ {int out_h; int out_w; int out_c; int output; } ;
typedef TYPE_1__ crop_layer ;


 int FUNC_0 (int,int,int,int ) ;

image FUNC_1(crop_layer VAR_0)
{
    int VAR_1 = VAR_0.out_h;
    int VAR_2 = VAR_0.out_w;
    int VAR_3 = VAR_0.out_c;
    return FUNC_0(VAR_2,VAR_1,VAR_3,VAR_0.output);
}
