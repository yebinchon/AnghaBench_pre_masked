
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int x; } ;
struct TYPE_4__ {TYPE_1__ viewport; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int ** VAR_4 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int) ;
 int* VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(int VAR_9)
{
  int VAR_10 = VAR_3.viewport.w;
  int VAR_11;


  if (VAR_5[1] & 0x40)
  {

    if (VAR_2)
    {
      FUNC_5(VAR_2);
      VAR_2 = 0;
    }


    FUNC_3(VAR_9, VAR_10);


    FUNC_4(VAR_10);


    if (VAR_5[0] & 0x20)
    {
      if (VAR_8 > VAR_1)
      {
        FUNC_0(&VAR_4[0][0x20], 0x40, 8);
      }
    }


    if (VAR_9 < (VAR_3.viewport.h - 1))
    {
      FUNC_1(VAR_9);
    }
  }
  else
  {

    if (VAR_8 < VAR_0)
    {

      VAR_7 |= VAR_6;
      VAR_6 = 0;


      FUNC_1(VAR_9);
    }


    FUNC_0(&VAR_4[0][0x20], 0x40, VAR_10);
  }


  VAR_11 = VAR_3.viewport.x;
  if (VAR_11 > 0)
  {
    FUNC_0(&VAR_4[0][0x20 - VAR_11], 0x40, VAR_11);
    FUNC_0(&VAR_4[0][0x20 + VAR_10], 0x40, VAR_11);
  }


  FUNC_2(VAR_9);
}
