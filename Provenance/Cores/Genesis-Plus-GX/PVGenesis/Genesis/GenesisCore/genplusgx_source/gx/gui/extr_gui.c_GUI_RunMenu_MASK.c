
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ offset; scalar_t__ max_buttons; scalar_t__ max_items; int selected; TYPE_1__** arrows; } ;
typedef TYPE_2__ gui_menu ;
struct TYPE_6__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(gui_menu *VAR_1)
{
  int VAR_2 = 0;


  while (!VAR_2)
  {
    FUNC_0(VAR_1);
    VAR_2 = FUNC_1(VAR_1);


    if (VAR_1->arrows[0])
    {
      if (VAR_1->offset > 0)
        VAR_1->arrows[0]->state |= VAR_0;
      else
        VAR_1->arrows[0]->state &= ~VAR_0;
    }

    if (VAR_1->arrows[1])
    {
      if ((VAR_1->offset + VAR_1->max_buttons) < VAR_1->max_items)
        VAR_1->arrows[1]->state |= VAR_0;
      else
        VAR_1->arrows[1]->state &= ~VAR_0;
    }
  }

  if (VAR_2 == 2)
    return (-2-VAR_1->offset-VAR_1->selected);
  else if (VAR_2 == 1)
    return (VAR_1->offset + VAR_1->selected);
  else
    return -1;
 }
