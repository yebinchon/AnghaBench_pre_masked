
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_sigaction; int sa_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* VAR_13 ;
 int FUNC_0 () ;
 char* VAR_14 ;
 char* VAR_15 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 char* VAR_16 ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (int ,struct sigaction*,int *) ;
 int VAR_17 ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int ,char*) ;
 char* VAR_18 ;

int FUNC_12(int VAR_19, char *VAR_20[]) {

  for (int VAR_21 = 1; VAR_21 < VAR_19; ++VAR_21) {
    if (FUNC_9(VAR_20[VAR_21], "-c") == 0) {
      if (VAR_21 < VAR_19 - 1) {
        FUNC_10(VAR_15, VAR_20[++VAR_21]);
      } else {
        FUNC_6("'-c' requires a parameter, default:%s\n", VAR_15);
        FUNC_4(VAR_0);
      }
    } else if (FUNC_9(VAR_20[VAR_21], "-V") == 0) {
      FUNC_6("version: %s compatible_version: %s\n", VAR_18, VAR_14);
      FUNC_6("gitinfo: %s\n", VAR_16);
      FUNC_6("buildinfo: %s\n", VAR_13);
      return 0;
    } else if (FUNC_9(VAR_20[VAR_21], "-k") == 0) {
      FUNC_3();
    }
  }


  struct sigaction VAR_22;
  VAR_22.sa_flags = VAR_7;
  VAR_22.sa_sigaction = VAR_17;
  FUNC_7(VAR_10, &VAR_22, ((void*)0));
  FUNC_7(VAR_8, &VAR_22, ((void*)0));
  FUNC_7(VAR_9, &VAR_22, ((void*)0));
  FUNC_7(VAR_11, &VAR_22, ((void*)0));
  FUNC_7(VAR_12, &VAR_22, ((void*)0));



  FUNC_5("TDengine:", VAR_6 | VAR_1 | VAR_5, VAR_4);
  FUNC_11(VAR_3, "Starting TDengine service...");


  if (FUNC_2() < 0) {
    FUNC_11(VAR_2, "Error initialize TDengine system");
    FUNC_0();

    FUNC_1();
    FUNC_4(VAR_0);
  }

  FUNC_11(VAR_3, "Started TDengine service successfully.");

  while (1) {
    FUNC_8(1000);
  }
}
