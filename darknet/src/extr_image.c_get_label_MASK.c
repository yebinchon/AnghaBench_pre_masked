
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {double h; } ;
typedef TYPE_1__ image ;


 TYPE_1__ FUNC_0 (TYPE_1__,double) ;
 int FUNC_1 (TYPE_1__) ;
 TYPE_1__ FUNC_2 (int ,int ,int ) ;
 TYPE_1__ FUNC_3 (TYPE_1__,TYPE_1__,int) ;

image FUNC_4(image **VAR_0, char *VAR_1, int VAR_2)
{
    VAR_2 = VAR_2/10;
    if(VAR_2 > 7) VAR_2 = 7;
    image VAR_3 = FUNC_2(0,0,0);
    while(*VAR_1){
        image VAR_4 = VAR_0[VAR_2][(int)*VAR_1];
        image VAR_5 = FUNC_3(VAR_3, VAR_4, -VAR_2 - 1 + (VAR_2+1)/2);
        FUNC_1(VAR_3);
        VAR_3 = VAR_5;
        ++VAR_1;
    }
    image VAR_6 = FUNC_0(VAR_3, VAR_3.h*.25);
    FUNC_1(VAR_3);
    return VAR_6;
}
