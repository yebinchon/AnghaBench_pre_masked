
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int igNotExists; int meterId; } ;
struct TYPE_12__ {int name; } ;
struct TYPE_11__ {int db; } ;
struct TYPE_10__ {char* payload; int payloadLen; int msgType; scalar_t__ existsCheck; } ;
struct TYPE_9__ {TYPE_2__ cmd; } ;
typedef TYPE_1__ SSqlObj ;
typedef TYPE_2__ SSqlCmd ;
typedef TYPE_3__ SMgmtHead ;
typedef TYPE_4__ SMeterMetaInfo ;
typedef TYPE_5__ SDropTableMsg ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 TYPE_4__* FUNC_2 (TYPE_2__*,int ) ;

int FUNC_3(SSqlObj *VAR_2) {
  SDropTableMsg *VAR_3;
  char * VAR_4, *VAR_5;
  int VAR_6 = 0;

  SSqlCmd * VAR_7 = &VAR_2->cmd;
  SMeterMetaInfo *VAR_8 = FUNC_2(VAR_7, 0);

  VAR_4 = VAR_7->payload + VAR_1;
  VAR_5 = VAR_4;

  SMgmtHead *VAR_9 = (SMgmtHead *)VAR_4;
  FUNC_1(VAR_8->name, VAR_9->db);
  VAR_4 += sizeof(SMgmtHead);

  VAR_3 = (SDropTableMsg *)VAR_4;
  FUNC_0(VAR_3->meterId, VAR_8->name);

  VAR_3->igNotExists = VAR_7->existsCheck ? 1 : 0;
  VAR_4 += sizeof(SDropTableMsg);

  VAR_6 = VAR_4 - VAR_5;
  VAR_7->payloadLen = VAR_6;
  VAR_7->msgType = VAR_0;

  return VAR_6;
}
