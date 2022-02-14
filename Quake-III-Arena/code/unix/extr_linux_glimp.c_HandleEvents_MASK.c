
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int qboolean ;
struct TYPE_14__ {int y; int x; } ;
struct TYPE_13__ {int y; int x; } ;
struct TYPE_16__ {int button; } ;
struct TYPE_12__ {int time; } ;
struct TYPE_15__ {int x_root; int y_root; int x; int y; } ;
struct TYPE_17__ {int type; TYPE_2__ xconfigure; TYPE_1__ xcreatewindow; TYPE_4__ xbutton; TYPE_11__ xkey; TYPE_3__ xmotion; } ;
typedef TYPE_5__ XEvent ;
struct TYPE_20__ {int keyCatchers; } ;
struct TYPE_19__ {int vidWidth; int vidHeight; } ;
struct TYPE_18__ {int value; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,int,int,int ,int *) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (TYPE_11__*,int*) ;
 int FUNC_3 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int,int) ;
 int FUNC_6 (int) ;
 TYPE_9__ VAR_8 ;
 int VAR_9 ;
 TYPE_8__ VAR_10 ;
 TYPE_7__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_7 (TYPE_5__*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static void FUNC_8(void)
{
  int VAR_23;
  int VAR_24;
  XEvent VAR_25;
  qboolean VAR_26 = VAR_18;
  char *VAR_27;
  int VAR_28, VAR_29;
  int VAR_30 = 0;

  if (!VAR_9)
    return;

  while (FUNC_4(VAR_9))
  {
    FUNC_3(VAR_9, &VAR_25);
    switch (VAR_25.type)
    {
    case 130:
   VAR_30 = FUNC_1(VAR_25.xkey.time);
      VAR_27 = FUNC_2(&VAR_25.xkey, &VAR_24);
      if (VAR_24)
      {
        FUNC_0( VAR_30, VAR_6, VAR_24, VAR_19, 0, ((void*)0) );
      }
      if (VAR_27)
      {
        while (*VAR_27)
        {
          FUNC_0( VAR_30, VAR_5, *VAR_27++, 0, 0, ((void*)0) );
        }
      }
      break;

    case 129:
   VAR_30 = FUNC_1(VAR_25.xkey.time);




      if (VAR_8.keyCatchers == 0)
      {
        if (FUNC_7(&VAR_25) == VAR_19)
          continue;
      }
      FUNC_2(&VAR_25.xkey, &VAR_24);

      FUNC_0( VAR_30, VAR_6, VAR_24, VAR_18, 0, ((void*)0) );
      break;

    case 128:
   VAR_30 = FUNC_1(VAR_25.xkey.time);
      if (VAR_13)
      {
        if (VAR_11->value)
        {
          if (FUNC_6(VAR_25.xmotion.x_root) > 1)
            VAR_16 += VAR_25.xmotion.x_root * 2;
          else
            VAR_16 += VAR_25.xmotion.x_root;
          if (FUNC_6(VAR_25.xmotion.y_root) > 1)
            VAR_17 += VAR_25.xmotion.y_root * 2;
          else
            VAR_17 += VAR_25.xmotion.y_root;
          if (VAR_30 - VAR_12 > VAR_3 )
          {
            FUNC_0( VAR_30, VAR_7, VAR_16, VAR_17, 0, ((void*)0) );
          }
          VAR_16 = VAR_17 = 0;
        } else
        {

          if (VAR_25.xmotion.x == VAR_10.vidWidth/2 &&
              VAR_25.xmotion.y == VAR_10.vidHeight/2)
          {
            VAR_14 = VAR_10.vidWidth/2;
            VAR_15 = VAR_10.vidHeight/2;
            if (VAR_30 - VAR_12 > VAR_3 )
            {
              FUNC_0( VAR_30, VAR_7, VAR_16, VAR_17, 0, ((void*)0) );
            }
            VAR_16 = VAR_17 = 0;
            break;
          }

          VAR_28 = ((int)VAR_25.xmotion.x - VAR_14);
          VAR_29 = ((int)VAR_25.xmotion.y - VAR_15);
          if (FUNC_6(VAR_28) > 1)
            VAR_16 += VAR_28 * 2;
          else
            VAR_16 += VAR_28;
          if (FUNC_6(VAR_29) > 1)
            VAR_17 += VAR_29 * 2;
          else
            VAR_17 += VAR_29;

          VAR_14 = VAR_25.xmotion.x;
          VAR_15 = VAR_25.xmotion.y;
          VAR_26 = VAR_19;
        }
      }
      break;

    case 134:
    VAR_30 = FUNC_1(VAR_25.xkey.time);
      if (VAR_25.xbutton.button == 4)
      {
        FUNC_0( VAR_30, VAR_6, VAR_2, VAR_19, 0, ((void*)0) );
      } else if (VAR_25.xbutton.button == 5)
      {
        FUNC_0( VAR_30, VAR_6, VAR_1, VAR_19, 0, ((void*)0) );
      } else
      {

        VAR_23=-1;
        if (VAR_25.xbutton.button == 1)
        {
          VAR_23 = 0;
        } else if (VAR_25.xbutton.button == 2)
        {
          VAR_23 = 2;
        } else if (VAR_25.xbutton.button == 3)
        {
          VAR_23 = 1;
        } else if (VAR_25.xbutton.button == 6)
        {
          VAR_23 = 3;
        } else if (VAR_25.xbutton.button == 7)
        {
          VAR_23 = 4;
        };

        FUNC_0( VAR_30, VAR_6, VAR_0 + VAR_23, VAR_19, 0, ((void*)0) );
      }
      break;

    case 133:
    VAR_30 = FUNC_1(VAR_25.xkey.time);
      if (VAR_25.xbutton.button == 4)
      {
        FUNC_0( VAR_30, VAR_6, VAR_2, VAR_18, 0, ((void*)0) );
      } else if (VAR_25.xbutton.button == 5)
      {
        FUNC_0( VAR_30, VAR_6, VAR_1, VAR_18, 0, ((void*)0) );
      } else
      {
        VAR_23=-1;
        if (VAR_25.xbutton.button == 1)
        {
          VAR_23 = 0;
        } else if (VAR_25.xbutton.button == 2)
        {
          VAR_23 = 2;
        } else if (VAR_25.xbutton.button == 3)
        {
          VAR_23 = 1;
        } else if (VAR_25.xbutton.button == 6)
        {
          VAR_23 = 3;
        } else if (VAR_25.xbutton.button == 7)
        {
          VAR_23 = 4;
        };
        FUNC_0( VAR_30, VAR_6, VAR_0 + VAR_23, VAR_18, 0, ((void*)0) );
      }
      break;

    case 131 :
      VAR_21 = VAR_25.xcreatewindow.x;
      VAR_22 = VAR_25.xcreatewindow.y;
      break;

    case 132 :
      VAR_21 = VAR_25.xconfigure.x;
      VAR_22 = VAR_25.xconfigure.y;
      break;
    }
  }

  if (VAR_26)
  {
    FUNC_5(VAR_9,VAR_4,VAR_20,0,0,0,0,
                 (VAR_10.vidWidth/2),(VAR_10.vidHeight/2));
  }
}
