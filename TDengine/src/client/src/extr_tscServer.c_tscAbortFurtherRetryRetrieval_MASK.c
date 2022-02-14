
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {TYPE_1__* pState; int queryMutex; int numOfRetry; } ;
struct TYPE_5__ {int code; } ;
typedef int TAOS_RES ;
typedef TYPE_2__ SRetrieveSupport ;
typedef char* LPVOID ;
typedef int LPTSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*,int *,char*) ;
 int FUNC_7 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static void FUNC_8(SRetrieveSupport *VAR_7, TAOS_RES *VAR_8, int32_t VAR_9) {
  char VAR_10[256] = {0};
  FUNC_5(VAR_6, VAR_10, 256);
  FUNC_6("sub:%p failed to flush data to disk:reason:%s", VAR_8, VAR_10);


  VAR_7->pState->code = -VAR_9;
  VAR_7->numOfRetry = VAR_4;

  FUNC_4(&VAR_7->queryMutex);

  FUNC_7(VAR_7, VAR_8, VAR_7->pState->code);
}
