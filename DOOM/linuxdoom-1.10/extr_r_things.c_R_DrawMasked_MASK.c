
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_1__ vissprite_t ;
struct TYPE_9__ {int x2; int x1; scalar_t__ maskedtexturecol; } ;
typedef TYPE_2__ drawseg_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 () ;
 TYPE_2__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;

void FUNC_4 (void)
{
    vissprite_t* VAR_6;
    drawseg_t* VAR_7;

    FUNC_3 ();

    if (VAR_3 > VAR_4)
    {

 for (VAR_6 = VAR_5.next ;
      VAR_6 != &VAR_5 ;
      VAR_6=VAR_6->next)
 {

     FUNC_1 (VAR_6);
 }
    }


    for (VAR_7=VAR_1-1 ; VAR_7 >= VAR_0 ; VAR_7--)
 if (VAR_7->maskedtexturecol)
     FUNC_2 (VAR_7, VAR_7->x1, VAR_7->x2);



    if (!VAR_2)
 FUNC_0 ();
}
