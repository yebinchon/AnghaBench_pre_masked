
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int romsize; int rom; } ;
struct TYPE_3__ {int * bootrom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 TYPE_2__ VAR_7 ;
 int FUNC_0 (int ,int *,int,int ) ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

int FUNC_1(void)
{
  int VAR_12 = 0;

  switch (VAR_11)
  {
    case 130:
    {

      if (!(VAR_10 & 0x10) || ((VAR_10 & 0x0c) != (VAR_8 >> 4)))
      {

        switch (VAR_8)
        {
          case 133:
            VAR_12 = FUNC_0(VAR_2, VAR_9.bootrom, sizeof(VAR_9.bootrom), 0);
            break;
          case 134:
            VAR_12 = FUNC_0(VAR_0, VAR_9.bootrom, sizeof(VAR_9.bootrom), 0);
            break;
          default:
            VAR_12 = FUNC_0(VAR_1, VAR_9.bootrom, sizeof(VAR_9.bootrom), 0);
            break;
        }


        if (VAR_12 > 0)
        {
          VAR_10 = VAR_10 | 0x10;


          VAR_10 = (VAR_10 & 0xf0) | (VAR_8 >> 4);
        }

        return VAR_12;
      }

      return -1;
    }

    case 132:
    case 131:
    {

      if (!(VAR_10 & 132))
      {

        VAR_10 &= ~(129 | 132);


        if (VAR_7.romsize <= 0x400000)
        {

          VAR_12 = FUNC_0(VAR_3, VAR_7.rom + 0x400000, 0x100000, 0);

          if (VAR_12 > 0)
          {

            VAR_10 |= 132;
          }
        }

        return VAR_12;
      }

      return -1;
    }

    case 129:
    case 128:
    {

      if (!(VAR_10 & 129) || ((VAR_10 & 0x0c) != (VAR_8 >> 4)))
      {

        VAR_10 &= ~(129 | 132);


        if (VAR_7.romsize <= 0x400000)
        {

          switch (VAR_8)
          {
            case 133:
              VAR_12 = FUNC_0(VAR_6, VAR_7.rom + 0x400000, 0x400000, 0);
              break;
            case 134:
              VAR_12 = FUNC_0(VAR_4, VAR_7.rom + 0x400000, 0x400000, 0);
              break;
            default:
              VAR_12 = FUNC_0(VAR_5, VAR_7.rom + 0x400000, 0x400000, 0);
              break;
          }

          if (VAR_12 > 0)
          {

            VAR_10 |= 129;


            VAR_10 = (VAR_10 & 0xf0) | (VAR_8 >> 4);
          }
        }

        return VAR_12;
      }

      return -1;
    }

    default:
    {
      return 0;
    }
  }
}
