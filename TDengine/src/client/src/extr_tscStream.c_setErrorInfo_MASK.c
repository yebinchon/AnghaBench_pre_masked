
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_9__ {int payloadLen; int payload; } ;
struct TYPE_8__ {TYPE_2__* pSql; } ;
struct TYPE_6__ {int code; } ;
struct TYPE_7__ {TYPE_1__ res; TYPE_4__ cmd; } ;
typedef TYPE_3__ STscObj ;
typedef TYPE_4__ SSqlCmd ;


 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(STscObj* VAR_0, int32_t VAR_1, char* VAR_2) {
  if (VAR_0 == ((void*)0)) {
    return;
  }

  SSqlCmd* VAR_3 = &VAR_0->pSql->cmd;

  VAR_0->pSql->res.code = VAR_1;
  FUNC_0(VAR_3->payload, VAR_2, VAR_3->payloadLen);
}
