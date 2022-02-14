
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_13__ {char* tags; int createFlag; int meterId; } ;
struct TYPE_12__ {int name; } ;
struct TYPE_11__ {int db; } ;
struct TYPE_10__ {int allocSize; char* payload; scalar_t__* defaultVal; int payloadLen; int msgType; } ;
struct TYPE_9__ {TYPE_2__ cmd; } ;
typedef int STagData ;
typedef TYPE_1__ SSqlObj ;
typedef TYPE_2__ SSqlCmd ;
typedef TYPE_3__ SMgmtHead ;
typedef TYPE_4__ SMeterMetaInfo ;
typedef TYPE_5__ SMeterInfoMsg ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;
 int FUNC_7 (int ,int ) ;
 TYPE_4__* FUNC_8 (TYPE_2__*,int ) ;

int FUNC_9(SSqlObj *VAR_2) {
  SMeterInfoMsg *VAR_3;
  char * VAR_4, *VAR_5;
  int VAR_6 = 0;

  char *VAR_7 = 0;
  if (VAR_2->cmd.allocSize > 0) {
    VAR_7 = FUNC_1(1, VAR_2->cmd.allocSize);
    if (((void*)0) == VAR_7) return -1;

    FUNC_3(VAR_7, VAR_2->cmd.payload, VAR_2->cmd.allocSize);
  }

  SSqlCmd * VAR_8 = &VAR_2->cmd;
  SMeterMetaInfo *VAR_9 = FUNC_8(VAR_8, 0);

  VAR_4 = VAR_8->payload + VAR_1;
  VAR_5 = VAR_4;

  SMgmtHead *VAR_10 = (SMgmtHead *)VAR_4;
  FUNC_7(VAR_9->name, VAR_10->db);

  VAR_4 += sizeof(SMgmtHead);

  VAR_3 = (SMeterInfoMsg *)VAR_4;
  FUNC_5(VAR_3->meterId, VAR_9->name);
  VAR_3->createFlag = FUNC_2((uint16_t)VAR_8->defaultVal[0]);
  VAR_4 += sizeof(SMeterInfoMsg);

  if (VAR_8->defaultVal[0] != 0) {
    FUNC_3(VAR_3->tags, VAR_7, sizeof(STagData));
    VAR_4 += sizeof(STagData);
  }

  VAR_6 = VAR_4 - VAR_5;
  VAR_8->payloadLen = VAR_6;
  VAR_8->msgType = VAR_0;

  FUNC_6(VAR_7);

  FUNC_0(VAR_6 + FUNC_4() <= VAR_8->allocSize);
  return VAR_6;
}
