
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int midoutcnt; int* midoutbuf; int midflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

u8
FUNC_2 (void)
{
  u8 VAR_3;

  VAR_2.midflag &= ~VAR_1;

  if (VAR_2.midoutcnt > 0)
    {
      if (VAR_2.midoutcnt == 1)
        {
          VAR_2.midflag |= VAR_0;
          FUNC_1(0x200);
          FUNC_0(0x200);
        }

      VAR_3 = VAR_2.midoutbuf[0];

      switch (--VAR_2.midoutcnt & 3)
        {
        case 1:
          VAR_2.midoutbuf[0] = VAR_2.midoutbuf[1];
          break;

        case 2:
          VAR_2.midoutbuf[0] = VAR_2.midoutbuf[1];
          VAR_2.midoutbuf[1] = VAR_2.midoutbuf[2];
          break;

        case 3:
          VAR_2.midoutbuf[0] = VAR_2.midoutbuf[1];
          VAR_2.midoutbuf[1] = VAR_2.midoutbuf[2];
          VAR_2.midoutbuf[2] = VAR_2.midoutbuf[3];
          break;
        }

      return VAR_3;
    }

  return 0xFF;
}
