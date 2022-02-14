
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ actionf_p1 ;
struct TYPE_4__ {scalar_t__ acp1; } ;
struct TYPE_5__ {TYPE_1__ function; } ;
struct TYPE_6__ {int tag; scalar_t__ status; scalar_t__ oldstatus; TYPE_2__ thinker; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__** VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_0(int VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0;VAR_5 < VAR_0;VAR_5++)
 if (VAR_2[VAR_5]
     && (VAR_2[VAR_5])->tag == VAR_4
     && (VAR_2[VAR_5])->status == VAR_3)
 {
     (VAR_2[VAR_5])->status = (VAR_2[VAR_5])->oldstatus;
     (VAR_2[VAR_5])->thinker.function.acp1
       = (actionf_p1) VAR_1;
 }
}
