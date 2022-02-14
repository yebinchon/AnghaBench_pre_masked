
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int rpcInit ;
typedef int int64_t ;
struct TYPE_6__ {int numOfIps; void** ipstr; void** ip; } ;
struct TYPE_5__ {char* label; int numOfThreads; int bits; int numOfChanns; int sessionsPerChann; int * qhandle; void* connType; scalar_t__ noFree; void* idMgmt; void* fp; scalar_t__ localPort; void* localIp; } ;
typedef int SShellSubmitMsg ;
typedef TYPE_1__ SRpcInit ;


 void* FUNC_0 () ;
 void* VAR_0 ;
 void* FUNC_1 (char*) ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 () ;
 int VAR_5 ;
 int FUNC_6 (char*,char*,char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*,struct stat*) ;
 int FUNC_9 (void*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int VAR_6 ;
 int FUNC_12 () ;
 int * FUNC_13 (int,int ,int) ;
 scalar_t__ FUNC_14 (char*,int ,int) ;
 int * FUNC_15 (int,int,char*) ;
 int FUNC_16 (int,int ,int ,int) ;
 void* FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int *,int,int) ;
 int FUNC_19 (int,int,int,char*) ;
 int FUNC_20 (int ,int,int *,int ,int *) ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 double VAR_15 ;
 int VAR_16 ;
 double VAR_17 ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 scalar_t__ VAR_18 ;
 char* VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_24 (char*) ;
 int FUNC_25 () ;
 TYPE_2__ VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 int * VAR_29 ;
 int VAR_30 ;
 int FUNC_26 (char*,...) ;

void FUNC_27() {
  char VAR_31[128];
  struct stat VAR_32;
  SRpcInit VAR_33;

  FUNC_7(FUNC_12());

  if (VAR_25 == 0) {





    FUNC_9(VAR_8, "0.0.0.0");


    FUNC_23();


    if (FUNC_8(VAR_2, &VAR_32) < 0) FUNC_3(VAR_2, 0755);

    FUNC_6(VAR_31, "%s/taoslog", VAR_2);
    if (FUNC_14(VAR_31, VAR_16, 10) < 0) {
      FUNC_4("failed to open log file in directory:%s\n", VAR_2);
    }

    FUNC_22();
    FUNC_21();

    FUNC_26("starting to initialize TAOS client ...");
    FUNC_26("Local IP address is:%s", VAR_8);
  }
  FUNC_25();
  VAR_5 = FUNC_5();
  int VAR_34 = VAR_12 + VAR_10 + VAR_11 + VAR_11;

  if (VAR_25 == 0) {
    VAR_27 = VAR_15 * VAR_17 / 2.0;
  } else {
    VAR_27 = VAR_15 * VAR_17 / 4.0;
  }

  if (VAR_27 < 2) VAR_27 = 2;

  VAR_29 = FUNC_15(VAR_34, VAR_27, "tsc");
  if (((void*)0) == VAR_29) {
    FUNC_24("failed to init scheduler");
    return;
  }

  FUNC_2(&VAR_33, 0, sizeof(VAR_33));
  VAR_33.localIp = VAR_8;
  VAR_33.localPort = 0;
  VAR_33.label = "TSC-vnode";
  VAR_33.numOfThreads = VAR_27;
  VAR_33.fp = VAR_28;
  VAR_33.bits = 20;
  VAR_33.numOfChanns = VAR_27;
  VAR_33.sessionsPerChann = VAR_12 / VAR_27;
  VAR_33.idMgmt = VAR_0;
  VAR_33.noFree = 0;
  VAR_33.connType = FUNC_0();
  VAR_33.qhandle = VAR_29;
  VAR_4 = FUNC_17(&VAR_33);
  if (VAR_4 == ((void*)0)) {
    FUNC_24("failed to init connection to vnode");
    return;
  }

  for (int VAR_35 = 0; VAR_35 < VAR_27; ++VAR_35) {
    int VAR_36 = FUNC_18(VAR_4, VAR_35, VAR_33.sessionsPerChann);
    if (0 != VAR_36) {
      FUNC_10("TSC-vnode, failed to open rpc chann");
      FUNC_11(VAR_4);
      return;
    }
  }

  FUNC_2(&VAR_33, 0, sizeof(VAR_33));
  VAR_33.localIp = VAR_8;
  VAR_33.localPort = 0;
  VAR_33.label = "TSC-mgmt";
  VAR_33.numOfThreads = 1;
  VAR_33.fp = VAR_28;
  VAR_33.bits = 20;
  VAR_33.numOfChanns = 1;
  VAR_33.sessionsPerChann = VAR_11;
  VAR_33.idMgmt = VAR_0;
  VAR_33.noFree = 0;
  VAR_33.connType = FUNC_0();
  VAR_33.qhandle = VAR_29;
  VAR_3 = FUNC_17(&VAR_33);
  if (VAR_3 == ((void*)0)) {
    FUNC_24("failed to init connection to mgmt");
    return;
  }

  VAR_30 = FUNC_19(VAR_11 * 2, 200, 60000, "TSC");
  if(0 == VAR_25){
    FUNC_20(VAR_22, 10, ((void*)0), VAR_30, &VAR_23);
  }
  int64_t VAR_37 = VAR_14 < VAR_13 ? VAR_14 : VAR_13;
  VAR_37 = VAR_37 > 2 ? 2 : VAR_37;
  VAR_37 = VAR_37 < 1 ? 1 : VAR_37;

  if (VAR_21 == ((void*)0)) VAR_21 = FUNC_13(VAR_10 / 2, VAR_30, VAR_37);

  VAR_24 = FUNC_16(VAR_10 * 2, VAR_6, VAR_30, VAR_20 * 1000);

  VAR_1 = 1;
  FUNC_26("client is initialized successfully");
  VAR_7 = VAR_18 + sizeof(SShellSubmitMsg);
}
