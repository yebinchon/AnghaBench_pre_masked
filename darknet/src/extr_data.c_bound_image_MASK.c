
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int w; int h; scalar_t__* data; } ;
typedef TYPE_1__ image ;
struct TYPE_6__ {int member_0; int member_1; int member_2; int member_3; } ;
typedef TYPE_2__ box ;



box FUNC_0(image VAR_0)
{
    int VAR_1,VAR_2;
    int VAR_3 = VAR_0.w;
    int VAR_4 = VAR_0.h;
    int VAR_5 = 0;
    int VAR_6 = 0;
    for(VAR_2 = 0; VAR_2 < VAR_0.h; ++VAR_2){
        for(VAR_1 = 0; VAR_1 < VAR_0.w; ++VAR_1){
            if(VAR_0.data[VAR_2*VAR_0.w + VAR_1]){
                VAR_3 = (VAR_1 < VAR_3) ? VAR_1 : VAR_3;
                VAR_4 = (VAR_2 < VAR_4) ? VAR_2 : VAR_4;
                VAR_5 = (VAR_1 > VAR_5) ? VAR_1 : VAR_5;
                VAR_6 = (VAR_2 > VAR_6) ? VAR_2 : VAR_6;
            }
        }
    }
    box VAR_7 = {VAR_3, VAR_4, VAR_5-VAR_3 + 1, VAR_6-VAR_4 + 1};

    return VAR_7;
}
