
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_14__ {int numOfIps; int * ip; int * ipstr; } ;
struct TYPE_13__ {char* acctId; char* version; int superAuth; int writeAuth; } ;
struct TYPE_12__ {int numOfIps; int * ip; } ;
struct TYPE_10__ {char* pRsp; } ;
struct TYPE_11__ {TYPE_2__ res; TYPE_1__* pTscObj; } ;
struct TYPE_9__ {char* acctId; char* db; char* sversion; int pTimer; int superAuth; int writeAuth; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlRes ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SIpList ;
typedef TYPE_5__ SConnectRsp ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char*,char*,char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,int,TYPE_1__*,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 TYPE_7__ VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_5(SSqlObj *VAR_6) {
  char VAR_7[VAR_0];
  SConnectRsp *VAR_8;

  STscObj *VAR_9 = VAR_6->pTscObj;
  SSqlRes *VAR_10 = &VAR_6->res;

  VAR_8 = (SConnectRsp *)VAR_10->pRsp;
  FUNC_1(VAR_9->acctId, VAR_8->acctId);
  FUNC_0(VAR_7, "%s%s%s", VAR_9->acctId, VAR_1, VAR_9->db);
  FUNC_1(VAR_9->db, VAR_7);
  FUNC_1(VAR_9->sversion, VAR_8->version);
  VAR_9->writeAuth = VAR_8->writeAuth;
  VAR_9->superAuth = VAR_8->superAuth;
  FUNC_2(VAR_4, VAR_2 * 500, VAR_9, VAR_5, &VAR_9->pTimer);

  return 0;
}
