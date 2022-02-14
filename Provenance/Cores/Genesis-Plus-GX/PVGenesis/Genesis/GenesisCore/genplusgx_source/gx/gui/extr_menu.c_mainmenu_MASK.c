
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_23__ {int screenshot; TYPE_2__* items; TYPE_3__* buttons; int cb; TYPE_1__* bg_images; } ;
typedef TYPE_4__ gui_menu ;
struct TYPE_27__ {int state; } ;
struct TYPE_26__ {int state; } ;
struct TYPE_25__ {int s_device; scalar_t__ bg_overlay; } ;
struct TYPE_24__ {scalar_t__* system; } ;
struct TYPE_22__ {int y; int* shift; int state; } ;
struct TYPE_21__ {int y; void* data; } ;
struct TYPE_20__ {int state; } ;
struct TYPE_19__ {int state; } ;
struct TYPE_18__ {int state; } ;
struct TYPE_17__ {int state; } ;
typedef int GXColor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 () ;
 char* VAR_8 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (char*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 () ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_11 (int ,int ,int ) ;
 scalar_t__ VAR_16 ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (int) ;
 TYPE_12__* VAR_17 ;
 TYPE_11__* VAR_18 ;
 TYPE_10__* VAR_19 ;
 TYPE_9__* VAR_20 ;
 TYPE_8__* VAR_21 ;
 TYPE_7__ VAR_22 ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 int VAR_23 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*) ;
 int FUNC_21 () ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 () ;
 TYPE_6__ VAR_24 ;
 int * VAR_25 ;
 int FUNC_25 () ;
 int VAR_26 ;
 TYPE_4__ VAR_27 ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 char* VAR_28 ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 (int ,int ) ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (char*,char*,char*,char*) ;
 int VAR_29 ;
 int FUNC_34 () ;
 int FUNC_35 () ;
 int VAR_30 ;

