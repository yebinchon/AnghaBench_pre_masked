
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int c; } ;
typedef TYPE_1__ image ;
struct TYPE_8__ {int n; } ;
typedef TYPE_2__ convolutional_layer ;


 TYPE_1__ FUNC_0 (TYPE_2__,int) ;
 int FUNC_1 (TYPE_1__) ;

void FUNC_2(convolutional_layer VAR_0)
{
    int VAR_1;
    for(VAR_1 = 0; VAR_1 < VAR_0.n; ++VAR_1){
        image VAR_2 = FUNC_0(VAR_0, VAR_1);
        if (VAR_2.c == 3) {
            FUNC_1(VAR_2);
        }
    }
}
