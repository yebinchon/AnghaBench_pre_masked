
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int h; int y; int w; int x; } ;
struct TYPE_6__ {TYPE_1__ viewport; } ;
struct TYPE_5__ {int aspect; int overscan; scalar_t__ yscale; scalar_t__ xscale; scalar_t__ render; int gg_extra; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_0(int *VAR_11, int *VAR_12)
{

  *VAR_12 = (VAR_4.viewport.h + (2 * VAR_4.viewport.y)) / 2;


  if (VAR_5.aspect)
  {

    if (VAR_10 && (!VAR_6 || VAR_5.render))
    {
      *VAR_12 = *VAR_12 * VAR_2 / VAR_3;
    }
    else if (!VAR_10 && VAR_6 && !VAR_5.render)
    {
      *VAR_12 = *VAR_12 * VAR_3 / VAR_2;
    }





    if (VAR_5.overscan & 2)
    {

      if (VAR_7[12] & 1)
      {

        *VAR_11 = (VAR_8 == VAR_0) ? 350 : 354;
      }
      else
      {

        *VAR_11 = (VAR_8 == VAR_0) ? 357 : 361;
      }
    }
    else
    {

      if ((VAR_9 == VAR_1) && !VAR_5.gg_extra)
      {

        *VAR_11 = 202;
      }
      else
      {

        *VAR_11 = (VAR_8 == VAR_0) ? 322 : 325;
      }
    }


    if (VAR_5.aspect & 2)
    {

      *VAR_11 = (*VAR_11 * 3) / 4;
    }
  }


  else
  {

    *VAR_11 = VAR_4.viewport.w + (2 * VAR_4.viewport.x);


    if (!(VAR_7[12] & 1))
    {
        *VAR_11 = (*VAR_11 * 320) / 256;
    }


    if ((VAR_9 == VAR_1) && !VAR_5.gg_extra)
    {
      if (!(VAR_5.overscan & 1))
      {

        *VAR_12 = 112;
      }

      if (!(VAR_5.overscan & 2))
      {

        *VAR_11 = 320;
      }
    }


    if (VAR_6 && !VAR_5.render)
    {

      *VAR_12 = *VAR_12 * VAR_3 / VAR_2;
    }


    *VAR_11 += VAR_5.xscale;
    *VAR_12 += VAR_5.yscale;
  }
}
