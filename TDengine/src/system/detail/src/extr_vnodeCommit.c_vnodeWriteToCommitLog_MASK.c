
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int simpleCheck ;
typedef int head ;
struct TYPE_9__ {int sid; char action; int sversion; int contLen; int simpleCheck; } ;
struct TYPE_8__ {int vnode; int sid; int sversion; } ;
struct TYPE_7__ {char* pWrite; int mappingSize; char* pMem; int mappingThreshold; int logMutex; } ;
typedef TYPE_1__ SVnodeObj ;
typedef TYPE_2__ SMeterObj ;
typedef TYPE_3__ SCommitHead ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (TYPE_1__*,int *) ;

int FUNC_5(SMeterObj *VAR_2, char VAR_3, char *VAR_4, int VAR_5, int VAR_6) {
  SVnodeObj *VAR_7 = VAR_1 + VAR_2->vnode;
  if (VAR_7->pWrite == ((void*)0)) return 0;

  SCommitHead VAR_8;
  VAR_8.sid = VAR_2->sid;
  VAR_8.action = VAR_3;
  VAR_8.sversion = VAR_2->sversion;
  VAR_8.contLen = VAR_5;
  VAR_8.simpleCheck = (VAR_8.sversion+VAR_8.sid+VAR_8.contLen+VAR_8.action) & 0xFFFFFF;
  int VAR_9 = VAR_8.simpleCheck;

  FUNC_2(&(VAR_7->logMutex));

  if (VAR_7->mappingSize - (VAR_7->pWrite - VAR_7->pMem) < VAR_5 + sizeof(SCommitHead) + sizeof(VAR_9) + 100) {
    FUNC_3(&(VAR_7->logMutex));
    FUNC_0("vid:%d, mem mapping space is not enough, wait for commit", VAR_2->vnode);
    FUNC_4(VAR_7, ((void*)0));
    return VAR_0;
  }
  char *VAR_10 = VAR_7->pWrite;
  VAR_7->pWrite += sizeof(VAR_8) + VAR_5 + sizeof(VAR_9);
  FUNC_1(VAR_10, (char *)&VAR_8, sizeof(VAR_8));
  FUNC_1(VAR_10 + sizeof(VAR_8), VAR_4, VAR_5);
  FUNC_1(VAR_10 + sizeof(VAR_8) + VAR_5, &VAR_9, sizeof(VAR_9));
  FUNC_3(&(VAR_7->logMutex));

  if (VAR_7->pWrite - VAR_7->pMem > VAR_7->mappingThreshold) {
    FUNC_0("vid:%d, mem mapping is close to limit, commit", VAR_2->vnode);
    FUNC_4(VAR_7, ((void*)0));
  }

  FUNC_0("vid:%d sid:%d, data is written to commit log", VAR_2->vnode, VAR_2->sid);

  return 0;
}
