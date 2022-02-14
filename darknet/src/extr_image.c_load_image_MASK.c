
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int h; int w; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (TYPE_1__) ;
 TYPE_1__ FUNC_1 (char*,int) ;
 TYPE_1__ FUNC_2 (char*,int) ;
 TYPE_1__ FUNC_3 (TYPE_1__,int,int) ;

image FUNC_4(char *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{



    image VAR_4 = FUNC_2(VAR_0, VAR_3);


    if((VAR_2 && VAR_1) && (VAR_2 != VAR_4.h || VAR_1 != VAR_4.w)){
        image VAR_5 = FUNC_3(VAR_4, VAR_1, VAR_2);
        FUNC_0(VAR_4);
        VAR_4 = VAR_5;
    }
    return VAR_4;
}
