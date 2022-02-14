
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_11__ {int valid; int min; int hour; int day; int month; scalar_t__ year; } ;
typedef TYPE_1__ t_slot ;
struct tm {int tm_min; int tm_hour; int tm_mday; int tm_mon; scalar_t__ tm_year; } ;
struct stat {int st_mtime; } ;
struct TYPE_12__ {int time; } ;
typedef TYPE_2__ card_stat ;
struct TYPE_13__ {int filenum; } ;
typedef TYPE_3__ card_file ;
struct TYPE_14__ {int realchecksum; } ;
typedef int FILE ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int ,TYPE_2__*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int,char*,TYPE_3__*) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int) ;
 char* VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 struct tm* FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 char* VAR_5 ;
 TYPE_5__ VAR_6 ;
 int FUNC_10 (char*,char*,...) ;
 int FUNC_11 (char*,struct stat*) ;

void FUNC_12(int VAR_7, int VAR_8, t_slot *VAR_9)
{
  if (!VAR_9) return;

  char VAR_10[VAR_3];
  FUNC_9(VAR_9,0,sizeof(t_slot));

  if (!VAR_8)
  {

    if (VAR_7 > 0)
    {
      FUNC_10 (VAR_10,"%s/saves/%s.gp%d", VAR_2, VAR_5, VAR_7 - 1);
    }
    else
    {
      FUNC_10 (VAR_10,"%s/saves/%s.srm", VAR_2, VAR_5);
    }


    FILE *VAR_11 = FUNC_7(VAR_10, "rb");
    if (VAR_11)
    {

     struct stat VAR_12;
   FUNC_11(VAR_10, &VAR_12);
      struct tm *VAR_13 = FUNC_8(&VAR_12.st_mtime);
      VAR_9->year = 1900 + VAR_13->tm_year;
      VAR_9->month = VAR_13->tm_mon;
      VAR_9->day = VAR_13->tm_mday;
      VAR_9->hour = VAR_13->tm_hour;
      VAR_9->min = VAR_13->tm_min;
      FUNC_6(VAR_11);
      VAR_9->valid = 1;
    }
  }
  else
  {

    if (VAR_7 > 0)
      FUNC_10(VAR_10,"MD-%04X.gp%d", VAR_6.realchecksum, VAR_7 - 1);
    else
      FUNC_10(VAR_10,"MD-%04X.srm", VAR_6.realchecksum);


    FUNC_9(&VAR_4, 0, VAR_1);
    FUNC_2("GENP", "00");


    VAR_8--;


    if (FUNC_5(VAR_8))
    {

      card_file VAR_14;
      if (FUNC_3(VAR_8, VAR_10, &VAR_14) == VAR_0)
      {

        card_stat VAR_15;
        FUNC_1(VAR_8, VAR_14.filenum, &VAR_15);
        time_t VAR_16 = VAR_15.time;
       struct tm *VAR_17 = FUNC_8(&VAR_16);
        VAR_9->year = 1900 + VAR_17->tm_year;
        VAR_9->month = VAR_17->tm_mon;
        VAR_9->day = VAR_17->tm_mday;
        VAR_9->hour = VAR_17->tm_hour;
        VAR_9->min = VAR_17->tm_min;
        FUNC_0(&VAR_14);
        VAR_9->valid = 1;
      }
      FUNC_4(VAR_8);
    }
  }
}
