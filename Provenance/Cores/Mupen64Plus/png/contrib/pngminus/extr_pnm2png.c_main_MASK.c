
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int *,int *,int *,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_6 () ;

int FUNC_7(int VAR_8, char *VAR_9[])
{
  FILE *VAR_10 = VAR_6;
  FILE *VAR_11 = ((void*)0);
  FILE *VAR_12 = VAR_7;
  BOOL VAR_13 = VAR_0;
  BOOL VAR_14 = VAR_0;
  int VAR_15;

  for (VAR_15 = 1; VAR_15 < VAR_8; VAR_15++)
  {
    if (VAR_9[VAR_15][0] == '-')
    {
      switch (VAR_9[VAR_15][1])
      {
        case 'i':
          VAR_13 = VAR_4;
          break;
        case 'a':
          VAR_14 = VAR_4;
          VAR_15++;
          if ((VAR_11 = FUNC_2 (VAR_9[VAR_15], "rb")) == ((void*)0))
          {
            FUNC_3 (VAR_5, "PNM2PNG\n");
            FUNC_3 (VAR_5, "Error:  alpha-channel file %s does not exist\n",
               VAR_9[VAR_15]);
            FUNC_0 (1);
          }
          break;
        case 'h':
        case '?':
          FUNC_6();
          FUNC_0(0);
          break;
        default:
          FUNC_3 (VAR_5, "PNM2PNG\n");
          FUNC_3 (VAR_5, "Error:  unknown option %s\n", VAR_9[VAR_15]);
          FUNC_6();
          FUNC_0(1);
          break;
      }
    }
    else if (VAR_10 == VAR_6)
    {
      if ((VAR_10 = FUNC_2 (VAR_9[VAR_15], "rb")) == ((void*)0))
      {
        FUNC_3 (VAR_5, "PNM2PNG\n");
        FUNC_3 (VAR_5, "Error:  file %s does not exist\n", VAR_9[VAR_15]);
        FUNC_0 (1);
      }
    }
    else if (VAR_12 == VAR_7)
    {
      if ((VAR_12 = FUNC_2 (VAR_9[VAR_15], "wb")) == ((void*)0))
      {
        FUNC_3 (VAR_5, "PNM2PNG\n");
        FUNC_3 (VAR_5, "Error:  can not create PNG-file %s\n", VAR_9[VAR_15]);
        FUNC_0 (1);
      }
    }
    else
    {
      FUNC_3 (VAR_5, "PNM2PNG\n");
      FUNC_3 (VAR_5, "Error:  too many parameters\n");
      FUNC_6();
      FUNC_0 (1);
    }
  }
  if (FUNC_4 (VAR_10, VAR_12, VAR_11, VAR_13, VAR_14) == VAR_0)
  {
    FUNC_3 (VAR_5, "PNM2PNG\n");
    FUNC_3 (VAR_5, "Error:  unsuccessful converting to PNG-image\n");
    FUNC_0 (1);
  }


  FUNC_1 (VAR_10);

  FUNC_1 (VAR_12);

  if (VAR_14)
    FUNC_1 (VAR_11);

  return 0;
}
