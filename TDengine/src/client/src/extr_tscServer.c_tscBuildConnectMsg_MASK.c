
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int db; } ;
struct TYPE_8__ {char* payload; int payloadLen; int msgType; } ;
struct TYPE_7__ {TYPE_1__* pTscObj; TYPE_3__ cmd; } ;
struct TYPE_6__ {char* db; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;
typedef TYPE_4__ SConnectMsg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*,int ) ;
 int VAR_2 ;

int FUNC_2(SSqlObj *VAR_3) {
  SConnectMsg *VAR_4;
  char * VAR_5, *VAR_6;
  int VAR_7 = 0;

  SSqlCmd *VAR_8 = &VAR_3->cmd;
  STscObj *VAR_9 = VAR_3->pTscObj;
  VAR_5 = VAR_8->payload + VAR_2;
  VAR_6 = VAR_5;

  VAR_4 = (SConnectMsg *)VAR_5;

  char *VAR_10;
  VAR_10 = FUNC_1(VAR_9->db, VAR_1);
  VAR_10 = (VAR_10 == ((void*)0)) ? VAR_9->db : VAR_10 + 1;
  FUNC_0(VAR_4->db, VAR_10);

  VAR_5 += sizeof(SConnectMsg);

  VAR_7 = VAR_5 - VAR_6;
  VAR_8->payloadLen = VAR_7;
  VAR_8->msgType = VAR_0;

  return VAR_7;
}
