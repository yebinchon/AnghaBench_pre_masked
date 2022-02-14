
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int id; float x; float y; float h; float w; float left; float right; float top; float bottom; } ;
typedef TYPE_1__ box_label ;
typedef int FILE ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*,int*,float*,float*,float*,float*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int) ;

box_label *FUNC_6(char *VAR_0, int *VAR_1)
{
    FILE *VAR_2 = FUNC_3(VAR_0, "r");
    if(!VAR_2) FUNC_2(VAR_0);
    float VAR_3, VAR_4, VAR_5, VAR_6;
    int VAR_7;
    int VAR_8 = 0;
    int VAR_9 = 64;
    box_label *VAR_10 = FUNC_0(VAR_9, sizeof(box_label));
    while(FUNC_4(VAR_2, "%d %f %f %f %f", &VAR_7, &VAR_3, &VAR_4, &VAR_6, &VAR_5) == 5){
        if(VAR_8 == VAR_9) {
            VAR_9 = VAR_9 * 2;
            VAR_10 = FUNC_5(VAR_10, VAR_9*sizeof(box_label));
        }
        VAR_10[VAR_8].id = VAR_7;
        VAR_10[VAR_8].x = VAR_3;
        VAR_10[VAR_8].y = VAR_4;
        VAR_10[VAR_8].h = VAR_5;
        VAR_10[VAR_8].w = VAR_6;
        VAR_10[VAR_8].left = VAR_3 - VAR_6/2;
        VAR_10[VAR_8].right = VAR_3 + VAR_6/2;
        VAR_10[VAR_8].top = VAR_4 - VAR_5/2;
        VAR_10[VAR_8].bottom = VAR_4 + VAR_5/2;
        ++VAR_8;
    }
    FUNC_1(VAR_2);
    *VAR_1 = VAR_8;
    return VAR_10;
}
