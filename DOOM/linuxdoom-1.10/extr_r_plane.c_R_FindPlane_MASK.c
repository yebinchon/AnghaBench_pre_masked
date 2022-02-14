
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ height; int picnum; int lightlevel; int maxx; int top; int minx; } ;
typedef TYPE_1__ visplane_t ;
typedef scalar_t__ fixed_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,int,int) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

visplane_t*
FUNC_2
( fixed_t VAR_5,
  int VAR_6,
  int VAR_7 )
{
    visplane_t* VAR_8;

    if (VAR_6 == VAR_3)
    {
 VAR_5 = 0;
 VAR_7 = 0;
    }

    for (VAR_8=VAR_4; VAR_8<VAR_2; VAR_8++)
    {
 if (VAR_5 == VAR_8->height
     && VAR_6 == VAR_8->picnum
     && VAR_7 == VAR_8->lightlevel)
 {
     break;
 }
    }


    if (VAR_8 < VAR_2)
 return VAR_8;

    if (VAR_2 - VAR_4 == VAR_0)
 FUNC_0 ("R_FindPlane: no more visplanes");

    VAR_2++;

    VAR_8->height = VAR_5;
    VAR_8->picnum = VAR_6;
    VAR_8->lightlevel = VAR_7;
    VAR_8->minx = VAR_1;
    VAR_8->maxx = -1;

    FUNC_1 (VAR_8->top,0xff,sizeof(VAR_8->top));

    return VAR_8;
}
