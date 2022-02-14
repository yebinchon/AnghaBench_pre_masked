
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int h; int w; } ;
typedef TYPE_1__ network ;
struct TYPE_11__ {int data; } ;
typedef TYPE_2__ image ;


 int FUNC_0 (TYPE_2__) ;
 TYPE_2__ FUNC_1 (TYPE_2__,int ,int ) ;
 float* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;

float *FUNC_4(network *VAR_0, image VAR_1)
{
    image VAR_2 = FUNC_1(VAR_1, VAR_0->w, VAR_0->h);
    FUNC_3(VAR_0, 1);
    float *VAR_3 = FUNC_2(VAR_0, VAR_2.data);
    FUNC_0(VAR_2);
    return VAR_3;
}
