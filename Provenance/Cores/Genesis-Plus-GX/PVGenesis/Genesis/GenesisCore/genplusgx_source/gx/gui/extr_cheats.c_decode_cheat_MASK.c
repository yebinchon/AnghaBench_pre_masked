
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int old; int address; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 TYPE_1__* VAR_3 ;
 char* VAR_4 ;
 char* FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_5 ;

__attribute__((used)) static u32 FUNC_2(char *VAR_6, int VAR_7)
{
  char *VAR_8;
  int VAR_9,VAR_10;
  u32 VAR_11 = 0;
  u32 VAR_12 = 0;
  u16 VAR_13 = 0;
  u8 VAR_14 = 0;


  if ((FUNC_1(VAR_6) >= 9) && (VAR_6[4] == '-'))
  {

    if ((VAR_5 & VAR_1) != VAR_0)
    {
      return 0;
    }

    for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
    {
      if (VAR_9 == 4) VAR_6++;
      VAR_8 = FUNC_0 (VAR_4, *VAR_6++);
      if (VAR_8 == ((void*)0)) return 0;
      VAR_10 = VAR_8 - VAR_4;

      switch (VAR_9)
      {
        case 0:
        VAR_13 |= VAR_10 << 3;
        break;

        case 1:
        VAR_13 |= VAR_10 >> 2;
        VAR_12 |= (VAR_10 & 3) << 14;
        break;

        case 2:
        VAR_12 |= VAR_10 << 9;
        break;

        case 3:
        VAR_12 |= (VAR_10 & 0xF) << 20 | (VAR_10 >> 4) << 8;
        break;

        case 4:
        VAR_13 |= (VAR_10 & 1) << 12;
        VAR_12 |= (VAR_10 >> 1) << 16;
        break;

        case 5:
        VAR_13 |= (VAR_10 & 1) << 15 | (VAR_10 >> 1) << 8;
        break;

        case 6:
        VAR_13 |= (VAR_10 >> 3) << 13;
        VAR_12 |= (VAR_10 & 7) << 5;
        break;

        case 7:
        VAR_12 |= VAR_10;
        break;
      }
    }


    VAR_11 = 9;
  }


  else if ((FUNC_1(VAR_6) >= 11) && (VAR_6[3] == '-') && (VAR_6[7] == '-'))
  {

    if ((VAR_5 & VAR_1) == VAR_0)
    {
      return 0;
    }


    for (VAR_9=0; VAR_9<2; VAR_9++)
    {
      VAR_8 = FUNC_0 (VAR_2, *VAR_6++);
      if (VAR_8 == ((void*)0)) return 0;
      VAR_10 = (VAR_8 - VAR_2) & 0xF;
      VAR_13 |= (VAR_10 << ((1 - VAR_9) * 4));
    }


    for (VAR_9=0; VAR_9<3; VAR_9++)
    {
      if (VAR_9==1) VAR_6++;
      VAR_8 = FUNC_0 (VAR_2, *VAR_6++);
      if (VAR_8 == ((void*)0)) return 0;
      VAR_10 = (VAR_8 - VAR_2) & 0xF;
      VAR_12 |= (VAR_10 << ((2 - VAR_9) * 4));
    }


    VAR_8 = FUNC_0 (VAR_2, *VAR_6++);
    if (VAR_8 == ((void*)0)) return 0;
    VAR_10 = (VAR_8 - VAR_2) & 0xF;
    VAR_10 ^= 0xF;
    VAR_12 |= (VAR_10 << 12);


    if (VAR_12 >= 0xC000)
    {

      VAR_12 = 0xFF0000 | (VAR_12 & 0x1FFF);
    }


    for (VAR_9=0; VAR_9<2; VAR_9++)
    {
      VAR_6++;
      VAR_8 = FUNC_0 (VAR_2, *VAR_6++);
      if (VAR_8 == ((void*)0)) return 0;
      VAR_10 = (VAR_8 - VAR_2) & 0xF;
      VAR_14 |= (VAR_10 << ((1 - VAR_9) * 4));
    }
    VAR_14 = (VAR_14 >> 2) | ((VAR_14 & 0x03) << 6);
    VAR_14 ^= 0xBA;


    VAR_3[VAR_7].old = VAR_14;


    VAR_11 = 11;
  }


  else if (VAR_6[6] == ':')
  {
    if ((VAR_5 & VAR_1) == VAR_0)
    {

      if (FUNC_1(VAR_6) < 11) return 0;


      for (VAR_9=0; VAR_9<6; VAR_9++)
      {
        VAR_8 = FUNC_0 (VAR_2, *VAR_6++);
        if (VAR_8 == ((void*)0)) return 0;
        VAR_10 = (VAR_8 - VAR_2) & 0xF;
        VAR_12 |= (VAR_10 << ((5 - VAR_9) * 4));
      }


      VAR_6++;
      for (VAR_9=0; VAR_9<4; VAR_9++)
      {
        VAR_8 = FUNC_0 (VAR_2, *VAR_6++);
        if (VAR_8 == ((void*)0)) return 0;
        VAR_10 = (VAR_8 - VAR_2) & 0xF;
        VAR_13 |= (VAR_10 << ((3 - VAR_9) * 4));
      }


      VAR_11 = 11;
    }
    else
    {

      if (FUNC_1(VAR_6) < 9) return 0;


      VAR_6+=2;
      for (VAR_9=0; VAR_9<4; VAR_9++)
      {
        VAR_8 = FUNC_0 (VAR_2, *VAR_6++);
        if (VAR_8 == ((void*)0)) return 0;
        VAR_10 = (VAR_8 - VAR_2) & 0xF;
        VAR_12 |= (VAR_10 << ((3 - VAR_9) * 4));
      }


      if (VAR_12 < 0xC000) return 0;


      VAR_12 = 0xFF0000 | (VAR_12 & 0x1FFF);


      VAR_6++;
      for (VAR_9=0; VAR_9<2; VAR_9++)
      {
        VAR_8 = FUNC_0 (VAR_2, *VAR_6++);
        if (VAR_8 == ((void*)0)) return 0;
        VAR_10 = (VAR_8 - VAR_2) & 0xF;
        VAR_13 |= (VAR_10 << ((1 - VAR_9) * 4));
      }


      VAR_11 = 9;
    }
  }


  if (VAR_11)
  {

    VAR_3[VAR_7].address = VAR_12;
    VAR_3[VAR_7].data = VAR_13;
  }


  return VAR_11;
}
