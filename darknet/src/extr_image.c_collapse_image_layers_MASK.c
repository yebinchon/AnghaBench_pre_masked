
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int h; int c; int w; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (TYPE_1__,TYPE_1__,int ,int) ;
 int FUNC_1 (TYPE_1__) ;
 TYPE_1__ FUNC_2 (TYPE_1__,int) ;
 TYPE_1__ FUNC_3 (int ,int,int) ;

image FUNC_4(image VAR_0, int VAR_1)
{
    int VAR_2 = VAR_0.h;
    VAR_2 = (VAR_2+VAR_1)*VAR_0.c - VAR_1;
    image VAR_3 = FUNC_3(VAR_0.w, VAR_2, 1);
    int VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_0.c; ++VAR_4){
        image VAR_5 = FUNC_2(VAR_0, VAR_4);
        int VAR_6 = VAR_4*(VAR_0.h+VAR_1);
        FUNC_0(VAR_5, VAR_3, 0, VAR_6);
        FUNC_1(VAR_5);
    }
    return VAR_3;
}
