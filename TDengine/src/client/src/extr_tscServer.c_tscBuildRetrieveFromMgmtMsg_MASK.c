
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


typedef int uint64_t ;
struct TYPE_15__ {int name; } ;
struct TYPE_14__ {int db; } ;
struct TYPE_13__ {char* payload; int payloadLen; int msgType; int type; } ;
struct TYPE_10__ {int qhandle; } ;
struct TYPE_12__ {TYPE_1__ res; TYPE_2__* pTscObj; TYPE_4__ cmd; } ;
struct TYPE_11__ {int db; } ;
typedef TYPE_2__ STscObj ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SSqlCmd ;
typedef TYPE_5__ SMgmtHead ;
typedef TYPE_6__ SMeterMetaInfo ;


 int VAR_0 ;
 char FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 size_t FUNC_2 (int ) ;
 int VAR_1 ;
 TYPE_6__* FUNC_3 (TYPE_4__*,int ) ;

int FUNC_4(SSqlObj *VAR_2) {
  char *VAR_3, *VAR_4;
  int VAR_5 = 0;

  SSqlCmd *VAR_6 = &VAR_2->cmd;
  STscObj *VAR_7 = VAR_2->pTscObj;
  VAR_3 = VAR_6->payload + VAR_1;
  VAR_4 = VAR_3;

  SMgmtHead *VAR_8 = (SMgmtHead *)VAR_3;

  SMeterMetaInfo *VAR_9 = FUNC_3(VAR_6, 0);
  size_t VAR_10 = FUNC_2(VAR_9->name);

  if (VAR_10 > 0) {
    FUNC_1(VAR_8->db, VAR_9->name);
  } else {
    FUNC_1(VAR_8->db, VAR_7->db);
  }

  VAR_3 += sizeof(SMgmtHead);

  *((uint64_t *)VAR_3) = VAR_2->res.qhandle;
  VAR_3 += sizeof(VAR_2->res.qhandle);

  *VAR_3 = FUNC_0(VAR_6->type);
  VAR_3 += sizeof(VAR_6->type);

  VAR_5 = VAR_3 - VAR_4;
  VAR_6->payloadLen = VAR_5;
  VAR_6->msgType = VAR_0;

  return VAR_5;
}
