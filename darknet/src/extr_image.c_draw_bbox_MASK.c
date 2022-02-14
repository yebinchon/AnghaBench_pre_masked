
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int w; int h; } ;
typedef TYPE_1__ image ;
struct TYPE_7__ {int x; int w; int y; int h; } ;
typedef TYPE_2__ box ;


 int FUNC_0 (TYPE_1__,int,int,int,int,float,float,float) ;

void FUNC_1(image VAR_0, box VAR_1, int VAR_2, float VAR_3, float VAR_4, float VAR_5)
{
    int VAR_6 = (VAR_1.x-VAR_1.w/2)*VAR_0.w;
    int VAR_7 = (VAR_1.x+VAR_1.w/2)*VAR_0.w;
    int VAR_8 = (VAR_1.y-VAR_1.h/2)*VAR_0.h;
    int VAR_9 = (VAR_1.y+VAR_1.h/2)*VAR_0.h;

    int VAR_10;
    for(VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10){
        FUNC_0(VAR_0, VAR_6+VAR_10, VAR_8+VAR_10, VAR_7-VAR_10, VAR_9-VAR_10, VAR_3, VAR_4, VAR_5);
    }
}
