
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int int32 ;
typedef int int16 ;
struct TYPE_4__ {int filter; int lp_range; scalar_t__ mono; } ;
struct TYPE_3__ {int ** blips; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int) ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 (int *,int) ;
 int VAR_3 ;
 int FUNC_4 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_8 ;

int FUNC_7(int16 *VAR_9)
{

  int VAR_10 = FUNC_6(VAR_5);


  if (VAR_8 == VAR_1)
  {

    FUNC_5(VAR_10);


    FUNC_2(VAR_10);
  }
  FUNC_1(VAR_7.blips[0][0], VAR_9 + 1, VAR_10);
  FUNC_1(VAR_7.blips[0][1], VAR_9, VAR_10);



  if (VAR_8 == VAR_1)
  {







    FUNC_0(VAR_7.blips[1][0], VAR_9 + 1, VAR_10);
    FUNC_0(VAR_7.blips[1][1], VAR_9, VAR_10);
    FUNC_0(VAR_7.blips[2][0], VAR_9 + 1, VAR_10);
    FUNC_0(VAR_7.blips[2][1], VAR_9, VAR_10);

  }


  if (VAR_2.filter)
  {
    int VAR_11 = VAR_10;
    int16 *VAR_12 = VAR_9;
    int32 VAR_13, VAR_14;

    if (VAR_2.filter & 1)
    {

      uint32 VAR_15 = VAR_2.lp_range;
      uint32 VAR_16 = 0x10000 - VAR_15;


      VAR_13 = VAR_4;
      VAR_14 = VAR_6;

      do
      {

        VAR_13 = VAR_13*VAR_15 + VAR_12[0]*VAR_16;
        VAR_14 = VAR_14*VAR_15 + VAR_12[1]*VAR_16;


        VAR_13 >>= 16;
        VAR_14 >>= 16;


        *VAR_12++ = VAR_13;
        *VAR_12++ = VAR_14;
      }
      while (--VAR_11);


      VAR_4 = VAR_13;
      VAR_6 = VAR_14;
    }
    else if (VAR_2.filter & 2)
    {
      do
      {

        VAR_13 = FUNC_3(&VAR_3,VAR_12[0]);
        VAR_14 = FUNC_3(&VAR_3,VAR_12[1]);


        if (VAR_13 > 32767) VAR_13 = 32767;
        else if (VAR_13 < -32768) VAR_13 = -32768;
        if (VAR_14 > 32767) VAR_14 = 32767;
        else if (VAR_14 < -32768) VAR_14 = -32768;


        *VAR_12++ = VAR_13;
        *VAR_12++ = VAR_14;
      }
      while (--VAR_11);
    }
  }


  if (VAR_2.mono)
  {
    int16 VAR_17;
    int VAR_18 = VAR_10;
    do
    {
      VAR_17 = (VAR_9[0] + VAR_9[1]) / 2;
      *VAR_9++ = VAR_17;
      *VAR_9++ = VAR_17;
    }
    while (--VAR_18);
  }





  return VAR_10;
}
