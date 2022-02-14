
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int text ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_10__ {size_t cursor; char* buffer; } ;
typedef TYPE_1__ field_t ;
typedef int fd_set ;
struct TYPE_12__ {int value; } ;
struct TYPE_11__ {scalar_t__ value; } ;


 int FUNC_0 (char*,char,char) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 () ;
 TYPE_1__* FUNC_8 () ;
 TYPE_4__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int,int *,int *,int *,struct timeval*) ;
 scalar_t__ VAR_2 ;
 int FUNC_11 (char*,char*) ;
 size_t FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 TYPE_1__ VAR_3 ;
 char VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_17 (int,char*,int) ;

char *FUNC_18(void)
{

  static char VAR_6[256];
  int VAR_7;
  int VAR_8;
  char VAR_9;
  field_t *VAR_10;

  if (VAR_5 && VAR_5->value)
  {
    VAR_8 = FUNC_9(0, &VAR_9, 1);
    if (VAR_8 != -1)
    {



      if ((VAR_9 == VAR_4) || (VAR_9 == 127) || (VAR_9 == 8))
      {
        if (VAR_3.cursor > 0)
        {
          VAR_3.cursor--;
          VAR_3.buffer[VAR_3.cursor] = '\0';
          FUNC_13();
        }
        return ((void*)0);
      }

      if ((VAR_9) && (VAR_9) < ' ')
      {
        if (VAR_9 == '\n')
        {

          FUNC_6(&VAR_3);
          FUNC_11(VAR_6, VAR_3.buffer);
          FUNC_4(&VAR_3);
          VAR_9 = '\n';
          FUNC_17(1, &VAR_9, 1);
          return VAR_6;
        }
        if (VAR_9 == '\t')
        {
          FUNC_15();
          FUNC_5( &VAR_3 );



          VAR_3.cursor = FUNC_12(VAR_3.buffer);
          if (VAR_3.cursor>0)
          {
            if (VAR_3.buffer[0] == '\\')
            {
              for (VAR_7=0; VAR_7<=VAR_3.cursor; VAR_7++)
              {
                VAR_3.buffer[VAR_7] = VAR_3.buffer[VAR_7+1];
              }
              VAR_3.cursor--;
            }
          }
          FUNC_16();
          return ((void*)0);
        }
        VAR_8 = FUNC_9(0, &VAR_9, 1);
        if (VAR_8 != -1)
        {

          if (VAR_9 == '[' || VAR_9 == 'O')
          {
            VAR_8 = FUNC_9(0, &VAR_9, 1);
            if (VAR_8 != -1)
            {
              switch (VAR_9)
              {
              case 'A':
                VAR_10 = FUNC_8();
                if (VAR_10)
                {
                  FUNC_15();
                  VAR_3 = *VAR_10;
                  FUNC_16();
                }
                FUNC_14();
                return ((void*)0);
                break;
              case 'B':
                VAR_10 = FUNC_7();
                FUNC_15();
                if (VAR_10)
                {
                  VAR_3 = *VAR_10;
                } else
                {
                  FUNC_4(&VAR_3);
                }
                FUNC_16();
                FUNC_14();
                return ((void*)0);
                break;
              case 'C':
                return ((void*)0);
              case 'D':
                return ((void*)0);
              }
            }
          }
        }
        FUNC_0("droping ISCTL sequence: %d, tty_erase: %d\n", VAR_9, VAR_4);
        FUNC_14();
        return ((void*)0);
      }

      VAR_3.buffer[VAR_3.cursor] = VAR_9;
      VAR_3.cursor++;

      FUNC_17(1, &VAR_9, 1);
    }
    return ((void*)0);
  } else
  {
    int VAR_11;
    fd_set VAR_12;
    struct timeval VAR_13;

    if (!VAR_0 || !VAR_0->value)
      return ((void*)0);

    if (!VAR_2)
      return ((void*)0);

    FUNC_3(&VAR_12);
    FUNC_2(0, &VAR_12);
    VAR_13.tv_sec = 0;
    VAR_13.tv_usec = 0;
    if (FUNC_10 (1, &VAR_12, ((void*)0), ((void*)0), &VAR_13) == -1 || !FUNC_1(0, &VAR_12))
    {
      return ((void*)0);
    }

    VAR_11 = FUNC_9 (0, VAR_6, sizeof(VAR_6));
    if (VAR_11 == 0)
    {
      VAR_2 = VAR_1;
      return ((void*)0);
    }

    if (VAR_11 < 1)
      return ((void*)0);
    VAR_6[VAR_11-1] = 0;

    return VAR_6;
  }
}
