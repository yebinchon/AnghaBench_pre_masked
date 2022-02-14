
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sms_ntsc_t ;
typedef int md_ntsc_t ;
struct TYPE_7__ {int x; int changed; } ;
struct TYPE_12__ {TYPE_1__ viewport; } ;
struct TYPE_11__ {double gamma; int tv_mode; int render; int overscan; int ntsc; scalar_t__ cd_leds; scalar_t__* gun_cursor; TYPE_2__* input; int gg_extra; scalar_t__ vsync; int trap; } ;
struct TYPE_10__ {scalar_t__* dev; scalar_t__* system; } ;
struct TYPE_9__ {int viTVMode; int xfbMode; } ;
struct TYPE_8__ {scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_6__ VAR_15 ;
 void*** VAR_16 ;
 TYPE_5__ VAR_17 ;
 void** VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ,int ) ;
 TYPE_4__ VAR_20 ;
 int * VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (int *,int *) ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_8 (int,int) ;
 int * VAR_25 ;
 int VAR_26 ;
 int FUNC_9 (int *,int *) ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 TYPE_3__** VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;

void FUNC_10(void)
{






  if ((VAR_17.tv_mode == 1) || ((VAR_17.tv_mode == 2) && VAR_31))
  {

    VAR_19 = 1;
  }
  else
  {

    VAR_19 = 0;
  }


  if (VAR_17.vsync && (VAR_19 == VAR_31))
  {

    FUNC_2(VAR_32);
    FUNC_0();
  }


  if (VAR_17.render == 2)
  {
    VAR_30[2]->viTVMode = VAR_12;
    VAR_30[2]->xfbMode = VAR_14;
  }
  else if (VAR_17.render == 1)
  {
    VAR_30[2]->viTVMode = VAR_30[0]->viTVMode & ~3;
    VAR_30[2]->xfbMode = VAR_13;
  }


  if ((VAR_29 == VAR_9) && !VAR_17.gg_extra)
  {
    VAR_15.viewport.x = (VAR_17.overscan & 2) ? 14 : -48;
  }
  else
  {
    VAR_15.viewport.x = (VAR_17.overscan & 2) * 7;
  }


  VAR_15.viewport.changed = 3;


  if (VAR_17.ntsc)
  {

    if (!VAR_25)
    {
      VAR_25 = (sms_ntsc_t *)FUNC_8(32,sizeof(sms_ntsc_t));
    }
    if (!VAR_21)
    {
      VAR_21 = (md_ntsc_t *)FUNC_8(32,sizeof(md_ntsc_t));
    }


    switch (VAR_17.ntsc)
    {
      case 1:
        FUNC_9(VAR_25, &VAR_26);
        FUNC_7(VAR_21, &VAR_22);
        break;
      case 2:
        FUNC_9(VAR_25, &VAR_28);
        FUNC_7(VAR_21, &VAR_24);
        break;
      case 3:
        FUNC_9(VAR_25, &VAR_27);
        FUNC_7(VAR_21, &VAR_23);
        break;
    }
  }


  int VAR_34, VAR_35 = 0;
  for (VAR_34=0; VAR_34<VAR_7; VAR_34++)
  {

    if (VAR_20.dev[VAR_34] == VAR_6)
    {

      if (VAR_17.input[VAR_35].device >= 0)
      {
        if ((VAR_34 == 0) || ((VAR_34 == 4) && (VAR_20.system[1] != VAR_10)))
        {

          if (VAR_17.gun_cursor[0])
          {
            VAR_18[0] = FUNC_6(VAR_4,0);
          }
        }
        else
        {

          if (VAR_17.gun_cursor[1])
          {
            VAR_18[1] = FUNC_6(VAR_5,0);
          }
        }
      }
    }


    if (VAR_20.dev[VAR_34] != VAR_8)
    {

      VAR_35++;
    }
  }


  if (VAR_29 == VAR_11)
  {
    if (VAR_17.cd_leds)
    {
      VAR_16[0][0] = FUNC_6(VAR_0,0);
      VAR_16[0][1] = FUNC_6(VAR_1,0);
      VAR_16[1][0] = FUNC_6(VAR_2,0);
      VAR_16[1][1] = FUNC_6(VAR_3,0);
    }
  }


  FUNC_5(0);


  VAR_33 = 0;
  FUNC_4();
}
