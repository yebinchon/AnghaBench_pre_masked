
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int region_detect; int vdp_mode; int master_clock; } ;
struct TYPE_3__ {int checksum; int realchecksum; int product; scalar_t__* country; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_0 (scalar_t__*,char*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 char FUNC_3 (int) ;
 int VAR_14 ;

void FUNC_4(char *VAR_15)
{

  if (VAR_15)
  {

    if (VAR_13 == VAR_6)
    {

      switch (VAR_15[0x20b])
      {
        case 0x7a:
          VAR_9 = VAR_5;
          break;

        case 0x64:
          VAR_9 = VAR_2;
          break;

        default:
          VAR_9 = VAR_3;
          break;
      }
    }


    else if (VAR_13 & VAR_7)
    {





      int VAR_16 = 0;


      if (!FUNC_0(VAR_11.country, "eur", 3)) VAR_16 |= 8;
      else if (!FUNC_0(VAR_11.country, "EUR", 3)) VAR_16 |= 8;
      else if (!FUNC_0(VAR_11.country, "jap", 3)) VAR_16 |= 1;
      else if (!FUNC_0(VAR_11.country, "JAP", 3)) VAR_16 |= 1;
      else if (!FUNC_0(VAR_11.country, "usa", 3)) VAR_16 |= 4;
      else if (!FUNC_0(VAR_11.country, "USA", 3)) VAR_16 |= 4;
      else
      {
        int VAR_17;
        char VAR_18;


        for(VAR_17 = 0; VAR_17 < 4; VAR_17++)
        {
          VAR_18 = FUNC_3((int)VAR_11.country[VAR_17]);

          if (VAR_18 == 'U') VAR_16 |= 4;
          else if (VAR_18 == 'J') VAR_16 |= 1;
          else if (VAR_18 == 'E') VAR_16 |= 8;
          else if (VAR_18 == 'K') VAR_16 |= 1;
          else if (VAR_18 < 16) VAR_16 |= VAR_18;
          else if ((VAR_18 >= '0') && (VAR_18 <= '9')) VAR_16 |= VAR_18 - '0';
          else if ((VAR_18 >= 'A') && (VAR_18 <= 'F')) VAR_16 |= VAR_18 - 'A' + 10;
        }
      }


      if (VAR_16 & 4) VAR_9 = VAR_5;
      else if (VAR_16 & 1) VAR_9 = VAR_3;
      else if (VAR_16 & 8) VAR_9 = VAR_2;
      else if (VAR_16 & 2) VAR_9 = VAR_4;
      else VAR_9 = VAR_5;


      if (((FUNC_2(VAR_11.product,"T-45033") != ((void*)0)) && (VAR_11.checksum == 0x0F81)) ||
           (FUNC_2(VAR_11.product,"T-69046-50") != ((void*)0)) ||
           (FUNC_2(VAR_11.product,"T-120106-00") != ((void*)0)) ||
           (FUNC_2(VAR_11.product,"T-70096 -00") != ((void*)0)))
      {

        VAR_9 = VAR_2;
      }
      else if ((VAR_11.realchecksum == 0x532e) && (FUNC_2(VAR_11.product,"1011-00") != ((void*)0)))
      {

        VAR_9 = VAR_3;
      }
    }


    else
    {
      VAR_9 = FUNC_1();
    }


    VAR_10 = VAR_9;
  }
  else
  {

    VAR_9 = VAR_10;
  }


  if (VAR_8.region_detect == 1) VAR_9 = VAR_5;
  else if (VAR_8.region_detect == 2) VAR_9 = VAR_2;
  else if (VAR_8.region_detect == 3) VAR_9 = VAR_3;
  else if (VAR_8.region_detect == 4) VAR_9 = VAR_4;


  VAR_14 = (VAR_9 >> 6) & 0x01;


  VAR_12 = VAR_14 ? VAR_1 : VAR_0;


  if (VAR_8.vdp_mode == 1) VAR_14 = 0;
  else if (VAR_8.vdp_mode == 2) VAR_14 = 1;


  if (VAR_8.master_clock == 1) VAR_12 = VAR_0;
  else if (VAR_8.master_clock == 2) VAR_12 = VAR_1;
}
