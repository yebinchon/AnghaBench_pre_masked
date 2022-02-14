
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* reg; } ;
struct TYPE_4__ {TYPE_1__ video; } ;


 int FUNC_0 (int,int,int,int) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int,int,int,int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;

void FUNC_4(int VAR_4, int VAR_5)
{
  int VAR_6, VAR_7 = 0;
  int VAR_8 = (VAR_1.video.reg[0xC] & 8) >> 3;
  int VAR_9 = VAR_1.video.reg[7];

  FUNC_3(VAR_2);

  if (VAR_3 != 240)
    VAR_7 = 8;

  for (VAR_6 = VAR_0; VAR_6 < VAR_4; VAR_6++)
  {
    FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9);
  }


  if (VAR_6 <= VAR_4)
  {
    if (VAR_5)
         FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9);
    else FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9);
    VAR_6++;
  }
  VAR_0 = VAR_6;

  FUNC_2(VAR_2);
}
