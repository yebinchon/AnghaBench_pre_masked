
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int y; scalar_t__ needsupdate; TYPE_1__** f; } ;
typedef TYPE_2__ hu_textline_t ;
typedef int boolean ;
struct TYPE_4__ {int height; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_2(hu_textline_t* VAR_6)
{
    int VAR_7;
    int VAR_8;
    int VAR_9;
    static boolean VAR_10 = 1;





    if (!VAR_1 &&
 VAR_4 && VAR_6->needsupdate)
    {
 VAR_7 = FUNC_1(VAR_6->f[0]->height) + 1;
 for (VAR_8=VAR_6->y,VAR_9=VAR_8*VAR_0 ; VAR_8<VAR_6->y+VAR_7 ; VAR_8++,VAR_9+=VAR_0)
 {
     if (VAR_8 < VAR_5 || VAR_8 >= VAR_5 + VAR_2)
  FUNC_0(VAR_9, VAR_0);
     else
     {
  FUNC_0(VAR_9, VAR_4);
  FUNC_0(VAR_9 + VAR_4 + VAR_3, VAR_4);

     }
 }
    }

    VAR_10 = VAR_1;
    if (VAR_6->needsupdate) VAR_6->needsupdate--;

}
