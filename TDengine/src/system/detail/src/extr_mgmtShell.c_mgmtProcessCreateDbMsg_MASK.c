
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int thandle; TYPE_1__* pUser; int pAcct; int writeAuth; } ;
struct TYPE_8__ {int db; void* rowsInFileBlock; int blocksPerMeter; void* commitTime; void* daysToKeep2; void* daysToKeep1; void* daysToKeep; void* daysPerFile; void* cacheBlockSize; void* maxSessions; } ;
struct TYPE_7__ {int user; } ;
typedef TYPE_2__ SCreateDbMsg ;
typedef TYPE_3__ SConnObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ,int ,int) ;

int FUNC_7(char *VAR_4, int VAR_5, SConnObj *VAR_6) {
  SCreateDbMsg *VAR_7 = (SCreateDbMsg *)VAR_4;
  int VAR_8 = 0;

  if (FUNC_4(VAR_6, VAR_3) != 0) {
    return 0;
  }

  VAR_7->maxSessions = FUNC_1(VAR_7->maxSessions);
  VAR_7->cacheBlockSize = FUNC_1(VAR_7->cacheBlockSize);

  VAR_7->daysPerFile = FUNC_1(VAR_7->daysPerFile);
  VAR_7->daysToKeep = FUNC_1(VAR_7->daysToKeep);
  VAR_7->daysToKeep1 = FUNC_1(VAR_7->daysToKeep1);
  VAR_7->daysToKeep2 = FUNC_1(VAR_7->daysToKeep2);
  VAR_7->commitTime = FUNC_1(VAR_7->commitTime);
  VAR_7->blocksPerMeter = FUNC_2(VAR_7->blocksPerMeter);
  VAR_7->rowsInFileBlock = FUNC_1(VAR_7->rowsInFileBlock);

  if (FUNC_0()) {
    VAR_8 = VAR_0;
  } else if (!VAR_6->writeAuth) {
    VAR_8 = VAR_1;
  } else {
    VAR_8 = FUNC_5(VAR_6->pAcct, VAR_7);
    if (VAR_8 == VAR_2) {
      FUNC_3("DB:%s is created by %s", VAR_7->db, VAR_6->pUser->user);
    }
  }

  FUNC_6(VAR_6->thandle, VAR_3, VAR_8);

  return 0;
}
