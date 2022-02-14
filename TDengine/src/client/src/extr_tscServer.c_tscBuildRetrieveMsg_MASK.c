
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_6__ {char* payload; int payloadLen; int msgType; int type; } ;
struct TYPE_5__ {int qhandle; } ;
struct TYPE_7__ {TYPE_2__ cmd; TYPE_1__ res; } ;
typedef TYPE_3__ SSqlObj ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;

int FUNC_1(SSqlObj *VAR_2) {
  char *VAR_3, *VAR_4;
  int VAR_5 = 0;

  VAR_4 = VAR_2->cmd.payload + VAR_1;
  VAR_3 = VAR_4;

  *((uint64_t *)VAR_3) = VAR_2->res.qhandle;
  VAR_3 += sizeof(VAR_2->res.qhandle);

  *((uint16_t*)VAR_3) = FUNC_0(VAR_2->cmd.type);
  VAR_3 += sizeof(VAR_2->cmd.type);

  VAR_5 = VAR_3 - VAR_4;
  VAR_2->cmd.payloadLen = VAR_5;
  VAR_2->cmd.msgType = VAR_0;

  return VAR_5;
}
