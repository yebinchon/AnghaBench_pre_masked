
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int ** lastdir; } ;
struct TYPE_7__ {char* filename; scalar_t__ flags; } ;
struct TYPE_6__ {TYPE_1__* entries; } ;
struct TYPE_5__ {scalar_t__* filepath; int filename; } ;
typedef int DIR ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 TYPE_2__ VAR_9 ;
 int * FUNC_5 (int ) ;
 int * VAR_10 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ,int) ;

int FUNC_8(int VAR_11, int VAR_12)
{
  int VAR_13 = 0;

  if (VAR_11 == VAR_3)
  {

    int VAR_14;
    for(VAR_14=0; VAR_14 < VAR_1; VAR_14++)
    {
      if(VAR_9.entries[VAR_14].filepath[0] > 0)
      {
        VAR_8[VAR_14].flags = 0;
        FUNC_7(VAR_8[VAR_14].filename,VAR_9.entries[VAR_14].filename, VAR_0-1);
        VAR_8[VAR_14].filename[VAR_0-1] = '\0';
        VAR_13++;
      }
      else
      {

        break;
      }
    }
  }
  else
  {

    if (VAR_11 == VAR_2)
    {

      DIR *VAR_15 = FUNC_5(VAR_10[VAR_2]);
      if (VAR_15 == ((void*)0))
      {

        if (!FUNC_2()) return 0;
        VAR_5 = -1;
      }
      else
      {
        FUNC_4(VAR_15);
      }
    }


    VAR_6 = VAR_4.lastdir[VAR_12][VAR_11];
    VAR_13 = FUNC_3();
    if (VAR_13 <= 0)
    {

      FUNC_6(VAR_6, VAR_10[VAR_11]);
      VAR_13 = FUNC_3();
      if (VAR_13 < 0)
      {
        FUNC_1("Error","Unable to open directory !");
        return 0;
      }
      VAR_5 = -1;
    }
  }

  if (VAR_13 == 0)
  {
    FUNC_1("Error","No files found !");
    return 0;
  }


  if ((VAR_11 != VAR_5) || (VAR_12 != VAR_7))
  {

    VAR_5 = VAR_11;
    VAR_7 = VAR_12;


    FUNC_0(VAR_13);
  }

  return 1;
}
