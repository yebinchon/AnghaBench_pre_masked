
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_8__ {int tsJoin; int * pJoinExpr; } ;
struct TYPE_7__ {int numOfTables; int type; } ;
typedef TYPE_1__ SSqlCmd ;
typedef int SMeterMetaInfo ;
typedef TYPE_2__ SCondExpr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int * FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int32_t FUNC_4(SSqlCmd* VAR_2, SCondExpr* VAR_3) {
  const char* VAR_4 = "super table join requires tags column";
  const char* VAR_5 = "timestamp join condition missing";
  const char* VAR_6 = "condition missing for join query";

  if (!FUNC_0(VAR_2->type)) {
    if (VAR_2->numOfTables == 1) {
      return VAR_1;
    } else {
      FUNC_2(VAR_2, VAR_6);
      return VAR_0;
    }
  }

  SMeterMetaInfo* VAR_7 = FUNC_3(VAR_2, 0);
  if (FUNC_1(VAR_7)) {

    if (VAR_3->pJoinExpr == ((void*)0)) {
      FUNC_2(VAR_2, VAR_4);
      return VAR_0;
    }
  }

  if (!VAR_3->tsJoin) {
    FUNC_2(VAR_2, VAR_5);
    return VAR_0;
  }

  return VAR_1;
}
