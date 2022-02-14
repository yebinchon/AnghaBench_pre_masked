
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned long u32 ;
typedef int time_t ;
struct TYPE_13__ {int icon_addr; int icon_fmt; int icon_speed; int comment_addr; int time; } ;
typedef TYPE_1__ card_stat ;
struct TYPE_14__ {unsigned long len; int filenum; } ;
typedef TYPE_2__ card_file ;
struct TYPE_16__ {int realchecksum; } ;
struct TYPE_15__ {unsigned long* sram; scalar_t__ crc; int on; } ;
typedef int FILE ;
typedef int CardFile ;
typedef int Bytef ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,char*,unsigned long,TYPE_2__*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int,unsigned long*) ;
 int FUNC_4 (int,int ,TYPE_1__*) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int,char*,TYPE_2__*) ;
 int FUNC_7 (int,int ,TYPE_1__*) ;
 int FUNC_8 (int) ;
 int VAR_1 ;
 int FUNC_9 (TYPE_2__*,int *,unsigned long,unsigned long) ;
 unsigned long VAR_2 ;
 int FUNC_10 (int) ;
 char* VAR_3 ;
 int FUNC_11 () ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*,char*) ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_14 (int *,unsigned long*,int *,unsigned long,int) ;
 scalar_t__ FUNC_15 (int ,unsigned long*,int) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (char*,char*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,unsigned long,int,int *) ;
 int FUNC_20 (char*) ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_21 (int,unsigned long) ;
 int FUNC_22 (int *,...) ;
 int FUNC_23 (TYPE_2__*,int ,int) ;
 char* VAR_8 ;
 TYPE_4__ VAR_9 ;
 int FUNC_24 (char*,char*,...) ;
 TYPE_3__ VAR_10 ;
 unsigned long FUNC_25 (int *) ;
 int FUNC_26 (char*,char*) ;
 int FUNC_27 (int *) ;

