
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int w; int h; int c; int data; } ;
typedef TYPE_1__ image ;


 float VAR_0 ;
 TYPE_1__ FUNC_0 (TYPE_1__,int ,int,int,int) ;
 float FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (char*,int,float) ;

int FUNC_4(image VAR_1, image VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6 = 0;
    float VAR_7 = VAR_0;
    for(VAR_5 = VAR_3; VAR_5 <= VAR_4; VAR_5 += 2){
        image VAR_8 = FUNC_0(VAR_2, 0, VAR_5, VAR_2.w, VAR_2.h);
        float VAR_9 = FUNC_1(VAR_8.data, VAR_1.data, VAR_1.w*VAR_1.h*VAR_1.c, 100);
        if(VAR_9 < VAR_7){
            VAR_7 = VAR_9;
            VAR_6 = VAR_5;
        }
        FUNC_3("%d %f\n", VAR_5, VAR_9);
        FUNC_2(VAR_8);
    }
    return VAR_6;
}
