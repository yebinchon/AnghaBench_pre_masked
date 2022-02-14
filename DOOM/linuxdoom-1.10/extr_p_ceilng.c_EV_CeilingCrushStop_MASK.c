
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
typedef scalar_t__ actionf_v ;
struct TYPE_6__ {scalar_t__ acv; } ;
struct TYPE_7__ {TYPE_1__ function; } ;
struct TYPE_9__ {scalar_t__ tag; scalar_t__ direction; scalar_t__ olddirection; TYPE_2__ thinker; } ;


 int VAR_0 ;
 TYPE_4__** VAR_1 ;

int FUNC_0(line_t *VAR_2)
{
    int VAR_3;
    int VAR_4;

    VAR_4 = 0;
    for (VAR_3 = 0;VAR_3 < VAR_0;VAR_3++)
    {
 if (VAR_1[VAR_3]
     && (VAR_1[VAR_3]->tag == VAR_2->tag)
     && (VAR_1[VAR_3]->direction != 0))
 {
     VAR_1[VAR_3]->olddirection = VAR_1[VAR_3]->direction;
     VAR_1[VAR_3]->thinker.function.acv = (actionf_v)((void*)0);
     VAR_1[VAR_3]->direction = 0;
     VAR_4 = 1;
 }
    }


    return VAR_4;
}
