
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ commitLog; } ;
struct TYPE_5__ {scalar_t__ logFd; int logMutex; int logFn; TYPE_1__ cfg; } ;
typedef TYPE_2__ SVnodeObj ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int,int ) ;
 TYPE_2__* VAR_0 ;

void FUNC_6(int VAR_1) {
  SVnodeObj *VAR_2 = VAR_0 + VAR_1;

  if (FUNC_0(VAR_2->logFd)) FUNC_1(VAR_2->logFd);

  if (VAR_2->cfg.commitLog && (VAR_2->logFd > 0 && FUNC_4(VAR_2->logFn) < 0)) {
    FUNC_2("vid:%d, failed to remove:%s", VAR_1, VAR_2->logFn);
    FUNC_5("vid:%d, failed to remove:%s", VAR_1, VAR_2->logFn);
  }

  FUNC_3(&(VAR_2->logMutex));
}
