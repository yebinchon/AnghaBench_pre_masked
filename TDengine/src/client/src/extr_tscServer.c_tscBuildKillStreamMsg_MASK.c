
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int queryId; scalar_t__ handle; } ;
struct TYPE_10__ {int db; } ;
struct TYPE_9__ {char* payload; int payloadLen; int msgType; } ;
struct TYPE_8__ {TYPE_1__* pTscObj; TYPE_3__ cmd; } ;
struct TYPE_7__ {char* db; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;
typedef TYPE_4__ SMgmtHead ;
typedef TYPE_5__ SKillStream ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;

int FUNC_1(SSqlObj *VAR_2) {
  SKillStream *VAR_3;
  char * VAR_4, *VAR_5;
  int VAR_6 = 0;

  SSqlCmd *VAR_7 = &VAR_2->cmd;
  STscObj *VAR_8 = VAR_2->pTscObj;
  VAR_4 = VAR_7->payload + VAR_1;
  VAR_5 = VAR_4;

  SMgmtHead *VAR_9 = (SMgmtHead *)VAR_4;
  FUNC_0(VAR_9->db, VAR_8->db);
  VAR_4 += sizeof(SMgmtHead);

  VAR_3 = (SKillStream *)VAR_4;
  VAR_3->handle = 0;
  FUNC_0(VAR_3->queryId, VAR_7->payload);

  VAR_4 += sizeof(SKillStream);

  VAR_6 = VAR_4 - VAR_5;
  VAR_7->payloadLen = VAR_6;
  VAR_7->msgType = VAR_0;

  return VAR_6;
}
