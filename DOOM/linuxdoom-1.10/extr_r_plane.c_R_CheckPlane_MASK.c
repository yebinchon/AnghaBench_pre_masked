
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int minx; int maxx; int* top; int lightlevel; int picnum; int height; } ;
typedef TYPE_1__ visplane_t ;
struct TYPE_6__ {int lightlevel; int picnum; int height; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int*,int,int) ;

visplane_t*
FUNC_1
( visplane_t* VAR_1,
  int VAR_2,
  int VAR_3 )
{
    int VAR_4;
    int VAR_5;
    int VAR_6;
    int VAR_7;
    int VAR_8;

    if (VAR_2 < VAR_1->minx)
    {
 VAR_4 = VAR_1->minx;
 VAR_6 = VAR_2;
    }
    else
    {
 VAR_6 = VAR_1->minx;
 VAR_4 = VAR_2;
    }

    if (VAR_3 > VAR_1->maxx)
    {
 VAR_5 = VAR_1->maxx;
 VAR_7 = VAR_3;
    }
    else
    {
 VAR_7 = VAR_1->maxx;
 VAR_5 = VAR_3;
    }

    for (VAR_8=VAR_4 ; VAR_8<= VAR_5 ; VAR_8++)
 if (VAR_1->top[VAR_8] != 0xff)
     break;

    if (VAR_8 > VAR_5)
    {
 VAR_1->minx = VAR_6;
 VAR_1->maxx = VAR_7;


 return VAR_1;
    }


    VAR_0->height = VAR_1->height;
    VAR_0->picnum = VAR_1->picnum;
    VAR_0->lightlevel = VAR_1->lightlevel;

    VAR_1 = VAR_0++;
    VAR_1->minx = VAR_2;
    VAR_1->maxx = VAR_3;

    FUNC_0 (VAR_1->top,0xff,sizeof(VAR_1->top));

    return VAR_1;
}
