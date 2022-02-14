
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int linecount; int lightlevel; int ** lines; } ;
typedef TYPE_1__ sector_t ;
typedef int line_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*) ;

int
FUNC_1
( sector_t* VAR_0,
  int VAR_1 )
{
    int VAR_2;
    int VAR_3;
    line_t* VAR_4;
    sector_t* VAR_5;

    VAR_3 = VAR_1;
    for (VAR_2=0 ; VAR_2 < VAR_0->linecount ; VAR_2++)
    {
 VAR_4 = VAR_0->lines[VAR_2];
 VAR_5 = FUNC_0(VAR_4,VAR_0);

 if (!VAR_5)
     continue;

 if (VAR_5->lightlevel < VAR_3)
     VAR_3 = VAR_5->lightlevel;
    }
    return VAR_3;
}
