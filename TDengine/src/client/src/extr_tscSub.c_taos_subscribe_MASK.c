
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {char const* name; int mseconds; scalar_t__ lastKey; int numOfFields; int result; int fields; int * taos; struct TYPE_6__* signature; } ;
typedef TYPE_1__ TAOS_SUB ;
typedef int TAOS_FIELD ;
typedef TYPE_1__ SSub ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,char*,char const*) ;
 int FUNC_4 (char const*,char const*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const*,char const*,char const*,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (char*,char const*) ;
 int FUNC_16 (char*,int ) ;

TAOS_SUB *FUNC_17(const char *VAR_0, const char *VAR_1, const char *VAR_2, const char *VAR_3, const char *VAR_4, int64_t VAR_5, int VAR_6) {
  SSub *VAR_7;

  VAR_7 = (SSub *)FUNC_0(sizeof(SSub));
  if (VAR_7 == ((void*)0)) return ((void*)0);
  FUNC_2(VAR_7, 0, sizeof(SSub));

  VAR_7->signature = VAR_7;
  FUNC_4(VAR_7->name, VAR_4);
  VAR_7->mseconds = VAR_6;
  VAR_7->lastKey = VAR_5;
  if (VAR_7->lastKey == 0) {
    VAR_7->lastKey = FUNC_5();
  }

  FUNC_10();
  VAR_7->taos = FUNC_7(VAR_0, VAR_1, VAR_2, ((void*)0), 0);
  if (VAR_7->taos == ((void*)0)) {
    FUNC_14(VAR_7);
  } else {
    char VAR_8[128];
    FUNC_3(VAR_8, "use %s", VAR_3);
    int VAR_9 = FUNC_12(VAR_7->taos, VAR_8);
    if (VAR_9 != 0) {
      FUNC_15("failed to open DB:%s", VAR_3);
      FUNC_6(VAR_7->taos);
      FUNC_14(VAR_7);
    } else {
      FUNC_3(VAR_8, "select * from %s where _c0 > now+1000d", VAR_7->name);
      if (FUNC_12(VAR_7->taos, VAR_8)) {
        FUNC_16("failed to select, reason:%s", FUNC_8(VAR_7->taos));
        FUNC_6(VAR_7->taos);
        FUNC_14(VAR_7);
        return ((void*)0);
      }
      VAR_7->result = FUNC_13(VAR_7->taos);
      VAR_7->numOfFields = FUNC_11(VAR_7->result);
      FUNC_1(VAR_7->fields, FUNC_9(VAR_7->result), sizeof(TAOS_FIELD) * VAR_7->numOfFields);
    }
  }

  return VAR_7;
}
