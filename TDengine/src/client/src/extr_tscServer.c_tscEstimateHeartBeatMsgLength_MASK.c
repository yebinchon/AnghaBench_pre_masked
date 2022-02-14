
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; TYPE_1__* pTscObj; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__* streamList; TYPE_3__* sqlList; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlStream ;
typedef TYPE_3__ SSqlObj ;
typedef int SSList ;
typedef int SSDesc ;
typedef int SQList ;
typedef int SQDesc ;
typedef int SMgmtHead ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(SSqlObj *VAR_2) {
  int VAR_3 = 0;
  STscObj *VAR_4 = VAR_2->pTscObj;

  VAR_3 += VAR_1 + sizeof(SMgmtHead);
  VAR_3 += sizeof(SQList);

  SSqlObj *VAR_5 = VAR_4->sqlList;
  while (VAR_5) {
    VAR_3 += sizeof(SQDesc);
    VAR_5 = VAR_5->next;
  }

  VAR_3 += sizeof(SSList);
  SSqlStream *VAR_6 = VAR_4->streamList;
  while (VAR_6) {
    VAR_3 += sizeof(SSDesc);
    VAR_6 = VAR_6->next;
  }

  return VAR_3 + VAR_0;
}
