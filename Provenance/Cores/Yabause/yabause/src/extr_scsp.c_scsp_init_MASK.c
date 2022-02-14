
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {void (* sintf ) (u32) ;void (* mintf ) () ;int * scsp_ram; } ;


 int FUNC_0 (char*,size_t,size_t,size_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 double VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 double FUNC_1 (int,double) ;
 size_t FUNC_2 () ;
 TYPE_1__ VAR_10 ;
 size_t* VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 size_t* VAR_14 ;
 scalar_t__* VAR_15 ;
 int * VAR_16 ;
 size_t* VAR_17 ;
 size_t* VAR_18 ;
 size_t* VAR_19 ;
 size_t* VAR_20 ;
 size_t* VAR_21 ;
 int* VAR_22 ;
 void** VAR_23 ;
 size_t* VAR_24 ;
 size_t* VAR_25 ;
 scalar_t__* VAR_26 ;
 int * VAR_27 ;
 int FUNC_3 () ;
 void* FUNC_4 (double) ;
 int FUNC_5 () ;
 void** VAR_28 ;

void
FUNC_6 (u8 *VAR_29, void (*VAR_30)(u32), void (*VAR_31)(void))
{
  u32 VAR_32, VAR_33;
  double VAR_34;

  FUNC_5 ();

  VAR_16 = &VAR_27[0x0000];
  VAR_12 = &VAR_27[0x0400];
  VAR_13 = &VAR_27[0x0700];

  VAR_10.scsp_ram = VAR_29;
  VAR_10.sintf = VAR_30;
  VAR_10.mintf = VAR_31;

  for (VAR_32 = 0; VAR_32 < VAR_4; VAR_32++)
    {

      VAR_34 = FUNC_1 (((double)(VAR_5 - VAR_32) / (double)VAR_4), 7);
      VAR_34 *= (double)VAR_4;
      VAR_15[VAR_32] = VAR_5 - (s32)VAR_34;


      VAR_34 = FUNC_1 (((double)VAR_32 / (double)VAR_4), 1);
      VAR_34 *= (double)VAR_4;
      VAR_15[VAR_32 + VAR_4] = VAR_5 - (s32)VAR_34;
    }

  for (VAR_32 = 0, VAR_33 = 0; VAR_32 < 32; VAR_32++)
    {
      VAR_33 += 1 << (VAR_32 >> 2);


      VAR_34 = (VAR_6 / 256.0) / (double)VAR_33;


      VAR_23[31 - VAR_32] = FUNC_4(VAR_34 * ((double)VAR_8 /
                                              (double)VAR_6) *
                                         (double)(1 << VAR_7));
    }


  for (VAR_32 = 0; VAR_32 < VAR_8; VAR_32++)
    {

      VAR_19[VAR_32] = VAR_9 - VAR_32;

      if (VAR_32 < (VAR_8 / 2))
        VAR_21[VAR_32] = VAR_9;
      else
        VAR_21[VAR_32] = 0;

      if (VAR_32 < (VAR_8 / 2))
        VAR_24[VAR_32] = VAR_9 - (VAR_32 * 2);
      else
        VAR_24[VAR_32] = (VAR_32 - (VAR_8 / 2)) * 2;

      VAR_17[VAR_32] = FUNC_2() & VAR_9;


      VAR_20[(VAR_32 + 512) & VAR_9] = VAR_32 - (VAR_8 / 2);

      if (VAR_32 < (VAR_8 / 2))
        VAR_22[VAR_32] = VAR_9 - (VAR_8 / 2) - 128;
      else
        VAR_22[VAR_32] = 0 - (VAR_8 / 2) + 128;

      if (VAR_32 < (VAR_8 / 2))
        VAR_25[(VAR_32 + 768) & VAR_9] = (VAR_32 * 2) -
                                                    (VAR_8 / 2);
      else
        VAR_25[(VAR_32 + 768) & VAR_9] =
          (VAR_9 - ((VAR_32 - (VAR_8 / 2)) * 2)) -
          (VAR_8 / 2) + 1;

      VAR_18[VAR_32] = VAR_17[VAR_32] - (VAR_8 / 2);
    }

  for(VAR_32 = 0; VAR_32 < 4; VAR_32++)
    {
      VAR_11[VAR_32] = 0;
      VAR_14[VAR_32] = 0;
    }

  for(VAR_32 = 0; VAR_32 < 60; VAR_32++)
    {
      VAR_34 = 1.0 + ((VAR_32 & 3) * 0.25);
      VAR_34 *= (double)(1 << ((VAR_32 >> 2)));
      VAR_34 *= (double)(VAR_4 << VAR_3);

      VAR_11[VAR_32 + 4] = FUNC_4(VAR_34 / (double)VAR_0);
      VAR_14[VAR_32 + 4] = FUNC_4(VAR_34 / (double)VAR_1);

      if (VAR_11[VAR_32 + 4] == 0) VAR_11[VAR_32 + 4] = 1;
      if (VAR_14[VAR_32 + 4] == 0) VAR_14[VAR_32 + 4] = 1;
    }

  VAR_11[63] = VAR_2;
  VAR_14[61] = VAR_14[60];
  VAR_14[62] = VAR_14[60];
  VAR_14[63] = VAR_14[60];

  for(VAR_32 = 64; VAR_32 < 96; VAR_32++)
    {
      VAR_11[VAR_32] = VAR_11[63];
      VAR_14[VAR_32] = VAR_14[63];
      VAR_26[VAR_32 - 64] = 0;
    }

  for(VAR_32 = 0; VAR_32 < 96; VAR_32++)
    {
      FUNC_0 ("attack rate[%d] = %.8X -> %.8X\n", VAR_32, VAR_11[VAR_32],
               VAR_11[VAR_32] >> VAR_3);
      FUNC_0 ("decay rate[%d] = %.8X -> %.8X\n", VAR_32, VAR_14[VAR_32],
               VAR_14[VAR_32] >> VAR_3);
    }

  for(VAR_32 = 0; VAR_32 < 256; VAR_32++)
    VAR_28[VAR_32] = FUNC_4(FUNC_1(10, ((double)VAR_32 * -0.3762) / 20) * 1024.0);

  FUNC_3();
}
