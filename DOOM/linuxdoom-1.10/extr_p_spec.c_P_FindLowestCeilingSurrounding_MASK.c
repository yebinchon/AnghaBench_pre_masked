
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int linecount; scalar_t__ ceilingheight; int ** lines; } ;
typedef TYPE_1__ sector_t ;
typedef int line_t ;
typedef scalar_t__ fixed_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *,TYPE_1__*) ;

fixed_t
FUNC_1(sector_t* VAR_1)
{
    int VAR_2;
    line_t* VAR_3;
    sector_t* VAR_4;
    fixed_t VAR_5 = VAR_0;

    for (VAR_2=0 ;VAR_2 < VAR_1->linecount ; VAR_2++)
    {
 VAR_3 = VAR_1->lines[VAR_2];
 VAR_4 = FUNC_0(VAR_3,VAR_1);

 if (!VAR_4)
     continue;

 if (VAR_4->ceilingheight < VAR_5)
     VAR_5 = VAR_4->ceilingheight;
    }
    return VAR_5;
}
