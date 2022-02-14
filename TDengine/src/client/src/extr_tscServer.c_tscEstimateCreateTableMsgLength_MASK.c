
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int numOfCols; int count; int payload; } ;
struct TYPE_4__ {TYPE_2__ cmd; } ;
typedef int STagData ;
typedef TYPE_1__ SSqlObj ;
typedef TYPE_2__ SSqlCmd ;
typedef int SSchema ;
typedef int SMgmtHead ;
typedef int SCreateTableMsg ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;

int FUNC_2(SSqlObj *VAR_1) {
  SSqlCmd *VAR_2 = &(VAR_1->cmd);

  int32_t VAR_3 = FUNC_0() + sizeof(SMgmtHead) + sizeof(SCreateTableMsg);

  if (VAR_2->numOfCols == 0 && VAR_2->count == 0) {
    VAR_3 += sizeof(STagData);
  } else {
    VAR_3 += sizeof(SSchema) * (VAR_2->numOfCols + VAR_2->count);
  }

  if (FUNC_1(VAR_2->payload) > 0) VAR_3 += FUNC_1(VAR_2->payload) + 1;

  return VAR_3 + VAR_0;
}
