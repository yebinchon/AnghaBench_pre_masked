
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int h; int w; int c; int * data; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (TYPE_1__,TYPE_1__,int,int) ;
 TYPE_1__ FUNC_1 (TYPE_1__,int,int,int,int) ;
 float FUNC_2 (int *,int *,int,int) ;
 TYPE_1__ FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (TYPE_1__,char*) ;

void FUNC_6(char *VAR_0, char *VAR_1, char *VAR_2, int VAR_3)
{
    if(!VAR_2) VAR_2 = "out";
    image VAR_4 = FUNC_3(VAR_0, 0,0,0);
    image VAR_5 = FUNC_3(VAR_1, 0,0,0);
    int VAR_6 = FUNC_0(VAR_4, VAR_5, -VAR_4.h/100, VAR_4.h/100);

    image VAR_7 = FUNC_1(VAR_5, 10, VAR_6, VAR_5.w, VAR_5.h);
    float VAR_8 = FUNC_2(VAR_7, VAR_4.data, VAR_4.w*VAR_4.h*VAR_4.c, 100);
    image VAR_9 = FUNC_1(VAR_5, -10, VAR_6, VAR_5.w, VAR_5.h);
    float VAR_10 = FUNC_2(VAR_9, VAR_4.data, VAR_4.w*VAR_4.h*VAR_4.c, 100);

    if(VAR_10 < VAR_8 && 0){
        image VAR_11 = VAR_4;
        VAR_4 = VAR_5;
        VAR_5 = VAR_11;
        VAR_6 = -VAR_6;
        FUNC_4("swapped, %d\n", VAR_6);
    }
    else{
        FUNC_4("%d\n", VAR_6);
    }

    image VAR_12 = FUNC_1(VAR_5, VAR_3, VAR_6, VAR_4.w, VAR_4.h);
    int VAR_13;
    for(VAR_13 = 0; VAR_13 < VAR_12.w*VAR_12.h; ++VAR_13){
        VAR_12.data[VAR_13] = VAR_4.data[VAR_13];
    }
    FUNC_5(VAR_12, VAR_2);
}