void FUNC_36(void)
{
  char VAR_31[VAR_11];
  int VAR_32, VAR_33 = 0;


  FUNC_32(0, VAR_22.s_device);
  gui_menu *VAR_34 = &VAR_27;


  if (!VAR_34->screenshot)
  {
    if (VAR_22.bg_overlay)
    {
      VAR_19[1].state |= VAR_9;
      VAR_20[1].state |= VAR_9;
      VAR_17[1].state |= VAR_9;
      VAR_18[1].state |= VAR_9;
      VAR_21[2].state |= VAR_9;
    }
    else
    {
      VAR_19[1].state &= ~VAR_9;
      VAR_20[1].state &= ~VAR_9;
      VAR_17[1].state &= ~VAR_9;
      VAR_18[1].state &= ~VAR_9;
      VAR_21[2].state &= ~VAR_9;
    }

    if (VAR_29)
    {
      VAR_34->screenshot = 128;
      VAR_34->bg_images[0].state &= ~VAR_9;
      VAR_34->items[0].y -= 90;
      VAR_34->items[1].y -= 90;
      VAR_34->items[2].y -= 90;
      VAR_34->buttons[0].y -= 90;
      VAR_34->buttons[1].y -= 90;
      VAR_34->buttons[2].y -= 90;
      VAR_34->buttons[0].shift[1] = 3;
      VAR_34->buttons[1].shift[1] = 3;
      VAR_34->buttons[2].shift[1] = 3;
      VAR_34->buttons[3].state |= (VAR_4 | VAR_3);
      VAR_34->buttons[4].state |= (VAR_4 | VAR_3);
      VAR_34->buttons[5].state |= (VAR_4 | VAR_3);
      VAR_34->buttons[7].state |= (VAR_4 | VAR_3);
      VAR_34->buttons[8].state |= (VAR_4 | VAR_3);
      VAR_34->buttons[9].state |= (VAR_4 | VAR_3);
      if (FUNC_15() >= 0)
      {
        VAR_27.buttons[6].state |= (VAR_4 | VAR_3);
        VAR_27.items[6].data = VAR_6;
        VAR_27.cb = VAR_26;
        VAR_27.buttons[3].shift[1] = 3;
        VAR_27.buttons[7].shift[0] = 1;
        VAR_27.buttons[8].shift[2] = 2;
      }
    }
  }

  FUNC_4(VAR_34);
  FUNC_2(VAR_34,10,0);

  while (VAR_33 == 0)
  {
    switch (FUNC_5(VAR_34))
    {

      case 0:
      {
        FUNC_2(VAR_34,30,1);
        FUNC_1(VAR_34);

        if (FUNC_25())
        {

          FUNC_27();


          if (!FUNC_24())
          {
            FUNC_4(VAR_34);
            FUNC_2(VAR_34,30,0);
            FUNC_6("Error","Invalid Controllers Settings");
            break;
          }


          FUNC_19((GXColor)VAR_2);
          FUNC_21();
          VAR_33 = 1;
          break;
        }

        FUNC_4(VAR_34);
        FUNC_2(VAR_34,30,0);
        break;
      }


      case 1:
      {
        FUNC_2(VAR_34,30,1);
        FUNC_1(VAR_34);
        FUNC_26();
        FUNC_4(VAR_34);
        FUNC_2(VAR_34,30,0);
        break;
      }


      case 2:
      {
        FUNC_17();
        break;
      }


      case 3:
      {
        FUNC_2(VAR_34,30,1);
        FUNC_1(VAR_34);

        if (FUNC_28())
        {

          if (!FUNC_24())
          {
            FUNC_4(VAR_34);
            FUNC_2(VAR_34,30,0);
            FUNC_6("Error","Invalid Controllers Settings");
            break;
          }


          VAR_33 = 1;
          break;
        }

        FUNC_4(VAR_34);
        FUNC_2(VAR_34,30,0);
        break;
      }


      case 4:
      {

        if (!FUNC_24())
        {
          FUNC_6("Error","Invalid Controllers Settings");
          break;
        }


        FUNC_2(VAR_34,10,1);
        FUNC_1(VAR_34);
        FUNC_19((GXColor)VAR_2);
        FUNC_21();

        if (VAR_29 & VAR_12)
        {

          FUNC_18(0);
        }
        else if (VAR_29 == VAR_14)
        {

          VAR_25[0x0D] &= ~VAR_10;
        }
        else
        {

          FUNC_34();
          FUNC_35();


          FUNC_31(0,VAR_22.s_device);
        }


        VAR_33 = 1;
        break;
      }


      case 5:
      {
        FUNC_2(VAR_34,30,1);
        FUNC_1(VAR_34);
        FUNC_0();
        FUNC_4(VAR_34);
        FUNC_2(VAR_34,30,0);
        break;
      }


      case 6:
      {
        VAR_32 = (FUNC_15() + 1) % (VAR_1 + 1);
        FUNC_16(VAR_32);
        VAR_32 = FUNC_15();
        FUNC_1(VAR_34);
        if (VAR_32 == VAR_1) VAR_34->items[6].data = VAR_5;
        else if (VAR_32 == VAR_0) VAR_34->items[6].data = VAR_7;
        else VAR_34->items[6].data = VAR_6;
        FUNC_4(VAR_34);
        break;
      }


      case 7:
      case -1:
      {
        if (VAR_29)
        {

          if (!FUNC_24())
          {
            FUNC_6("Error","Invalid Controllers Settings");
            break;
          }


          FUNC_2(VAR_34,10,1);
          FUNC_1(VAR_34);
          VAR_33 = 1;
        }
        break;
      }


      case 8:
      {

        FUNC_33(VAR_31,"%s/snaps/%s.png", VAR_8, VAR_28);


        FUNC_20(VAR_31);
        break;
      }


      case 9:
      {
        FUNC_29();
        break;
      }
    }
  }


  while (FUNC_9(0))
  {
    FUNC_12();
    FUNC_10();
  }
}
