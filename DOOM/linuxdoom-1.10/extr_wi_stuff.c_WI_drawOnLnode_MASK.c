
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; int topoffset; int leftoffset; } ;
typedef TYPE_1__ patch_t ;
typedef int boolean ;
struct TYPE_8__ {int x; int y; } ;
struct TYPE_7__ {size_t epsd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ,TYPE_1__*) ;
 TYPE_3__** VAR_3 ;
 int FUNC_2 (char*,int) ;
 TYPE_2__* VAR_4 ;

void
FUNC_3
( int VAR_5,
  patch_t* VAR_6[] )
{

    int VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11;
    boolean VAR_12 = 0;

    VAR_7 = 0;
    do
    {
 VAR_8 = VAR_3[VAR_4->epsd][VAR_5].x - FUNC_0(VAR_6[VAR_7]->leftoffset);
 VAR_9 = VAR_3[VAR_4->epsd][VAR_5].y - FUNC_0(VAR_6[VAR_7]->topoffset);
 VAR_10 = VAR_8 + FUNC_0(VAR_6[VAR_7]->width);
 VAR_11 = VAR_9 + FUNC_0(VAR_6[VAR_7]->height);

 if (VAR_8 >= 0
     && VAR_10 < VAR_2
     && VAR_9 >= 0
     && VAR_11 < VAR_1)
 {
     VAR_12 = 1;
 }
 else
 {
     VAR_7++;
 }
    } while (!VAR_12 && VAR_7!=2);

    if (VAR_12 && VAR_7<2)
    {
 FUNC_1(VAR_3[VAR_4->epsd][VAR_5].x, VAR_3[VAR_4->epsd][VAR_5].y,
      VAR_0, VAR_6[VAR_7]);
    }
    else
    {

 FUNC_2("Could not place patch on level %d", VAR_5+1);
    }
}
