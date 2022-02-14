
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int* VAR_17 ;

__attribute__((used)) static void FUNC_5(void)
{
  uint* VAR_18 = &VAR_4;
  uint VAR_19 = VAR_3 & 0x3f;
  uint VAR_20 = FUNC_1(*VAR_18);
  uint VAR_21 = VAR_20 >> VAR_19;

  if(VAR_19 != 0)
  {
    FUNC_4(VAR_19 * VAR_2);

    if(VAR_19 < 8)
    {
      if(FUNC_0(VAR_20))
        VAR_21 |= VAR_17[VAR_19];

      *VAR_18 = FUNC_2(*VAR_18) | VAR_21;

      VAR_8 = VAR_5 = VAR_20 << (9-VAR_19);
      VAR_6 = FUNC_3(VAR_21);
      VAR_9 = VAR_21;
      VAR_7 = VAR_12;
      return;
    }

    if(FUNC_0(VAR_20))
    {
      *VAR_18 |= 0xff;
      VAR_5 = VAR_1;
      VAR_8 = VAR_14;
      VAR_6 = VAR_11;
      VAR_9 = VAR_15;
      VAR_7 = VAR_12;
      return;
    }

    *VAR_18 &= 0xffffff00;
    VAR_5 = VAR_0;
    VAR_8 = VAR_13;
    VAR_6 = VAR_10;
    VAR_9 = VAR_16;
    VAR_7 = VAR_12;
    return;
  }

  VAR_5 = VAR_0;
  VAR_6 = FUNC_3(VAR_20);
  VAR_9 = VAR_20;
  VAR_7 = VAR_12;
}
