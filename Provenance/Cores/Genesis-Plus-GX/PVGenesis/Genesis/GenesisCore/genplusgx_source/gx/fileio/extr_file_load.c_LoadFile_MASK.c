
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_16__ {scalar_t__ ram; } ;
struct TYPE_15__ {scalar_t__ status; } ;
struct TYPE_14__ {int s_device; int s_default; } ;
struct TYPE_13__ {char* filename; } ;
struct TYPE_12__ {TYPE_1__* entries; } ;
struct TYPE_10__ {scalar_t__ boot; } ;
struct TYPE_11__ {TYPE_2__ cartridge; } ;
struct TYPE_9__ {char* filepath; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*) ;
 int VAR_1 ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 TYPE_8__ VAR_9 ;
 TYPE_7__ VAR_10 ;
 int FUNC_4 (char*,char*) ;
 TYPE_6__ VAR_11 ;
 int VAR_12 ;
 char* VAR_13 ;
 TYPE_5__* VAR_14 ;
 int FUNC_5 (char*) ;
 TYPE_4__ VAR_15 ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*) ;
 char* VAR_16 ;
 int VAR_17 ;
 char** VAR_18 ;
 TYPE_3__ VAR_19 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,char*,char*,...) ;
 scalar_t__ FUNC_10 (char*,struct stat*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*,int) ;
 int VAR_20 ;

int FUNC_13(int VAR_21)
{
  int VAR_22, VAR_23, VAR_24;
  char VAR_25[VAR_1];


  char *VAR_26 = (VAR_12 == VAR_8) ? VAR_15.entries[VAR_21].filepath : VAR_13;


  FUNC_9(VAR_25, "%s%s", VAR_26, VAR_14[VAR_21].filename);


  if (!FUNC_12(VAR_26, VAR_18[VAR_7], FUNC_11(VAR_18[VAR_7])))
  {

    struct stat VAR_27;
    if(FUNC_10(VAR_25, &VAR_27) != 0)
    {

      if (!FUNC_3()) return 0;
    }
  }


  FUNC_1("Information", "Loading game...", 1);


  VAR_22 = VAR_23 = 0;


  if ((VAR_20 == VAR_4) && (VAR_10.status == VAR_0))
  {

    VAR_22 = FUNC_4(VAR_25, (char *)(VAR_9.ram));


    if (VAR_19.cartridge.boot)
    {

      VAR_23 = VAR_22;
    }
    else
    {

      FUNC_5((char *)(VAR_9.ram));
    }
  }


  if (!VAR_22)
  {

    VAR_10.status = VAR_2;


    VAR_22 = FUNC_7(VAR_25);
  }

  if (VAR_22 > 0)
  {

    if (VAR_23)
    {

      VAR_24 = 1;
    }
    else
    {

      FUNC_8(VAR_11.s_default,VAR_11.s_device);


      if (VAR_17 & VAR_6)
      {

        VAR_24 = 2;
        FUNC_9(VAR_16,"ms/%s",VAR_14[VAR_21].filename);
      }
      else if (VAR_17 & VAR_3)
      {

        VAR_24 = 3;
        FUNC_9(VAR_16,"gg/%s",VAR_14[VAR_21].filename);
      }
      else if (VAR_17 == VAR_5)
      {

        VAR_24 = 4;
        FUNC_9(VAR_16,"sg/%s",VAR_14[VAR_21].filename);
      }
      else if (VAR_17 == VAR_4)
      {

        VAR_24 = 1;
        FUNC_9(VAR_16,"cd/%s",VAR_14[VAR_21].filename);
      }
      else
      {

        VAR_24 = 0;
        FUNC_9(VAR_16,"md/%s",VAR_14[VAR_21].filename);
      }


      int VAR_28 = FUNC_11(VAR_16) - 1;
      while ((VAR_28 > 0) && (VAR_16[VAR_28] != '.')) VAR_28--;
      if (VAR_28 > 0) VAR_16[VAR_28] = 0;
    }


    FUNC_6(VAR_26, VAR_14[VAR_21].filename, VAR_24);


    if (VAR_12 == VAR_8) VAR_12 = -1;


    FUNC_0();


    return 1;
  }

  FUNC_2("Error", "Unable to load game");
  return 0;
}
