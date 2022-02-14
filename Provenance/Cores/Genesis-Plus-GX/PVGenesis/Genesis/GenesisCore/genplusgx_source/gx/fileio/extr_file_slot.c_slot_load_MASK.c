
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned long u32 ;
struct TYPE_7__ {unsigned long len; } ;
typedef TYPE_1__ card_file ;
struct TYPE_9__ {int realchecksum; } ;
struct TYPE_8__ {unsigned long* sram; int crc; int on; } ;
typedef int FILE ;
typedef int Bytef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,unsigned long*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int,char*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,unsigned long,unsigned long) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_6 (int) ;
 char* VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,unsigned long*,int) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (char*,char*) ;
 int FUNC_13 (int *,unsigned long,int,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int ) ;
 unsigned long FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int,unsigned long) ;
 int FUNC_18 (unsigned long*,int *,int) ;
 int FUNC_19 (int *,int ,int ) ;
 char* VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_20 (char*,char*,...) ;
 TYPE_2__ VAR_9 ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (int *,unsigned long*,int *,unsigned long) ;

int FUNC_23(int VAR_10, int VAR_11)
{
  char VAR_12[VAR_3];
  unsigned long VAR_13, VAR_14 = 0;
  u8 *VAR_15;


  if (VAR_10 > 0)
  {
    FUNC_8("Information","Loading State ...",1);
  }
  else
  {
    if (!VAR_9.on)
    {
      FUNC_9("Error","Backup RAM is disabled !");
      return 0;
    }

    FUNC_8("Information","Loading Backup RAM ...",1);
  }


  if (!VAR_11)
  {

    if (VAR_10 > 0)
    {
      FUNC_20 (VAR_12,"%s/saves/%s.gp%d", VAR_2, VAR_7, VAR_10 - 1);
    }
    else
    {
      FUNC_20 (VAR_12,"%s/saves/%s.srm", VAR_2, VAR_7);
    }


    FILE *VAR_16 = FUNC_12(VAR_12, "rb");
    if (!VAR_16)
    {
      FUNC_9("Error","Unable to open file !");
      return 0;
    }


    FUNC_15(VAR_16, 0, VAR_4);
    VAR_13 = FUNC_16(VAR_16);
    FUNC_15(VAR_16, 0, VAR_5);


    VAR_15 = (u8 *)FUNC_17(32,VAR_13);
    if (!VAR_15)
    {
      FUNC_9("Error","Unable to allocate memory !");
      FUNC_11(VAR_16);
      return 0;
    }


    while (VAR_13 > VAR_1)
    {
      FUNC_13(VAR_15 + VAR_14, VAR_1, 1, VAR_16);
      VAR_14 += VAR_1;
      VAR_13 -= VAR_1;
    }


    FUNC_13(VAR_15 + VAR_14, VAR_13, 1, VAR_16);
    VAR_14 += VAR_13;


    FUNC_11(VAR_16);
  }
  else
  {

    if (VAR_10 > 0)
    {
      FUNC_20(VAR_12, "MD-%04X.gp%d", VAR_8.realchecksum, VAR_10 - 1);
    }
    else
    {
      FUNC_20(VAR_12, "MD-%04X.srm", VAR_8.realchecksum);
    }


    char VAR_17[64];
    FUNC_19(&VAR_6, 0, VAR_0);
    FUNC_2("GENP", "00");


    VAR_11--;


    if (!FUNC_6(VAR_11))
    {
      FUNC_9("Error","Unable to mount memory card");
      return 0;
    }


    u32 VAR_18 = 0;
    int VAR_19 = FUNC_1(VAR_11, &VAR_18);
    if (!VAR_18)
    {
      FUNC_20(VAR_17, "Invalid sector size (%d)", VAR_19);
      FUNC_9("Error",VAR_17);
      FUNC_5(VAR_11);
      return 0;
    }


    card_file VAR_20;
    VAR_19 = FUNC_3(VAR_11, VAR_12, &VAR_20);
    if (VAR_19)
    {
      FUNC_20(VAR_17, "Unable to open file (%d)", VAR_19);
      FUNC_9("Error",VAR_17);
      FUNC_5(VAR_11);
      return 0;
    }


    VAR_13 = VAR_20.len;
    if (VAR_13 % VAR_18)
    {
      VAR_13 = ((VAR_13 / VAR_18) + 1) * VAR_18;
    }


    u8 *VAR_21 = (u8 *)FUNC_17(32, VAR_13);
    if (!VAR_21)
    {
      FUNC_9("Error","Unable to allocate memory !");
      FUNC_0(&VAR_20);
      FUNC_5(VAR_11);
      return 0;
    }


    while (VAR_13 > 0)
    {
      FUNC_4(&VAR_20, &VAR_21[VAR_14], VAR_18, VAR_14);
      VAR_14 += VAR_18;
      VAR_13 -= VAR_18;
    }


    FUNC_0(&VAR_20);
    FUNC_5(VAR_11);


    FUNC_18(&VAR_13, VAR_21 + 2112, 4);
    VAR_15 = (u8 *)FUNC_17(32, VAR_13);
    if (!VAR_15)
    {
      FUNC_14(VAR_21);
      FUNC_9("Error","Unable to allocate memory !");
      return 0;
    }


    FUNC_22 ((Bytef *)VAR_15, &VAR_13, (Bytef *)(VAR_21 + 2112 + 4), VAR_14 - 2112 - 4);
    FUNC_14(VAR_21);
  }

  if (VAR_10 > 0)
  {

    if (FUNC_21(VAR_15) <= 0)
    {
      FUNC_14(VAR_15);
      FUNC_9("Error","Invalid state file !");
      return 0;
    }
  }
  else
  {

    FUNC_18(VAR_9.sram, VAR_15, 0x10000);


    VAR_9.crc = FUNC_10(0, VAR_9.sram, 0x10000);
  }

  FUNC_14(VAR_15);
  FUNC_7();
  return 1;
}
