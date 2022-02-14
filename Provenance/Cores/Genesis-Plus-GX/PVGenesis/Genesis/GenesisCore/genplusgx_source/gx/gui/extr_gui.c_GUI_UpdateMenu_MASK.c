
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_14__ {int selected; int max_items; int max_buttons; int offset; TYPE_5__* buttons; TYPE_1__** helpers; TYPE_4__* items; TYPE_5__** arrows; } ;
typedef TYPE_3__ gui_menu ;
struct TYPE_15__ {char* comment; } ;
typedef TYPE_4__ gui_item ;
struct TYPE_16__ {int state; int x; int w; int y; int h; scalar_t__* shift; } ;
typedef TYPE_5__ gui_butn ;
struct TYPE_19__ {scalar_t__ sfx_volume; } ;
struct TYPE_13__ {int x; int y; int angle; scalar_t__ valid; } ;
struct TYPE_18__ {int keys; TYPE_2__ ir; } ;
struct TYPE_17__ {int width; int height; } ;
struct TYPE_12__ {int comment; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int,int ,int *,int ,int,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 TYPE_9__ VAR_18 ;
 int FUNC_5 (TYPE_6__*,int,int,int,int,int ,int) ;
 int FUNC_6 () ;
 TYPE_7__ VAR_19 ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*) ;
 TYPE_6__* VAR_20 ;

int FUNC_9(gui_menu *VAR_21)
{
  u16 VAR_22;
  int VAR_23 = 0;
  int VAR_24 = VAR_21->selected;
  int VAR_25 = VAR_21->max_items;
  int VAR_26 = VAR_21->max_buttons;
  gui_butn *VAR_27;
  FUNC_6();


  VAR_22 = VAR_19.keys;

  if (VAR_24 < VAR_26)
  {
    VAR_27 = &VAR_21->buttons[VAR_24];
    if (VAR_22 & VAR_9)
    {
      VAR_24 -= VAR_27->shift[0];
      if (VAR_24 < 0)
      {
        VAR_24 = 0;
        if (VAR_21->offset)
          VAR_21->offset --;
      }
    }
    else if (VAR_22 & VAR_6)
    {
      VAR_24 += VAR_27->shift[1];
      if (VAR_24 >= VAR_26)
      {
        VAR_24 = VAR_26 - 1;
        if ((VAR_21->offset + VAR_24) < (VAR_25 - 1))
          VAR_21->offset ++;
      }
    }
    else if (VAR_22 & VAR_7)
    {
      VAR_24 -= VAR_27->shift[2];
      if (VAR_24 < 0)
      {
        VAR_24 = 0;
        if (VAR_21->offset)
          VAR_21->offset --;
      }
    }
    else if (VAR_22 & VAR_8)
    {
      VAR_24 += VAR_27->shift[3];
      if (VAR_24 >= VAR_26)
      {
        VAR_24 = VAR_26 - 1;
        if ((VAR_21->offset + VAR_24) < (VAR_25 - 1))
          VAR_21->offset ++;
      }
    }
  }

  if (VAR_22 & VAR_4)
  {
    if (VAR_24 < VAR_26)
      VAR_23 = 1;
    else if (VAR_24 == VAR_26)
      VAR_21->offset --;
    else if (VAR_24 == (VAR_26+1))
      VAR_21->offset ++;
  }
  else if ((VAR_22 & VAR_5) || (VAR_22 & VAR_10))
  {

    VAR_23 = -1;
  }


  if (VAR_21->selected != VAR_24)
  {
    if (VAR_24 < VAR_26)
    {

      VAR_27 = &VAR_21->buttons[VAR_24];
      if (VAR_27->state & VAR_1)
      {
        FUNC_1(FUNC_0(),VAR_13,22050,0,(u8 *)VAR_14,VAR_15,
                      ((int)VAR_18.sfx_volume * 255) / 100,((int)VAR_18.sfx_volume * 255) / 100,((void*)0));
      }
    }
    else if (VAR_24 < (VAR_26 + 2))
    {

      VAR_27 = VAR_21->arrows[VAR_24-VAR_26];
      if (VAR_27->state & VAR_1)
      {
        FUNC_1(FUNC_0(),VAR_13,22050,0,(u8 *)VAR_14,VAR_15,
                      ((int)VAR_18.sfx_volume * 255) / 100,((int)VAR_18.sfx_volume * 255) / 100,((void*)0));
      }
    }


    VAR_21->selected = VAR_24;
  }


  if (VAR_21->helpers[1])
  {
    if ((VAR_21->offset + VAR_24) < VAR_25)
    {
      gui_item *VAR_28 = &VAR_21->items[VAR_21->offset + VAR_24];
      FUNC_8(VAR_21->helpers[1]->comment,VAR_28->comment);
    }
    else
    {
      FUNC_8(VAR_21->helpers[1]->comment,"");
    }
  }

  if (VAR_23 > 0)
  {
    if (VAR_24 < VAR_26)
    {

      VAR_27 = &VAR_21->buttons[VAR_24];
      if (VAR_27->state & VAR_2)
      {
        FUNC_1(FUNC_0(),VAR_13,22050,0,(u8 *)VAR_16,VAR_17,
                      ((int)VAR_18.sfx_volume * 255) / 100,((int)VAR_18.sfx_volume * 255) / 100,((void*)0));
      }
    }
  }

  return VAR_23;
}
