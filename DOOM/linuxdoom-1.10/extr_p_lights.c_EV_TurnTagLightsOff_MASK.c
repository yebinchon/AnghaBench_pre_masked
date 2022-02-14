
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ tag; int lightlevel; int linecount; TYPE_2__** lines; } ;
typedef TYPE_1__ sector_t ;
struct TYPE_9__ {scalar_t__ tag; } ;
typedef TYPE_2__ line_t ;


 TYPE_1__* FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_1(line_t* VAR_2)
{
    int VAR_3;
    int VAR_4;
    int VAR_5;
    sector_t* VAR_6;
    sector_t* VAR_7;
    line_t* VAR_8;

    VAR_6 = VAR_1;

    for (VAR_4 = 0;VAR_4 < VAR_0; VAR_4++, VAR_6++)
    {
 if (VAR_6->tag == VAR_2->tag)
 {
     VAR_5 = VAR_6->lightlevel;
     for (VAR_3 = 0;VAR_3 < VAR_6->linecount; VAR_3++)
     {
  VAR_8 = VAR_6->lines[VAR_3];
  VAR_7 = FUNC_0(VAR_8,VAR_6);
  if (!VAR_7)
      continue;
  if (VAR_7->lightlevel < VAR_5)
      VAR_5 = VAR_7->lightlevel;
     }
     VAR_6->lightlevel = VAR_5;
 }
    }
}
