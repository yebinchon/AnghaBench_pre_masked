
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int c; int w; int h; int data; } ;
typedef TYPE_1__ image ;
struct TYPE_8__ {int n; float* biases; } ;
typedef TYPE_2__ convolutional_layer ;


 TYPE_1__ FUNC_0 (TYPE_2__,int) ;
 int FUNC_1 (TYPE_1__,float) ;
 float FUNC_2 (int ,int) ;

void FUNC_3(convolutional_layer VAR_0, float VAR_1, float VAR_2)
{
    int VAR_3;
    for(VAR_3 = 0; VAR_3 < VAR_0.n; ++VAR_3){
        image VAR_4 = FUNC_0(VAR_0, VAR_3);
        if (VAR_4.c == 3) {
            FUNC_1(VAR_4, VAR_1);
            float VAR_5 = FUNC_2(VAR_4.data, VAR_4.w*VAR_4.h*VAR_4.c);
            VAR_0.biases[VAR_3] += VAR_5*VAR_2;
        }
    }
}
