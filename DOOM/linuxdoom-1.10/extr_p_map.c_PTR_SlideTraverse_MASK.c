
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int flags; } ;
typedef TYPE_2__ line_t ;
struct TYPE_10__ {TYPE_2__* line; } ;
struct TYPE_12__ {scalar_t__ frac; TYPE_1__ d; int isaline; } ;
typedef TYPE_3__ intercept_t ;
typedef int boolean ;
struct TYPE_13__ {scalar_t__ height; scalar_t__ z; int y; int x; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_2__* VAR_8 ;
 TYPE_4__* VAR_9 ;

boolean FUNC_3 (intercept_t* VAR_10)
{
    line_t* VAR_11;

    if (!VAR_10->isaline)
 FUNC_0 ("PTR_SlideTraverse: not a line?");

    VAR_11 = VAR_10->d.line;

    if ( ! (VAR_11->flags & VAR_1) )
    {
 if (FUNC_2 (VAR_9->x, VAR_9->y, VAR_11))
 {

     return 1;
 }
 goto isblocking;
    }


    FUNC_1 (VAR_11);

    if (VAR_5 < VAR_9->height)
 goto isblocking;

    if (VAR_6 - VAR_9->z < VAR_9->height)
 goto isblocking;

    if (VAR_4 - VAR_9->z > 24*VAR_0 )
 goto isblocking;


    return 1;



  isblocking:
    if (VAR_10->frac < VAR_2)
    {
 VAR_7 = VAR_2;
 VAR_8 = VAR_3;
 VAR_2 = VAR_10->frac;
 VAR_3 = VAR_11;
    }

    return 0;
}
