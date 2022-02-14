
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_2__ {scalar_t__ num; scalar_t__ (* initFp ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 char* VAR_5 ;
 int FUNC_5 (char*,int) ;
 int VAR_6 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,char*,char*) ;
 scalar_t__ FUNC_10 (char*,struct stat*) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (char*,int ,int) ;
 int FUNC_15 () ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 () ;

int FUNC_21() {
  char VAR_12[128];
  struct stat VAR_13;

  FUNC_15();

  VAR_10 = FUNC_13();
  VAR_11 = 1;


  FUNC_18();

  if (FUNC_10(VAR_5, &VAR_13) < 0) FUNC_5(VAR_5, 0755);

  FUNC_9(VAR_12, "%s/taosdlog", VAR_5);
  if (FUNC_14(VAR_12, VAR_9, 1) < 0) FUNC_6("failed to init log file\n");

  if (!FUNC_17()) {
    FUNC_16();
    FUNC_0("TDengine read global config failed");
    return -1;
  }

  if (FUNC_12() != 0) {
    FUNC_0("TDengine init tier directory failed");
    return -1;
  }

  FUNC_16();
  FUNC_1("Server IP address is:%s", VAR_7);

  FUNC_8(VAR_0, VAR_1);

  FUNC_2();
  FUNC_7(&VAR_3, ((void*)0));

  FUNC_1("starting to initialize TDengine ...");

  FUNC_19();
  if (FUNC_3() < 0) {
    return -1;
  }

  for (int VAR_14 = 0; VAR_14 < VAR_2; ++VAR_14) {
    if (VAR_8[VAR_14].num != 0 && VAR_8[VAR_14].initFp) {
      if ((*VAR_8[VAR_14].initFp)() != 0) {
        FUNC_0("TDengine initialization failed");
        return -1;
      }
    }
  }

  if (FUNC_20() != 0) {
    FUNC_0("TDengine vnodes initialization failed");
    return -1;
  }

  VAR_6 = VAR_4;

  FUNC_4();

  FUNC_1("TDengine is initialized successfully");

  return 0;
}