int FUNC_28(int VAR_11, int VAR_12)
{
  char VAR_13[VAR_4];
  unsigned long VAR_14, VAR_15 = 0;
  u8 *VAR_16;

  if (VAR_11 > 0)
  {
    FUNC_12("Information","Saving State ...",1);


    VAR_16 = (u8 *)FUNC_21(32,VAR_5);
    if (!VAR_16)
    {
      FUNC_13("Error","Unable to allocate memory !");
      return 0;
    }

    VAR_14 = FUNC_25(VAR_16);
  }
  else
  {

    if (!VAR_10.on)
    {
       FUNC_13("Error","Backup RAM disabled !");
       return 0;
    }


    if (FUNC_15(0, &VAR_10.sram[0], 0x10000) == VAR_10.crc)
    {
       FUNC_13("Warning","Backup RAM not modified !");
       return 0;
    }

    FUNC_12("Information","Saving Backup RAM ...",1);


    VAR_16 = (u8 *)FUNC_21(32, 0x10000);
    if (!VAR_16)
    {
      FUNC_13("Error","Unable to allocate memory !");
      return 0;
    }


    FUNC_22(VAR_16, VAR_10.sram, 0x10000);
    VAR_14 = 0x10000;


    VAR_10.crc = FUNC_15(0, VAR_10.sram, 0x10000);
  }


  if (!VAR_12)
  {

    if (VAR_11 > 0)
    {
      FUNC_24(VAR_13, "%s/saves/%s.gp%d", VAR_3, VAR_8, VAR_11 - 1);
    }
    else
    {
      FUNC_24(VAR_13, "%s/saves/%s.srm", VAR_3, VAR_8);
    }


    FILE *VAR_17 = FUNC_17(VAR_13, "wb");
    if (!VAR_17)
    {
      FUNC_13("Error","Unable to open file !");
      FUNC_18(VAR_16);
      return 0;
    }


    while (VAR_14 > VAR_2)
    {
      FUNC_19(VAR_16 + VAR_15, VAR_2, 1, VAR_17);
      VAR_15 += VAR_2;
      VAR_14 -= VAR_2;
    }


    FUNC_19(VAR_16 + VAR_15, VAR_14, 1, VAR_17);
    VAR_15 += VAR_14;


    FUNC_16(VAR_17);
    FUNC_18(VAR_16);


    FUNC_11();


    if (VAR_11 > 0)
    {
      FUNC_24(VAR_13,"%s/saves/%s__%d.png", VAR_3, VAR_8, VAR_11 - 1);
      FUNC_20(VAR_13);
    }
  }
  else
  {

    if (VAR_11 > 0)
    {
      FUNC_24(VAR_13, "MD-%04X.gp%d", VAR_9.realchecksum, VAR_11 - 1);
    }
    else
    {
      FUNC_24(VAR_13, "MD-%04X.srm", VAR_9.realchecksum);
    }


    char VAR_18[64];
    FUNC_23(&VAR_6, 0, VAR_1);
    FUNC_5("GENP", "00");


    VAR_12--;


    if (!FUNC_10(VAR_12))
    {
      FUNC_13("Error","Unable to mount memory card");
      FUNC_18(VAR_16);
      return 0;
    }


    u32 VAR_19 = 0;
    int VAR_20 = FUNC_3(VAR_12, &VAR_19);
    if (!VAR_19)
    {
      FUNC_24(VAR_18, "Invalid sector size (%d)", VAR_20);
      FUNC_13("Error",VAR_18);
      FUNC_8(VAR_12);
      FUNC_18(VAR_16);
      return 0;
    }


    u8 *VAR_21 = (u8 *)FUNC_21(32, VAR_14 + 2112 + 4);
    if (!VAR_21)
    {
      FUNC_13("Error","Unable to allocate memory !");
      FUNC_8(VAR_12);
      FUNC_18(VAR_16);
      return 0;
    }


    char VAR_22[2][32] = { {"Genesis Plus GX"}, {"SRAM Save"} };
    FUNC_26 (VAR_22[1], VAR_13);
    FUNC_22 (&VAR_21[0], &VAR_7, 2048);
    FUNC_22 (&VAR_21[2048], &VAR_22[0], 64);


    VAR_15 = VAR_14;
    FUNC_22(&VAR_21[2112], &VAR_15, 4);


    FUNC_14 ((Bytef *)&VAR_21[2112 + 4], &VAR_14, (Bytef *)VAR_16, VAR_15, 9);


    VAR_14 = VAR_14 + 4 + 2112;
    if (VAR_14 % VAR_19)
    {
      VAR_14 = ((VAR_14 / VAR_19) + 1) * VAR_19;
    }


    card_file VAR_23;
    if (FUNC_6(VAR_12, VAR_13, &VAR_23) == VAR_0)
    {
      int VAR_24 = VAR_14 - VAR_23.len;
      FUNC_0(&VAR_23);
      FUNC_23(&VAR_23,0,sizeof(VAR_23));


      if (VAR_24 > 0)
      {
        VAR_20 = FUNC_1(VAR_12, "TEMP", VAR_24, &VAR_23);
        if (VAR_20)
        {
          FUNC_24(VAR_18, "Unable to increase file size (%d)", VAR_20);
          FUNC_13("Error",VAR_18);
          FUNC_8(VAR_12);
          FUNC_18(VAR_21);
          FUNC_18(VAR_16);
          return 0;
        }


        FUNC_0(&VAR_23);
        FUNC_23(&VAR_23,0,sizeof(VAR_23));
        FUNC_2(VAR_12, "TEMP");
      }


      FUNC_2(VAR_12, VAR_13);
    }


    VAR_20 = FUNC_1(VAR_12, VAR_13, VAR_14, &VAR_23);
    if (VAR_20)
    {
      FUNC_24(VAR_18, "Unable to create file (%d)", VAR_20);
      FUNC_13("Error",VAR_18);
      FUNC_8(VAR_12);
      FUNC_18(VAR_21);
      FUNC_18(VAR_16);
      return 0;
    }


    time_t VAR_25;
    FUNC_27(&VAR_25);
    card_stat VAR_26;
    FUNC_4(VAR_12, VAR_23.filenum, &VAR_26);
    VAR_26.icon_addr = 0x0;
    VAR_26.icon_fmt = 2;
    VAR_26.icon_speed = 1;
    VAR_26.comment_addr = 2048;
    VAR_26.time = VAR_25;
    FUNC_7(VAR_12, VAR_23.filenum, &VAR_26);


    while (VAR_14 > 0)
    {
      FUNC_9(&VAR_23, &VAR_21[VAR_15], VAR_19, VAR_15);
      VAR_14 -= VAR_19;
      VAR_15 += VAR_19;
    }


    FUNC_0(&VAR_23);
    FUNC_8(VAR_12);
    FUNC_18(VAR_21);
    FUNC_18(VAR_16);


    FUNC_11();
  }

  return 1;
}
