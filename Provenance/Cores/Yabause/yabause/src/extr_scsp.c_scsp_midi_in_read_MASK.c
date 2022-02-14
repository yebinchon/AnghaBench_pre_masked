
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int midflag; int midincnt; int* midinbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

u8
FUNC_2 (void)
{
  u8 VAR_4;

  VAR_3.midflag &= ~(VAR_2 | VAR_1);

  if (VAR_3.midincnt > 0)
    {
      if (VAR_3.midincnt > 1)
        {
          FUNC_1(0x8);
          FUNC_0(0x8);
        }
      else
        {
          VAR_3.midflag |= VAR_0;
        }

      VAR_4 = VAR_3.midinbuf[0];

      switch ((--VAR_3.midincnt) & 3)
        {
        case 1:
          VAR_3.midinbuf[0] = VAR_3.midinbuf[1];
          break;

        case 2:
          VAR_3.midinbuf[0] = VAR_3.midinbuf[1];
          VAR_3.midinbuf[1] = VAR_3.midinbuf[2];
          break;

        case 3:
          VAR_3.midinbuf[0] = VAR_3.midinbuf[1];
          VAR_3.midinbuf[1] = VAR_3.midinbuf[2];
          VAR_3.midinbuf[2] = VAR_3.midinbuf[3];
          break;
        }

      return VAR_4;
    }

  return 0xFF;
}
