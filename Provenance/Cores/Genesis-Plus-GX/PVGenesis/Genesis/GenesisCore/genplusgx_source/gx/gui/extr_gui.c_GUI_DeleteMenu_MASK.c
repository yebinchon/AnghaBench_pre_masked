
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int max_images; int max_buttons; int max_items; TYPE_3__* items; TYPE_5__* buttons; TYPE_5__** arrows; TYPE_3__** helpers; TYPE_4__* bg_images; } ;
typedef TYPE_2__ gui_menu ;
struct TYPE_9__ {int texture; } ;
typedef TYPE_3__ gui_item ;
struct TYPE_10__ {int texture; } ;
typedef TYPE_4__ gui_image ;
struct TYPE_11__ {TYPE_1__* data; } ;
typedef TYPE_5__ gui_butn ;
struct TYPE_7__ {int * texture; } ;


 int FUNC_0 (int *) ;

void FUNC_1(gui_menu *VAR_0)
{
  int VAR_1;
  gui_butn *VAR_2;
  gui_item *VAR_3;
  gui_image *VAR_4;


  for (VAR_1=0; VAR_1<VAR_0->max_images; VAR_1++)
  {
    VAR_4 = &VAR_0->bg_images[VAR_1];
    FUNC_0(&VAR_4->texture);
  }

  for (VAR_1=0; VAR_1<2; VAR_1++)
  {

    VAR_3 = VAR_0->helpers[VAR_1];
    if (VAR_3)
      FUNC_0(&VAR_3->texture);


    VAR_2 = VAR_0->arrows[VAR_1];
    if (VAR_2)
    {
      FUNC_0(&VAR_2->data->texture[0]);
      FUNC_0(&VAR_2->data->texture[1]);
    }
  }


  for (VAR_1=0; VAR_1<VAR_0->max_buttons; VAR_1++)
  {
    VAR_2 = &VAR_0->buttons[VAR_1];
    if (VAR_2->data)
    {
      FUNC_0(&VAR_2->data->texture[0]);
      FUNC_0(&VAR_2->data->texture[1]);
    }
  }


  for (VAR_1=0; VAR_1<VAR_0->max_items; VAR_1++)
  {
    VAR_3 = &VAR_0->items[VAR_1];
    FUNC_0(&VAR_3->texture);
  }
}
