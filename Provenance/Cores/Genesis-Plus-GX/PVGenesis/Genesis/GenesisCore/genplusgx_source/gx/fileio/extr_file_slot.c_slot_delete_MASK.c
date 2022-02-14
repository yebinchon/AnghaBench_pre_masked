
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int realchecksum; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int) ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (char*) ;
 char* VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_6 (char*,char*,...) ;

int FUNC_7(int VAR_6, int VAR_7)
{
  char VAR_8[VAR_2];
  int VAR_9 = 0;

  if (!VAR_7)
  {

    if (VAR_6 > 0)
    {

      FUNC_6(VAR_8,"%s/saves/%s__%d.png", VAR_1, VAR_4, VAR_6 - 1);
      FUNC_5(VAR_8);

      FUNC_6 (VAR_8,"%s/saves/%s.gp%d", VAR_1, VAR_4, VAR_6 - 1);
    }
    else
    {
      FUNC_6 (VAR_8,"%s/saves/%s.srm", VAR_1, VAR_4);
    }


    VAR_9 = FUNC_5(VAR_8);
  }
  else
  {

    if (VAR_6 > 0)
      FUNC_6(VAR_8,"MD-%04X.gp%d", VAR_5.realchecksum, VAR_6 - 1);
    else
      FUNC_6(VAR_8,"MD-%04X.srm", VAR_5.realchecksum);


    FUNC_4(&VAR_3, 0, VAR_0);
    FUNC_1("GENP", "00");


    VAR_7--;


    if (FUNC_3(VAR_7))
    {

      VAR_9 = FUNC_0(VAR_7,VAR_8);
      FUNC_2(VAR_7);
    }
  }

  return VAR_9;
}
