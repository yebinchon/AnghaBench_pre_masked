
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int db; } ;
struct TYPE_12__ {char* payload; int payloadLen; int msgType; } ;
struct TYPE_11__ {TYPE_1__* pTscObj; TYPE_3__ cmd; } ;
struct TYPE_10__ {int mutex; int db; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;
typedef TYPE_4__ SMgmtHead ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_3__*,int) ;
 char* FUNC_6 (char*,TYPE_1__*) ;
 int FUNC_7 (char*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

int FUNC_9(SSqlObj *VAR_3) {
  char *VAR_4, *VAR_5;
  int VAR_6 = 0;
  int VAR_7 = 0;

  SSqlCmd *VAR_8 = &VAR_3->cmd;
  STscObj *VAR_9 = VAR_3->pTscObj;

  FUNC_2(&VAR_9->mutex);

  VAR_7 = FUNC_8(VAR_3);
  if (VAR_0 != FUNC_5(VAR_8, VAR_7)) {
    FUNC_7("%p failed to malloc for heartbeat msg", VAR_3);
    return -1;
  }

  VAR_4 = VAR_8->payload + VAR_2;
  VAR_5 = VAR_4;

  SMgmtHead *VAR_10 = (SMgmtHead *)VAR_4;
  FUNC_4(VAR_10->db, VAR_9->db);
  VAR_4 += sizeof(SMgmtHead);

  VAR_4 = FUNC_6(VAR_4, VAR_9);
  FUNC_3(&VAR_9->mutex);

  VAR_6 = VAR_4 - VAR_5;
  VAR_8->payloadLen = VAR_6;
  VAR_8->msgType = VAR_1;

  FUNC_0(VAR_6 + FUNC_1() <= VAR_7);
  return VAR_6;
}
