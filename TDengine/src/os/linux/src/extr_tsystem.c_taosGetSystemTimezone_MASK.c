
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__ cfgStatus; } ;
typedef TYPE_1__ SGlobalConfig ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 size_t VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (int *,struct tm*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int ,char*,char*,char*,char*,int ) ;
 scalar_t__ FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_11 (char*) ;
 int VAR_5 ;
 char** VAR_6 ;
 int FUNC_12 () ;

void FUNC_13() {
  SGlobalConfig *VAR_7 = FUNC_11("timezone");
  if (VAR_7 == ((void*)0)) return;
  if (VAR_7->cfgStatus >= VAR_2) {
    return;
  }






  time_t VAR_8 = FUNC_10(((void*)0));
  struct tm VAR_9;
  FUNC_4(&VAR_8, &VAR_9);


  FILE *VAR_10 = FUNC_2("/etc/timezone", "r");
  char VAR_11[64] = {0};
  if (VAR_10 != ((void*)0)) {
    FUNC_3(VAR_11, 64, 1, VAR_10);
    FUNC_1(VAR_10);
  }

  char *VAR_12 = FUNC_9(VAR_11, "\n");
  if (VAR_12 != ((void*)0)) {
    *VAR_12 = 0;
  }


  if (FUNC_8(VAR_11) > 0) {
    FUNC_6("TZ", VAR_11, 1);
  }


  FUNC_12();
  int32_t VAR_13 = (-VAR_4 * VAR_1) / VAR_0;
  VAR_13 += VAR_3;







  FUNC_7(VAR_5, "%s (%s, %s%02d00)", VAR_11, VAR_6[VAR_3], VAR_13 >= 0 ? "+" : "-", FUNC_0(VAR_13));

  VAR_7->cfgStatus = VAR_2;
  FUNC_5("timezone not configured, set to system default:%s", VAR_5);
}
