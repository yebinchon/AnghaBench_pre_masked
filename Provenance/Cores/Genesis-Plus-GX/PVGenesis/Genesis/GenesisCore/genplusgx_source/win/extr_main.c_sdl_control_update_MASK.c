
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_8__ {int x; int changed; int h; } ;
struct TYPE_14__ {TYPE_1__ viewport; } ;
struct TYPE_13__ {int bios; int region_detect; int overscan; int gg_extra; } ;
struct TYPE_12__ {int * dev; } ;
struct TYPE_11__ {int ticks; } ;
struct TYPE_10__ {int surf_screen; } ;
struct TYPE_9__ {int sample_rate; } ;
typedef int SDLKey ;
typedef int FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ) ;
 TYPE_7__ VAR_11 ;
 TYPE_6__ VAR_12 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int **,int,int,int *) ;
 int VAR_13 ;
 int FUNC_6 (int **,int,int,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 TYPE_5__ VAR_14 ;
 int* VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_4__ VAR_20 ;
 TYPE_3__ VAR_21 ;
 TYPE_2__ VAR_22 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int ** VAR_28 ;
 size_t VAR_29 ;

__attribute__((used)) static int FUNC_13(SDLKey VAR_30)
{
    switch (VAR_30)
    {
      case 128:
      {
        FUNC_12();
        break;
      }

      case 140:
      {
        if (FUNC_1(-1)) FUNC_1(0);
        else FUNC_1(1);
        break;
      }

      case 136:
      {
        if (VAR_13) VAR_13 = 0;
        else VAR_13 = VAR_2;
        VAR_21.surf_screen = FUNC_0(VAR_10, VAR_9, 16, VAR_3 | VAR_13);
        break;
      }

      case 135:
      {
        if (VAR_12.bios == 0) VAR_12.bios = 3;
        else if (VAR_12.bios == 3) VAR_12.bios = 1;
        break;
      }

      case 134:
      {
        if (!VAR_25) VAR_26 ^= 1;
        break;
      }

      case 133:
      {
        VAR_18 ^= 1;
        break;
      }

      case 132:
      {
        if (!VAR_26)
        {
          VAR_25 ^=1;
          VAR_20.ticks = 0;
        }
        break;
      }

      case 131:
      {
        FILE *VAR_31 = FUNC_4("game.gp0","rb");
        if (VAR_31)
        {
          uint8 VAR_32[VAR_4];
          FUNC_5(&VAR_32, VAR_4, 1, VAR_31);
          FUNC_9(VAR_32);
          FUNC_3(VAR_31);
        }
        break;
      }

      case 130:
      {
        FILE *VAR_33 = FUNC_4("game.gp0","wb");
        if (VAR_33)
        {
          uint8 VAR_34[VAR_4];
          int VAR_35 = FUNC_10(VAR_34);
          FUNC_6(&VAR_34, VAR_35, 1, VAR_33);
          FUNC_3(VAR_33);
        }
        break;
      }

      case 129:
      {
        VAR_12.region_detect = (VAR_12.region_detect + 1) % 5;
        FUNC_8(0);


        FUNC_2(VAR_22.sample_rate, 0);


        if ((VAR_24 == VAR_6) || ((VAR_24 & VAR_8) && (VAR_12.bios & 1)))
        {
          FUNC_11();
          FUNC_12();
        }
        else
        {

          if (VAR_24 == VAR_7)
          {
            VAR_15[0x00] = 0x20 | VAR_19 | (VAR_12.bios & 1);
          }
          else
          {
            VAR_15[0x00] = 0x80 | (VAR_19 >> 1);
          }


          if (VAR_29)
          {
            VAR_23 |= 1;
            VAR_17 = 313;
          }
          else
          {
            VAR_23 &= ~1;
            VAR_17 = 262;
          }


          switch (VAR_11.viewport.h)
          {
            case 192:
              VAR_27 = VAR_28[0][VAR_29];
              break;
            case 224:
              VAR_27 = VAR_28[1][VAR_29];
              break;
            case 240:
              VAR_27 = VAR_28[3][VAR_29];
              break;
          }
        }
        break;
      }

      case 139:
      {
        FUNC_7(0);
        break;
      }

      case 138:
      {
        VAR_12.overscan = (VAR_12.overscan + 1) & 3;
        if ((VAR_24 == VAR_5) && !VAR_12.gg_extra)
        {
          VAR_11.viewport.x = (VAR_12.overscan & 2) ? 14 : -48;
        }
        else
        {
          VAR_11.viewport.x = (VAR_12.overscan & 2) * 7;
        }
        VAR_11.viewport.changed = 3;
        break;
      }

      case 137:
      {
        VAR_16 = (VAR_16 + 1) % VAR_0;
        while (VAR_14.dev[VAR_16] == VAR_1)
        {
          VAR_16 = (VAR_16 + 1) % VAR_0;
        }
        break;
      }

      case 141:
      {
        return 0;
      }

      default:
        break;
    }

   return 1;
}
