
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int midflag; int midincnt; int * midinbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

void
FUNC_2 (u8 VAR_4)
{
  if (VAR_3.midflag & VAR_0)
    {
      FUNC_1(0x8);
      FUNC_0(0x8);
    }

  VAR_3.midflag &= ~VAR_0;

  if (VAR_3.midincnt > 3)
    {
      VAR_3.midflag |= VAR_2;
      return;
    }

  VAR_3.midinbuf[VAR_3.midincnt++] = VAR_4;

  if (VAR_3.midincnt > 3) VAR_3.midflag |= VAR_1;
}
