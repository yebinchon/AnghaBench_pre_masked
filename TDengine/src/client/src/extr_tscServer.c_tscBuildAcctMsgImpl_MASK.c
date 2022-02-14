
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ int8_t ;
typedef int int32_t ;
struct TYPE_11__ {scalar_t__ accessState; void* maxConnections; void* maxQueryTime; void* maxStorage; void* maxPointsPerSecond; void* maxStreams; void* maxTimeSeries; void* maxDbs; void* maxUsers; } ;
struct TYPE_17__ {TYPE_1__ cfg; int pass; int user; } ;
struct TYPE_16__ {char* name; } ;
struct TYPE_15__ {int db; } ;
struct TYPE_14__ {char* payload; int payloadLen; scalar_t__* defaultVal; } ;
struct TYPE_13__ {TYPE_2__* pTscObj; TYPE_4__ cmd; } ;
struct TYPE_12__ {char* db; } ;
typedef TYPE_2__ STscObj ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SSqlCmd ;
typedef TYPE_5__ SMgmtHead ;
typedef TYPE_6__ SMeterMetaInfo ;
typedef TYPE_7__ SCreateAcctMsg ;


 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 TYPE_6__* FUNC_3 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_4(SSqlObj *VAR_1) {
  SCreateAcctMsg *VAR_2;
  char * VAR_3, *VAR_4;
  int VAR_5 = 0;

  SSqlCmd * VAR_6 = &VAR_1->cmd;
  STscObj * VAR_7 = VAR_1->pTscObj;
  SMeterMetaInfo *VAR_8 = FUNC_3(VAR_6, 0);

  VAR_3 = VAR_6->payload + VAR_0;
  VAR_4 = VAR_3;

  SMgmtHead *VAR_9 = (SMgmtHead *)VAR_3;
  FUNC_2(VAR_9->db, VAR_7->db);
  VAR_3 += sizeof(SMgmtHead);

  VAR_2 = (SCreateAcctMsg *)VAR_3;
  FUNC_2(VAR_2->user, VAR_8->name);
  FUNC_2(VAR_2->pass, VAR_6->payload);

  VAR_3 += sizeof(SCreateAcctMsg);

  VAR_2->cfg.maxUsers = FUNC_1((int32_t)VAR_6->defaultVal[0]);
  VAR_2->cfg.maxDbs = FUNC_1((int32_t)VAR_6->defaultVal[1]);
  VAR_2->cfg.maxTimeSeries = FUNC_1((int32_t)VAR_6->defaultVal[2]);
  VAR_2->cfg.maxStreams = FUNC_1((int32_t)VAR_6->defaultVal[3]);
  VAR_2->cfg.maxPointsPerSecond = FUNC_1((int32_t)VAR_6->defaultVal[4]);
  VAR_2->cfg.maxStorage = FUNC_0(VAR_6->defaultVal[5]);
  VAR_2->cfg.maxQueryTime = FUNC_0(VAR_6->defaultVal[6]);
  VAR_2->cfg.maxConnections = FUNC_1((int32_t)VAR_6->defaultVal[7]);
  VAR_2->cfg.accessState = (int8_t)VAR_6->defaultVal[8];

  VAR_5 = VAR_3 - VAR_4;
  VAR_6->payloadLen = VAR_5;

  return VAR_5;
}
