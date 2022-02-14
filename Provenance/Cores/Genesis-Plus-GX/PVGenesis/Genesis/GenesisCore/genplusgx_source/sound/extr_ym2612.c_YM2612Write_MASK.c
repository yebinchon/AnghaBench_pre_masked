
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int address; } ;
struct TYPE_5__ {TYPE_1__ ST; } ;
struct TYPE_6__ {int dacout; unsigned int dacen; TYPE_2__ OPN; } ;


 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (int,unsigned int) ;
 TYPE_3__ VAR_0 ;

void FUNC_2(unsigned int VAR_1, unsigned int VAR_2)
{
  VAR_2 &= 0xff;

  switch( VAR_1 )
  {
    case 0:
      VAR_0 = VAR_2;
      break;

    case 2:
      VAR_0 = VAR_2 | 0x100;
      break;

    default:
    {
      int VAR_3 = VAR_0;
      switch( VAR_3 & 0x1f0 )
      {
        case 0x20:
          switch( VAR_3 )
          {
            case 0x2a:
              VAR_0 = ((int)VAR_2 - 0x80) << 6;
              break;
            case 0x2b:

              VAR_0 = VAR_2 & 0x80;
              break;
            default:

              FUNC_0(VAR_3,VAR_2);
          }
          break;
        default:

          FUNC_1(VAR_3,VAR_2);
      }
      break;
    }
  }
}
