
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int max_images; int max_buttons; int offset; int selected; int (* cb ) () ;TYPE_3__** helpers; TYPE_5__** arrows; TYPE_3__* items; TYPE_5__* buttons; int title; TYPE_4__* bg_images; scalar_t__ screenshot; } ;
typedef TYPE_2__ gui_menu ;
struct TYPE_9__ {int x; int y; int w; int h; int comment; scalar_t__ texture; scalar_t__ data; int text; } ;
typedef TYPE_3__ gui_item ;
struct TYPE_10__ {int state; int x; int y; int w; int h; int alpha; scalar_t__ texture; } ;
typedef TYPE_4__ gui_image ;
struct TYPE_11__ {int state; int x; int y; int w; int h; TYPE_1__* data; } ;
typedef TYPE_5__ gui_butn ;
struct TYPE_7__ {scalar_t__* texture; } ;
typedef int GXColor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int,int,int,int ) ;
 int FUNC_1 (int ,int,int,int,int,int ) ;
 int FUNC_2 (int ,int,int,int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int,int,int,int,int) ;
 int FUNC_6 (scalar_t__,int,int,int,int,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;

void FUNC_9(gui_menu *VAR_8)
{
  int VAR_9;
  gui_item *VAR_10;
  gui_butn *VAR_11;
  gui_image *VAR_12;


  if (VAR_8->screenshot)
  {
    FUNC_3((GXColor)VAR_0);
    FUNC_4(VAR_8->screenshot);
  }
  else
  {
    FUNC_3(VAR_7);
  }


  for (VAR_9=0; VAR_9<VAR_8->max_images; VAR_9++)
  {
    VAR_12 = &VAR_8->bg_images[VAR_9];
    if (VAR_12->state & VAR_5)
    {
      if (VAR_12->state & VAR_4)
        FUNC_6(VAR_12->texture,VAR_12->x,VAR_12->y,VAR_12->w,VAR_12->h,VAR_12->alpha);
      else
        FUNC_5(VAR_12->texture,VAR_12->x,VAR_12->y,VAR_12->w,VAR_12->h,VAR_12->alpha);
    }
  }


  FUNC_1(VAR_8->title, 22,10,56,640,(GXColor)VAR_6);


  for (VAR_9=0; VAR_9<VAR_8->max_buttons; VAR_9++)
  {
    VAR_11 = &VAR_8->buttons[VAR_9];

    if (VAR_11->state & VAR_2)
    {

      VAR_10 = (VAR_8->items) ? (&VAR_8->items[VAR_8->offset + VAR_9]) : ((void*)0);


      if ((VAR_9 == VAR_8->selected) || (VAR_11->state & VAR_1))
      {
        if (VAR_11->data)
          FUNC_5(VAR_11->data->texture[1],VAR_11->x-4,VAR_11->y-4,VAR_11->w+8,VAR_11->h+8,255);

        if (VAR_10)
        {
          if (VAR_10->texture)
          {
            FUNC_5(VAR_10->texture, VAR_10->x-4,VAR_10->y-4,VAR_10->w+8,VAR_10->h+8,255);
            FUNC_2(VAR_10->text,18,VAR_11->x+4,VAR_10->x-4,VAR_11->y+(VAR_11->h - 36)/2+18,(GXColor)VAR_3);
          }
          else
          {
            FUNC_2(VAR_10->text,18,VAR_10->x-4,VAR_10->x+VAR_10->w+4,VAR_11->y+(VAR_11->h-18)/2+18,(GXColor)VAR_3);
          }
        }
      }
      else
      {
        if (VAR_11->data)
          FUNC_5(VAR_11->data->texture[0],VAR_11->x,VAR_11->y,VAR_11->w, VAR_11->h,255);

        if (VAR_10)
        {
          if (VAR_10->texture)
          {
            FUNC_5(VAR_10->texture,VAR_10->x,VAR_10->y,VAR_10->w,VAR_10->h,255);
            FUNC_2(VAR_10->text,16,VAR_11->x+8,VAR_10->x,VAR_11->y+(VAR_11->h - 32)/2+16,(GXColor)VAR_3);
          }
          else
          {
            FUNC_2(VAR_10->text,16,VAR_10->x,VAR_10->x+VAR_10->w,VAR_11->y+(VAR_11->h - 16)/2+16,(GXColor)VAR_3);
          }
        }
      }
    }
  }


  for (VAR_9=0; VAR_9<2; VAR_9++)
  {
    VAR_11 = VAR_8->arrows[VAR_9];
    if (VAR_11)
    {
      if (VAR_11->state & VAR_2)
      {
        if (VAR_8->selected == (VAR_8->max_buttons + VAR_9))
          FUNC_5(VAR_11->data->texture[1],VAR_11->x-2,VAR_11->y-2,VAR_11->w+4,VAR_11->h+4,255);
        else
          FUNC_5(VAR_11->data->texture[0],VAR_11->x,VAR_11->y,VAR_11->w, VAR_11->h,255);
      }
    }
  }


  VAR_10 = VAR_8->helpers[0];
  if (VAR_10)
  {
    if (VAR_10->data && FUNC_7(VAR_10->comment))
    {
      FUNC_5(VAR_10->texture,VAR_10->x,VAR_10->y,VAR_10->w,VAR_10->h,255);
      FUNC_1(VAR_10->comment,16,VAR_10->x+VAR_10->w+6,VAR_10->y+(VAR_10->h-16)/2 + 16,640,(GXColor)VAR_6);
    }
  }


  VAR_10 = VAR_8->helpers[1];
  if (VAR_10)
  {
    if (VAR_10->data && FUNC_7(VAR_10->comment))
    {
      FUNC_5(VAR_10->texture,VAR_10->x,VAR_10->y,VAR_10->w,VAR_10->h,255);
      FUNC_0(VAR_10->comment,16,VAR_10->x-6,VAR_10->y+(VAR_10->h-16)/2+16,(GXColor)VAR_6);
    }
  }

  if (VAR_8->cb)
    VAR_8->cb();
}
