
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int max_images; scalar_t__ offset; int max_buttons; int max_items; TYPE_3__* items; TYPE_5__* buttons; TYPE_5__** arrows; TYPE_3__** helpers; TYPE_4__* bg_images; } ;
typedef TYPE_2__ gui_menu ;
struct TYPE_10__ {scalar_t__ data; void* texture; } ;
typedef TYPE_3__ gui_item ;
struct TYPE_11__ {scalar_t__ data; void* texture; } ;
typedef TYPE_4__ gui_image ;
struct TYPE_12__ {TYPE_1__* data; int state; } ;
typedef TYPE_5__ gui_butn ;
struct TYPE_13__ {TYPE_2__* parent; } ;
struct TYPE_8__ {scalar_t__* image; void** texture; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__,int ) ;
 TYPE_6__ VAR_1 ;

void FUNC_1(gui_menu *VAR_2)
{
  int VAR_3;
  gui_item *VAR_4;
  gui_butn *VAR_5;
  gui_image *VAR_6;


  for (VAR_3=0; VAR_3<VAR_2->max_images; VAR_3++)
  {
    VAR_6 = &VAR_2->bg_images[VAR_3];
    VAR_6->texture = FUNC_0(VAR_6->data,0);
  }

  for (VAR_3=0; VAR_3<2; VAR_3++)
  {

    VAR_4 = VAR_2->helpers[VAR_3];
    if (VAR_4)
      VAR_4->texture = FUNC_0(VAR_4->data,0);


    VAR_5 = VAR_2->arrows[VAR_3];
    if (VAR_5)
    {
      if (!VAR_5->data->texture[0])
        VAR_5->data->texture[0] = FUNC_0(VAR_5->data->image[0],0);
      if (!VAR_5->data->texture[1])
        VAR_5->data->texture[1] = FUNC_0(VAR_5->data->image[1],0);


      VAR_5->state &= ~VAR_0;
      if (((VAR_3==0) && (VAR_2->offset != 0)) || ((VAR_3==1) && (VAR_2->offset + VAR_2->max_buttons) < VAR_2->max_items))
        VAR_5->state |= VAR_0;
    }
  }


  for (VAR_3=0; VAR_3<VAR_2->max_buttons; VAR_3++)
  {
    VAR_5 = &VAR_2->buttons[VAR_3];
    if (VAR_5->data)
    {
      if (!VAR_5->data->texture[0])
        VAR_5->data->texture[0] = FUNC_0(VAR_5->data->image[0],0);
      if (!VAR_5->data->texture[1])
        VAR_5->data->texture[1] = FUNC_0(VAR_5->data->image[1],0);
    }
  }


  for (VAR_3=0; VAR_3<VAR_2->max_items; VAR_3++)
  {
    VAR_4 = &VAR_2->items[VAR_3];
    if (VAR_4->data)
      VAR_4->texture = FUNC_0(VAR_4->data,0);
  }


  VAR_1.parent = VAR_2;
}
