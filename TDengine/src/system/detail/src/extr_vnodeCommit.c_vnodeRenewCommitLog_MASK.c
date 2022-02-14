
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ commitLog; } ;
struct TYPE_5__ {char* logFn; char* logOFn; int logFd; int logMutex; int version; TYPE_1__ cfg; int mappingSize; int pMem; } ;
typedef TYPE_2__ SVnodeObj ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_6 (int,int ) ;

int FUNC_7(int VAR_1) {
  SVnodeObj *VAR_2 = VAR_0 + VAR_1;
  char * VAR_3 = VAR_2->logFn;
  char * VAR_4 = VAR_2->logOFn;

  FUNC_3(&(VAR_2->logMutex));

  if (FUNC_0(VAR_2->logFd)) {
    FUNC_2(VAR_2->pMem, VAR_2->mappingSize);
    FUNC_1(VAR_2->logFd);
    FUNC_5(VAR_3, VAR_4);
  }

  if (VAR_2->cfg.commitLog) FUNC_6(VAR_1, VAR_0[VAR_1].version);

  FUNC_4(&(VAR_2->logMutex));

  return VAR_2->logFd;
}
