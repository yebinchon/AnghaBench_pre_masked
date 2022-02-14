
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int user; } ;
struct TYPE_14__ {int name; } ;
struct TYPE_13__ {int db; } ;
struct TYPE_12__ {char* payload; int payloadLen; int msgType; } ;
struct TYPE_11__ {TYPE_1__* pTscObj; TYPE_3__ cmd; } ;
struct TYPE_10__ {int db; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;
typedef TYPE_4__ SMgmtHead ;
typedef TYPE_5__ SMeterMetaInfo ;
typedef TYPE_6__ SDropAcctMsg ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_5__* FUNC_1 (TYPE_3__*,int ) ;

int FUNC_2(SSqlObj *VAR_2) {
  SDropAcctMsg *VAR_3;
  char * VAR_4, *VAR_5;
  int VAR_6 = 0;

  SSqlCmd * VAR_7 = &VAR_2->cmd;
  STscObj * VAR_8 = VAR_2->pTscObj;
  SMeterMetaInfo *VAR_9 = FUNC_1(VAR_7, 0);

  VAR_4 = VAR_7->payload + VAR_1;
  VAR_5 = VAR_4;

  SMgmtHead *VAR_10 = (SMgmtHead *)VAR_4;
  FUNC_0(VAR_10->db, VAR_8->db);
  VAR_4 += sizeof(SMgmtHead);

  VAR_3 = (SDropAcctMsg *)VAR_4;
  FUNC_0(VAR_3->user, VAR_9->name);

  VAR_4 += sizeof(SDropAcctMsg);

  VAR_6 = VAR_4 - VAR_5;
  VAR_7->payloadLen = VAR_6;
  VAR_7->msgType = VAR_0;

  return VAR_6;
}
