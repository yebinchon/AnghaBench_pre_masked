
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c; int h; int w; int * data; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (char*,...) ;

void FUNC_1(image VAR_0)
{
    int VAR_1, VAR_2, VAR_3;
    for(VAR_1 =0 ; VAR_1 < VAR_0.c; ++VAR_1){
        for(VAR_2 =0 ; VAR_2 < VAR_0.h; ++VAR_2){
            for(VAR_3 = 0; VAR_3 < VAR_0.w; ++VAR_3){
                FUNC_0("%.2lf, ", VAR_0.data[VAR_1*VAR_0.h*VAR_0.w + VAR_2*VAR_0.w + VAR_3]);
                if(VAR_3 > 30) break;
            }
            FUNC_0("\n");
            if(VAR_2 > 30) break;
        }
        FUNC_0("\n");
    }
    FUNC_0("\n");
}
