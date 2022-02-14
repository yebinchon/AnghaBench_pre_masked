
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int w; int h; } ;
typedef TYPE_1__ image ;


 TYPE_1__ FUNC_0 (TYPE_1__,int,int) ;

image FUNC_1(image VAR_0, int VAR_1)
{
    int VAR_2 = VAR_0.w;
    int VAR_3 = VAR_0.h;
    if(VAR_2 > VAR_3){
        VAR_3 = (VAR_3 * VAR_1) / VAR_2;
        VAR_2 = VAR_1;
    } else {
        VAR_2 = (VAR_2 * VAR_1) / VAR_3;
        VAR_3 = VAR_1;
    }
    if(VAR_2 == VAR_0.w && VAR_3 == VAR_0.h) return VAR_0;
    image VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3);
    return VAR_4;
}
