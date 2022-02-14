
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int backsector; TYPE_2__* v2; TYPE_1__* v1; } ;
typedef TYPE_4__ line_t ;
typedef int fixed_t ;
typedef int divline_t ;
typedef int boolean ;
struct TYPE_14__ {TYPE_4__* line; } ;
struct TYPE_17__ {int frac; int isaline; TYPE_3__ d; } ;
struct TYPE_16__ {int dx; int dy; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_13__ {int y; int x; } ;
struct TYPE_12__ {int y; int x; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (int ,int ,TYPE_5__*) ;
 int FUNC_3 (scalar_t__,scalar_t__,TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 TYPE_6__* VAR_2 ;
 TYPE_5__ VAR_3 ;

boolean
FUNC_4 (line_t* VAR_4)
{
    int VAR_5;
    int VAR_6;
    fixed_t VAR_7;
    divline_t VAR_8;


    if ( VAR_3.dx > VAR_0*16
  || VAR_3.dy > VAR_0*16
  || VAR_3.dx < -VAR_0*16
  || VAR_3.dy < -VAR_0*16)
    {
 VAR_5 = FUNC_2 (VAR_4->v1->x, VAR_4->v1->y, &VAR_3);
 VAR_6 = FUNC_2 (VAR_4->v2->x, VAR_4->v2->y, &VAR_3);
    }
    else
    {
 VAR_5 = FUNC_3 (VAR_3.x, VAR_3.y, VAR_4);
 VAR_6 = FUNC_3 (VAR_3.x+VAR_3.dx, VAR_3.y+VAR_3.dy, VAR_4);
    }

    if (VAR_5 == VAR_6)
 return 1;


    FUNC_1 (VAR_4, &VAR_8);
    VAR_7 = FUNC_0 (&VAR_3, &VAR_8);

    if (VAR_7 < 0)
 return 1;


    if (VAR_1
 && VAR_7 < VAR_0
 && !VAR_4->backsector)
    {
 return 0;
    }


    VAR_2->frac = VAR_7;
    VAR_2->isaline = 1;
    VAR_2->d.line = VAR_4;
    VAR_2++;

    return 1;
}
