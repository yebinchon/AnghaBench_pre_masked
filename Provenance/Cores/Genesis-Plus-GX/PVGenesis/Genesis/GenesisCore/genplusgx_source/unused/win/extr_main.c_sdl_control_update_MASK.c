
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_10__ {int member_0; int member_1; } ;
typedef TYPE_2__ uint16 ;
struct TYPE_9__ {int changed; } ;
struct TYPE_15__ {TYPE_1__ viewport; } ;
struct TYPE_14__ {int render; int overscan; } ;
struct TYPE_13__ {int * dev; } ;
struct TYPE_12__ {int surf_screen; } ;
struct TYPE_11__ {int frame_rate; int sample_rate; } ;
typedef int SDLKey ;
typedef int FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (int ,int ) ;
 TYPE_8__ VAR_7 ;
 TYPE_7__ VAR_8 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int **,int,int,int *) ;
 int FUNC_8 (unsigned char*) ;
 int VAR_9 ;
 int FUNC_9 (int **,int,int,int *) ;
 int FUNC_10 (int) ;
 TYPE_6__ VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 unsigned char* FUNC_11 (int ) ;
 int FUNC_12 (unsigned char*,int ,int ) ;
 int* VAR_13 ;
 TYPE_5__ VAR_14 ;
 TYPE_4__ VAR_15 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_2__ VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_17(SDLKey VAR_20)
{
    switch (VAR_20)
    {
      case 128:
      {
        FUNC_15();
        FUNC_16();
        break;
      }

      case 136:
      {
        if (VAR_9) VAR_9 = 0;
        else VAR_9 = VAR_2;
        VAR_14.surf_screen = FUNC_0(VAR_6, VAR_5, 16, VAR_3 | VAR_9);
        break;
      }

      case 135:
      {
        VAR_8.render ^=1;
        break;
      }

      case 134:
      {
        if (!VAR_16) VAR_17 ^= 1;
        break;
      }

      case 133:
      {
        VAR_12 ^= 1;
        break;
      }

      case 132:
      {
        if (!VAR_17) VAR_16 ^=1;
        break;
      }

      case 131:
      {
        FILE *VAR_21 = FUNC_6("game.gpz","r+b");
        if (VAR_21)
        {
          uint8 VAR_22[VAR_4];
          FUNC_7(&VAR_22, VAR_4, 1, VAR_21);
          FUNC_13(VAR_22);
          FUNC_5(VAR_21);
        }
        break;
      }

      case 130:
      {
        FILE *VAR_23 = FUNC_6("game.gpz","w+b");
        if (VAR_23)
        {
          uint8 VAR_24[VAR_4];
          FUNC_14(VAR_24);
          FUNC_9(&VAR_24, VAR_4, 1, VAR_23);
          FUNC_5(VAR_23);
        }
        break;
      }

      case 129:
      {
        VAR_19 ^= 1;


        unsigned char *VAR_25 = FUNC_11(FUNC_2());
        if (VAR_25)
          FUNC_12(VAR_25, FUNC_1(), FUNC_2());


        FUNC_4(VAR_15.sample_rate, VAR_15.frame_rate);
        FUNC_15();


        if (VAR_25)
        {
          FUNC_3(VAR_25);
          FUNC_8(VAR_25);
        }


        static const uint16 VAR_26[4][2] =
        {

          {0xDA , 0xF2},
          {0xEA , 0x102},
          {0xDA , 0xF2},
          {0x106, 0x10A}
        };
        VAR_18 = VAR_26[(VAR_13[1] >> 2) & 3][VAR_19];


        VAR_7.viewport.changed = 3;
        break;
      }

      case 139:
      {
        FUNC_10(1);
        FUNC_10(0);
        break;
      }

      case 138:
      {
        VAR_8.overscan ^= 1;
        VAR_7.viewport.changed = 3;
        break;
      }

      case 137:
      {
        VAR_11 = (VAR_11 + 1) % VAR_0;
        while (VAR_10.dev[VAR_11] == VAR_1)
        {
          VAR_11 = (VAR_11 + 1) % VAR_0;
        }
        break;
      }

      case 140:
      {
        return 0;
      }

      default:
        break;
    }

   return 1;
}
