
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; } ;
typedef TYPE_1__ SubBand ;
typedef int SnowContext ;
typedef scalar_t__ IDWTELEM ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(SnowContext *VAR_0, SubBand *VAR_1, IDWTELEM *VAR_2, int VAR_3, int VAR_4, int VAR_5){
    const int VAR_6= VAR_1->width;
    const int VAR_7= VAR_1->height;
    int VAR_8,VAR_9;

    for(VAR_9=VAR_7-1; VAR_9>=0; VAR_9--){
        for(VAR_8=VAR_6-1; VAR_8>=0; VAR_8--){
            int VAR_10= VAR_8 + VAR_9*VAR_3;

            if(VAR_8){
                if(VAR_5){
                    if(VAR_9 && VAR_8+1<VAR_6) VAR_2[VAR_10] -= FUNC_0(VAR_2[VAR_10 - 1], VAR_2[VAR_10 - VAR_3], VAR_2[VAR_10 - VAR_3 + 1]);
                    else VAR_2[VAR_10] -= VAR_2[VAR_10 - 1];
                }else{
                    if(VAR_9) VAR_2[VAR_10] -= FUNC_0(VAR_2[VAR_10 - 1], VAR_2[VAR_10 - VAR_3], VAR_2[VAR_10 - 1] + VAR_2[VAR_10 - VAR_3] - VAR_2[VAR_10 - 1 - VAR_3]);
                    else VAR_2[VAR_10] -= VAR_2[VAR_10 - 1];
                }
            }else{
                if(VAR_9) VAR_2[VAR_10] -= VAR_2[VAR_10 - VAR_3];
            }
        }
    }
}
