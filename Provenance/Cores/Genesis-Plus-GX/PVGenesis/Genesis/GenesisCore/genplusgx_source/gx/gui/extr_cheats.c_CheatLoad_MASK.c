
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int enable; scalar_t__* text; scalar_t__* code; } ;
struct TYPE_7__ {scalar_t__ autocheat; } ;
struct TYPE_6__ {TYPE_1__* buttons; } ;
struct TYPE_5__ {int* shift; int state; } ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 TYPE_4__* VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 int VAR_6 ;
 int FUNC_5 (char*,int ,int) ;
 TYPE_2__ VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (char*,char*,char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__*,char*,int) ;

void FUNC_10(void)
{
  int VAR_11;
  int VAR_12 = 0;
  char VAR_13[256];


  VAR_6 = 0;


  FUNC_6(VAR_13, "%s/cheats/%s.pat", VAR_1, VAR_9);


  FILE *VAR_14 = FUNC_4(VAR_13, "r");
  if (VAR_14)
  {

    FUNC_5(VAR_13, 0, 256);


    while (FUNC_3(VAR_13, 256, VAR_14) && (VAR_6 < VAR_2) && (VAR_12 < VAR_2))
    {

      if ((VAR_13[FUNC_8(VAR_13) - 2] == 0x0d) || (VAR_13[FUNC_8(VAR_13) - 2] == 0x0a)) VAR_13[FUNC_8(VAR_13) - 2] = 0;
      else VAR_13[FUNC_8(VAR_13) - 1] = 0;


      VAR_11 = FUNC_1(VAR_13, VAR_6);

      if (VAR_11)
      {

        FUNC_9(VAR_4[VAR_6].code, VAR_13, VAR_11);
        VAR_4[VAR_6].code[VAR_11] = 0;
        VAR_11++;


        while ((VAR_13[VAR_11] == 0x20) || (VAR_13[VAR_11] == 0x09)) VAR_11++;


        FUNC_9(VAR_4[VAR_6].text, &VAR_13[VAR_11], VAR_3 - 1);
        VAR_4[VAR_6].text[VAR_3 - 1] = 0;


        VAR_6++;
      }
      else if (!FUNC_7(VAR_13,"ON") && VAR_5.autocheat)
      {

        VAR_4[VAR_12++].enable = 1;
      }
      else if (!FUNC_7(VAR_13,"OFF") && VAR_5.autocheat)
      {

        VAR_4[VAR_12++].enable = 0;
      }
    }


    while (VAR_12 < VAR_6) VAR_4[VAR_12++].enable = 0;


    FUNC_2(VAR_14);
  }


  FUNC_0();


  for (VAR_12=0; VAR_12<10; VAR_12++)
  {
    if (VAR_12 < VAR_6)
    {
      VAR_7.buttons[VAR_12].state |= VAR_0;
      VAR_7.buttons[VAR_12].shift[1] = 1;
    }
    else if (VAR_12 == VAR_6)
    {
      VAR_7.buttons[VAR_12].state |= VAR_0;
      VAR_7.buttons[VAR_12].shift[1] = 0;
    }
    else
    {
      VAR_7.buttons[VAR_12].shift[1] = 0;
      VAR_7.buttons[VAR_12].state &= ~VAR_0;
    }
  }


  VAR_10 = VAR_8 = 0;
}
