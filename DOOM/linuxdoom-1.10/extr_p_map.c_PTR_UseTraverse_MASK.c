
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_6__* line; } ;
struct TYPE_11__ {TYPE_1__ d; } ;
typedef TYPE_2__ intercept_t ;
typedef int boolean ;
struct TYPE_13__ {int special; } ;
struct TYPE_12__ {int y; int x; } ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ,int ,TYPE_6__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_6__*,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;

boolean FUNC_4 (intercept_t* VAR_3)
{
    int VAR_4;

    if (!VAR_3->d.line->special)
    {
 FUNC_0 (VAR_3->d.line);
 if (VAR_0 <= 0)
 {
     FUNC_3 (VAR_2, VAR_1);


     return 0;
 }

 return 1 ;
    }

    VAR_4 = 0;
    if (FUNC_1 (VAR_2->x, VAR_2->y, VAR_3->d.line) == 1)
 VAR_4 = 1;



    FUNC_2 (VAR_2, VAR_3->d.line, VAR_4);


    return 0;
}
