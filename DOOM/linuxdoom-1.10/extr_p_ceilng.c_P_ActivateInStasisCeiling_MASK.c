
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ tag; } ;
typedef TYPE_3__ line_t ;
typedef scalar_t__ actionf_p1 ;
struct TYPE_6__ {scalar_t__ acp1; } ;
struct TYPE_7__ {TYPE_1__ function; } ;
struct TYPE_9__ {scalar_t__ tag; scalar_t__ direction; scalar_t__ olddirection; TYPE_2__ thinker; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__** VAR_2 ;

void FUNC_0(line_t* VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0;VAR_4 < VAR_0;VAR_4++)
    {
 if (VAR_2[VAR_4]
     && (VAR_2[VAR_4]->tag == VAR_3->tag)
     && (VAR_2[VAR_4]->direction == 0))
 {
     VAR_2[VAR_4]->direction = VAR_2[VAR_4]->olddirection;
     VAR_2[VAR_4]->thinker.function.acp1
       = (actionf_p1)VAR_1;
 }
    }
}
