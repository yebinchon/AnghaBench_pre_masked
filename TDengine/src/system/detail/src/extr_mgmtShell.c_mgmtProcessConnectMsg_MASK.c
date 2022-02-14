
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_20__ {int numOfIps; } ;
struct TYPE_19__ {int acctId; } ;
struct TYPE_18__ {int user; int ip; int thandle; TYPE_1__* pUser; TYPE_6__* pAcct; int superAuth; int writeAuth; int * pDb; } ;
struct TYPE_17__ {scalar_t__* db; } ;
struct TYPE_16__ {int superAuth; int writeAuth; int version; int acctId; } ;
struct TYPE_15__ {int code; scalar_t__ more; } ;
struct TYPE_14__ {int acct; } ;
typedef TYPE_1__ SUserObj ;
typedef TYPE_2__ STaosRsp ;
typedef int SIpList ;
typedef int SDbObj ;
typedef TYPE_3__ SConnectRsp ;
typedef TYPE_4__ SConnectMsg ;
typedef TYPE_5__ SConnObj ;
typedef TYPE_6__ SAcctObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,int ,char*,int) ;
 int FUNC_3 (char*,TYPE_7__*,int) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_6__* FUNC_5 (int ) ;
 int * FUNC_6 (char*) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_5__*) ;
 int VAR_5 ;
 TYPE_7__* VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (char*,char*,int,...) ;
 int FUNC_10 (int ,int ) ;
 char* FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_14(char *VAR_10, int VAR_11, SConnObj *VAR_12) {
  STaosRsp * VAR_13;
  SConnectRsp *VAR_14;
  SConnectMsg *VAR_15;
  char * VAR_16;
  int VAR_17 = VAR_2;
  SAcctObj * VAR_18 = ((void*)0);
  SUserObj * VAR_19 = ((void*)0);
  SDbObj * VAR_20 = ((void*)0);
  char VAR_21[256] = {0};

  VAR_15 = (SConnectMsg *)VAR_10;

  VAR_19 = FUNC_7(VAR_12->user);
  if (VAR_19 == ((void*)0)) {
    VAR_17 = VAR_2;
    goto _rsp;
  }

  if (FUNC_1()) {
    VAR_17 = VAR_0;
    goto _rsp;
  }

  VAR_18 = FUNC_5(VAR_19->acct);

  if (VAR_15->db[0]) {
    FUNC_9(VAR_21, "%x%s%s", VAR_18->acctId, VAR_4, VAR_15->db);
    VAR_20 = FUNC_6(VAR_21);
    if (VAR_20 == ((void*)0)) {
      VAR_17 = VAR_1;
      goto _rsp;
    }
  }

  if (VAR_12->pAcct) {
    FUNC_8(VAR_12);
    FUNC_0(&VAR_5, 1);
    FUNC_0(&VAR_7, 1);
  }

  VAR_17 = 0;
  VAR_12->pAcct = VAR_18;
  VAR_12->pDb = VAR_20;
  VAR_12->pUser = VAR_19;
  FUNC_4(VAR_12);

_rsp:
  VAR_16 = FUNC_11(VAR_12->thandle, VAR_3, 128);
  if (VAR_16 == ((void*)0)) return 0;

  VAR_10 = VAR_16;
  VAR_13 = (STaosRsp *)VAR_10;
  VAR_13->code = VAR_17;
  VAR_10 += sizeof(STaosRsp);

  if (VAR_17 == 0) {
    VAR_14 = (SConnectRsp *)VAR_13->more;
    FUNC_9(VAR_14->acctId, "%x", VAR_12->pAcct->acctId);
    FUNC_10(VAR_14->version, VAR_9);
    VAR_14->writeAuth = VAR_12->writeAuth;
    VAR_14->superAuth = VAR_12->superAuth;
    VAR_10 += sizeof(SConnectRsp);
    *((uint32_t *)VAR_10) = VAR_8;
    VAR_10 += sizeof(uint32_t);

  } else {
    VAR_12->pAcct = ((void*)0);
    VAR_12->pUser = ((void*)0);
  }

  VAR_11 = VAR_10 - VAR_16;
  FUNC_12(VAR_12->thandle, VAR_16, VAR_11);

  char VAR_22[24];
  FUNC_13(VAR_22, VAR_12->ip);
  FUNC_2("user:%s login from %s, code:%d", VAR_12->user, VAR_22, VAR_17);

  return VAR_17;
}
