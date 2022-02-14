
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;


struct TYPE_25__ {int selected; int max_buttons; TYPE_4__** arrows; } ;
typedef TYPE_3__ gui_menu ;
struct TYPE_26__ {int state; int x; int w; int y; int h; } ;
typedef TYPE_4__ gui_butn ;
struct TYPE_29__ {TYPE_1__* entries; } ;
struct TYPE_24__ {int x; int y; int angle; scalar_t__ valid; } ;
struct TYPE_28__ {short keys; TYPE_2__ ir; } ;
struct TYPE_27__ {int width; int height; } ;
struct TYPE_23__ {int filetype; } ;
struct TYPE_22__ {int comment; } ;
struct TYPE_21__ {int state; TYPE_5__* texture; int * data; } ;
struct TYPE_20__ {scalar_t__ bg_overlay; } ;
struct TYPE_19__ {char* filename; scalar_t__ flags; } ;
typedef int FILE ;


 int VAR_0 ;
 char** VAR_1 ;
 void** VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 short VAR_7 ;
 short VAR_8 ;
 short VAR_9 ;
 short VAR_10 ;
 short VAR_11 ;
 short VAR_12 ;
 short VAR_13 ;
 short VAR_14 ;
 short VAR_15 ;
 int FUNC_5 () ;
 int VAR_16 ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_7 (int,char*) ;
 TYPE_15__ VAR_18 ;
 TYPE_14__* VAR_19 ;
 TYPE_13__ VAR_20 ;
 int FUNC_8 (int *) ;
 TYPE_12__* VAR_21 ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (TYPE_5__*,int,int,int,int,int ,int) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_5__**) ;
 TYPE_5__* FUNC_13 (int ,int *) ;
 TYPE_8__ VAR_22 ;
 TYPE_7__ VAR_23 ;
 int VAR_24 ;
 TYPE_3__ VAR_25 ;
 int VAR_26 ;
 char* VAR_27 ;
 int VAR_28 ;
 int FUNC_14 () ;
 int FUNC_15 (char*,char*,char*,char*,char*) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (int ,char*) ;
 scalar_t__ VAR_29 ;
 int FUNC_19 (char*) ;
 TYPE_5__* VAR_30 ;

