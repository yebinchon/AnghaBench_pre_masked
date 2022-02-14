
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tOrderDescriptor ;
typedef int tExtMemBuffer ;
typedef int tColModel ;
typedef scalar_t__ int32_t ;
struct TYPE_11__ {int code; } ;
struct TYPE_10__ {int command; } ;
struct TYPE_13__ {TYPE_2__ res; TYPE_1__ cmd; } ;
struct TYPE_12__ {int queryMutex; struct TYPE_12__* localBuffer; } ;
typedef TYPE_3__ SSubqueryState ;
typedef TYPE_4__ SSqlObj ;
typedef TYPE_3__ SRetrieveSupport ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int **,int *,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_4(SSqlObj *VAR_2, int32_t VAR_3, int32_t VAR_4, SRetrieveSupport *VAR_5,
                                tOrderDescriptor *VAR_6, tColModel *VAR_7, tExtMemBuffer **VAR_8,
                                SSubqueryState *VAR_9) {
  VAR_2->cmd.command = VAR_1;
  VAR_2->res.code = VAR_0;





  if (VAR_3 == 0) {
    FUNC_3(VAR_8, VAR_6, VAR_7, VAR_4);
    FUNC_2(VAR_9);

    if (VAR_5 != ((void*)0)) {
      FUNC_2(VAR_5->localBuffer);

      FUNC_1(&VAR_5->queryMutex);
      FUNC_0(&VAR_5->queryMutex);
      FUNC_2(VAR_5);
    }
  }
}
