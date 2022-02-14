
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ mseconds; scalar_t__ stime; char* name; int taos; int * result; scalar_t__ lastKey; struct TYPE_2__* signature; } ;
typedef int TAOS_SUB ;
typedef scalar_t__* TAOS_ROW ;
typedef TYPE_1__ SSub ;


 int FUNC_0 (char*,char*,char*,scalar_t__) ;
 void* FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;

TAOS_ROW FUNC_9(TAOS_SUB *VAR_0) {
  SSub * VAR_1 = (SSub *)VAR_0;
  TAOS_ROW VAR_2;
  char VAR_3[256];

  if (VAR_1 == ((void*)0)) return ((void*)0);
  if (VAR_1->signature != VAR_1) return ((void*)0);

  while (1) {
    if (VAR_1->result != ((void*)0)) {
      VAR_2 = FUNC_4(VAR_1->result);
      if (VAR_2 != ((void*)0)) {
        VAR_1->lastKey = *((uint64_t *)VAR_2[0]);
        return VAR_2;
      }

      FUNC_5(VAR_1->result);
      VAR_1->result = ((void*)0);
      uint64_t VAR_4 = FUNC_1();
      int64_t VAR_5 = VAR_1->mseconds - VAR_4 + VAR_1->stime;
      if (VAR_5 < 0) VAR_5 = 0;
      FUNC_2((int)VAR_5);
    }

    VAR_1->stime = FUNC_1();

    FUNC_0(VAR_3, "select * from %s where _c0 > %lld order by _c0 asc", VAR_1->name, VAR_1->lastKey);
    if (FUNC_6(VAR_1->taos, VAR_3)) {
      FUNC_8("failed to select, reason:%s", FUNC_3(VAR_1->taos));
      return ((void*)0);
    }

    VAR_1->result = FUNC_7(VAR_1->taos);

    if (VAR_1->result == ((void*)0)) {
      FUNC_8("failed to get result, reason:%s", FUNC_3(VAR_1->taos));
      return ((void*)0);
    }
  }

  return ((void*)0);
}
