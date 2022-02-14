
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int c; int h; int w; float* data; } ;
typedef TYPE_1__ image ;



void FUNC_0(image VAR_0, image VAR_1, float VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    int VAR_7, VAR_8;
    for(VAR_6 = 0; VAR_6 < VAR_0.c; ++VAR_6){
        for(VAR_5 = 0; VAR_5 < VAR_0.h; ++VAR_5){
            for(VAR_4 = 0; VAR_4 < VAR_0.w; ++VAR_4){
                int VAR_9 = VAR_4 + VAR_0.w*(VAR_5 + VAR_0.h*VAR_6);
                for(VAR_8 = VAR_5-VAR_3; VAR_8 <= VAR_5 + VAR_3 && VAR_8 < VAR_0.h; ++VAR_8){
                    if (VAR_8 < 0) continue;
                    for(VAR_7 = VAR_4-VAR_3; VAR_7 <= VAR_4 + VAR_3 && VAR_7 < VAR_0.w; ++VAR_7){
                        if (VAR_7 < 0) continue;
                        int VAR_10 = VAR_7 + VAR_0.w*(VAR_8 + VAR_0.h*VAR_6);
                        VAR_1.data[VAR_9] += VAR_2 * (VAR_0.data[VAR_10] - VAR_0.data[VAR_9]);
                    }
                }
            }
        }
    }
}
