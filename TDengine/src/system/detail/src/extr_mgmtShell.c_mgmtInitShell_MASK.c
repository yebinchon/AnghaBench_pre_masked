
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int rpcInit ;
struct TYPE_6__ {char* localIp; char* label; int numOfThreads; int bits; int numOfChanns; int sessionsPerChann; int idleTime; int afp; int qhandle; int connType; int idMgmt; int fp; int localPort; } ;
typedef TYPE_1__ SRpcInit ;
typedef TYPE_1__ SConnObj ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * FUNC_5 (TYPE_1__*) ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;
 int VAR_11 ;

int FUNC_6() {
  SRpcInit VAR_12;

  FUNC_4();

  int VAR_13 = sizeof(SConnObj) * VAR_7;
  VAR_1 = (SConnObj *)FUNC_2(VAR_13);
  if (VAR_1 == ((void*)0)) {
    FUNC_1("failed to malloc for connList to shell");
    return -1;
  }
  FUNC_3(VAR_1, 0, VAR_13);

  int VAR_14 = VAR_9 * VAR_10 / 4.0;
  if (VAR_14 < 1) VAR_14 = 1;

  FUNC_3(&VAR_12, 0, sizeof(VAR_12));



  VAR_12.localIp = "0.0.0.0";

  VAR_12.localPort = VAR_8;
  VAR_12.label = "MND-shell";
  VAR_12.numOfThreads = VAR_14;
  VAR_12.fp = VAR_2;
  VAR_12.bits = 20;
  VAR_12.numOfChanns = 1;
  VAR_12.sessionsPerChann = VAR_7;
  VAR_12.idMgmt = VAR_0;
  VAR_12.connType = FUNC_0();
  VAR_12.idleTime = VAR_11 * 2000;
  VAR_12.qhandle = VAR_3;
  VAR_12.afp = VAR_4;

  VAR_5 = FUNC_5(&VAR_12);
  if (VAR_5 == ((void*)0)) {
    FUNC_1("failed to init tcp connection to shell");
    return -1;
  }

  return 0;
}
