
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dy; int dx; TYPE_1__* v1; } ;
typedef TYPE_2__ line_t ;
struct TYPE_8__ {int dy; int dx; int y; int x; } ;
typedef TYPE_3__ divline_t ;
struct TYPE_6__ {int y; int x; } ;



void
FUNC_0
( line_t* VAR_0,
  divline_t* VAR_1 )
{
    VAR_1->x = VAR_0->v1->x;
    VAR_1->y = VAR_0->v1->y;
    VAR_1->dx = VAR_0->dx;
    VAR_1->dy = VAR_0->dy;
}