int FUNC_20(int VAR_31)
{
  short VAR_32;
  int VAR_33;
  int VAR_34 = -1;
  char VAR_35[VAR_6];
  FILE *VAR_36;
  gui_menu *VAR_37 = &VAR_25;







  if (VAR_20.bg_overlay)
  {
    VAR_19[1].state |= VAR_5;
  }
  else
  {
    VAR_19[1].state &= ~VAR_5;
  }


  for (VAR_33=0; VAR_33<VAR_4; VAR_33++)
  {
    VAR_19[9+VAR_33].state &= ~VAR_5;
  }


  if (VAR_31 < 0)
  {

    for (VAR_33=0; VAR_33<VAR_4; VAR_33++)
    {
      VAR_19[9+VAR_33].data = VAR_2[VAR_33];
    }
  }
  else
  {

    for (VAR_33=0; VAR_33<VAR_4; VAR_33++)
    {
      VAR_19[9+VAR_33].data = ((void*)0);
    }


    VAR_19[9 + VAR_31].data = VAR_2[VAR_31];
    VAR_19[9 + VAR_31].state |= VAR_5;
  }


  FUNC_3(VAR_37);
  VAR_29 = 0;

  while (1)
  {

    if (VAR_34 != VAR_28)
    {

      FUNC_12(&VAR_19[8].texture);
      VAR_19[8].state &= ~VAR_5;

      VAR_34 = VAR_28;
      VAR_29 = 0;

      if (!VAR_21[VAR_28].flags)
      {

        if (VAR_31 < 0)
        {

          for (VAR_33=0; VAR_33<VAR_4; VAR_33++)
          {
            VAR_19[9+VAR_33].state &= ~VAR_5;
          }


          VAR_31 = VAR_22.entries[VAR_28].filetype;


          VAR_19[9 + VAR_31].state |= VAR_5;


          FUNC_15(VAR_35,"%s/snaps/%s/%s", VAR_3, VAR_1[VAR_31], VAR_21[VAR_28].filename);


          VAR_31 = -1;
        }
        else
        {

          FUNC_15(VAR_35,"%s/snaps/%s/%s", VAR_3, VAR_1[VAR_31], VAR_21[VAR_28].filename);
        }


        VAR_33 = FUNC_19(VAR_35) - 1;
        while ((VAR_33 > 0) && (VAR_35[VAR_33] != '.')) VAR_33--;
        if (VAR_33 > 0) VAR_35[VAR_33] = 0;


        FUNC_16(VAR_35, ".png");


        VAR_36 = FUNC_9(VAR_35, "rb");
        if (VAR_36)
        {
          VAR_19[8].texture = FUNC_13(0,VAR_36);
          if (VAR_19[8].texture)
          {
            VAR_19[8].state |= VAR_5;
          }
          FUNC_8(VAR_36);
        }
      }
    }


    if (VAR_37->selected != -1)
    {

      FUNC_18(VAR_18.comment,"");
    }
    else if (VAR_21[VAR_28].flags)
    {

      FUNC_18(VAR_18.comment,"Open Directory");
    }
    else
    {

      FUNC_18(VAR_18.comment,"Load File");
    }


    FUNC_1(VAR_37);
    FUNC_11();

    VAR_32 = VAR_23.keys;


    if (VAR_32 & VAR_9)
    {
      VAR_28++;
      if (VAR_28 == VAR_24)
        VAR_28 = VAR_26 = 0;
      if ((VAR_28 - VAR_26) >= 10)
        VAR_26 += 10;
    }


    else if (VAR_32 & VAR_12)
    {
      VAR_28--;
      if (VAR_28 < 0)
      {
        VAR_28 = VAR_24 - 1;
        VAR_26 = VAR_24 - 10;
      }
      if (VAR_28 < VAR_26)
        VAR_26 -= 10;
      if (VAR_26 < 0)
        VAR_26 = 0;
    }


    else if (VAR_32 & (VAR_13 | VAR_10))
    {
      if (VAR_24 >= 10)
      {
        VAR_28 -= 10;
        if (VAR_28 < 0)
        {
          VAR_28 = VAR_26 = 0;
        }
        else if (VAR_28 < VAR_26)
        {
          VAR_26 -= 10;
          if (VAR_26 < 0) VAR_26 = 0;
        }
      }
    }


    else if (VAR_32 & (VAR_14 | VAR_11))
    {
      if (VAR_24 >= 10)
      {
        VAR_28 += 10;
        if (VAR_28 > VAR_24 - 1)
        {

          VAR_28 = VAR_24 - 1;
          VAR_26 = VAR_24 - 10;
        }
        else if (VAR_28 >= (VAR_26 + 10))
        {

          VAR_26 += 10;
          if (VAR_26 > (VAR_24 - 10)) VAR_26 = VAR_24 - 10;
        }
      }
    }


    else if (VAR_32 & VAR_15)
    {
      FUNC_0(VAR_37);
      return 0;
    }


    else if (VAR_32 & VAR_8)
    {
      VAR_29 = 0;


      if (FUNC_7(1, VAR_27))
      {

        VAR_24 = FUNC_5();


        VAR_28 = VAR_26 = 0;
        VAR_34 = -1;


        for (VAR_33=0; VAR_33<VAR_24; VAR_33++)
        {
          if ((VAR_21[VAR_33].flags) && !FUNC_17(VAR_27,VAR_21[VAR_33].filename))
          {
            VAR_28 = VAR_33;
            while (VAR_33 >= (VAR_26 + 10))
            {
              VAR_26 += 10;
              if (VAR_26 > (VAR_24 - 10)) VAR_26 = VAR_24 - 10;
            }
            break;
          }
        }
      }
      else
      {

        FUNC_0(VAR_37);
        return 0;
      }
    }


    else if (VAR_32 & VAR_7)
    {
      VAR_29 = 0;


      if (VAR_37->selected < VAR_37->max_buttons)
      {
        if (VAR_21[VAR_28].flags)
        {

          FUNC_7(0, VAR_21[VAR_28].filename);


          VAR_24 = FUNC_5();


          VAR_28 = VAR_26 = 0;
          VAR_34 = -1;
        }
        else
        {

          int VAR_38 = FUNC_4(VAR_28);


          FUNC_0(VAR_37);


          return VAR_38;
        }
      }
    }
  }
}
