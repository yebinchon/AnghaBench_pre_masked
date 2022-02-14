
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int linecount; scalar_t__ ceilingheight; int ** lines; } ;
typedef TYPE_1__ sector_t ;
typedef int line_t ;
typedef scalar_t__ fixed_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*) ;

fixed_t FUNC_1(sector_t* VAR_0)
{
    int VAR_1;
    line_t* VAR_2;
    sector_t* VAR_3;
    fixed_t VAR_4 = 0;

    for (VAR_1=0 ;VAR_1 < VAR_0->linecount ; VAR_1++)
    {
 VAR_2 = VAR_0->lines[VAR_1];
 VAR_3 = FUNC_0(VAR_2,VAR_0);

 if (!VAR_3)
     continue;

 if (VAR_3->ceilingheight > VAR_4)
     VAR_4 = VAR_3->ceilingheight;
    }
    return VAR_4;
}
