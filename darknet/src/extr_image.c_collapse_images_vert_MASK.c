
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int w; int h; int c; } ;
typedef TYPE_1__ image ;


 TYPE_1__ FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__,TYPE_1__,int,int) ;
 int FUNC_2 (TYPE_1__) ;
 TYPE_1__ FUNC_3 (TYPE_1__,int) ;
 TYPE_1__ FUNC_4 (int,int,int) ;

image FUNC_5(image *VAR_0, int VAR_1)
{
    int VAR_2 = 1;
    int VAR_3 = 1;
    int VAR_4,VAR_5,VAR_6;
    VAR_5 = VAR_0[0].w;
    VAR_4 = (VAR_0[0].h + VAR_3) * VAR_1 - VAR_3;
    VAR_6 = VAR_0[0].c;
    if(VAR_6 != 3 || !VAR_2){
        VAR_5 = (VAR_5+VAR_3)*VAR_6 - VAR_3;
        VAR_6 = 1;
    }

    image VAR_7 = FUNC_4(VAR_5, VAR_4, VAR_6);
    int VAR_8,VAR_9;
    for(VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8){
        int VAR_10 = VAR_8*(VAR_0[0].h+VAR_3);
        image VAR_11 = FUNC_0(VAR_0[VAR_8]);

        if(VAR_6 == 3 && VAR_2){
            FUNC_1(VAR_11, VAR_7, 0, VAR_10);
        }
        else{
            for(VAR_9 = 0; VAR_9 < VAR_11.c; ++VAR_9){
                int VAR_12 = VAR_9*(VAR_0[0].w+VAR_3);
                image VAR_13 = FUNC_3(VAR_11, VAR_9);
                FUNC_1(VAR_13, VAR_7, VAR_12, VAR_10);
                FUNC_2(VAR_13);
            }
        }
        FUNC_2(VAR_11);
    }
    return VAR_7;
}
