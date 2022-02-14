
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nTokens; TYPE_2__* a; } ;
typedef TYPE_1__ tDCLSQL ;
typedef int int32_t ;
struct TYPE_8__ {char* member_0; int member_1; scalar_t__ len; int name; } ;
struct TYPE_7__ {scalar_t__ n; int z; } ;
typedef TYPE_2__ SSQLToken ;
typedef TYPE_3__ SDNodeDynConfOption ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (TYPE_3__*) ;

int32_t FUNC_3(tDCLSQL* VAR_2) {
  if (VAR_2->nTokens < 1 || VAR_2->nTokens > 2) {
    return VAR_0;
  }

  SDNodeDynConfOption VAR_3[6] = {{"resetLog", 8}, {"rpcDebugFlag", 12}, {"tmrDebugFlag", 12},
                                                      {"cDebugFlag", 10}, {"uDebugFlag", 10}, {"debugFlag", 9}};

  SSQLToken* VAR_4 = &VAR_2->a[0];

  if (VAR_2->nTokens == 1) {

    for (int32_t VAR_5 = 0; VAR_5 < 1; ++VAR_5) {
      SDNodeDynConfOption* VAR_6 = &VAR_3[VAR_5];
      if ((FUNC_0(VAR_6->name, VAR_4->z, VAR_4->n) == 0) && (VAR_6->len == VAR_4->n)) {
        return VAR_1;
      }
    }
  } else {
    SSQLToken* VAR_7 = &VAR_2->a[1];

    int32_t VAR_8 = FUNC_1(VAR_7->z, ((void*)0), 10);
    if (VAR_8 < 131 || VAR_8 > 199) {

      return VAR_0;
    }

    for (int32_t VAR_9 = 1; VAR_9 < FUNC_2(VAR_3); ++VAR_9) {
      SDNodeDynConfOption* VAR_10 = &VAR_3[VAR_9];
      if ((FUNC_0(VAR_10->name, VAR_4->z, VAR_4->n) == 0) && (VAR_10->len == VAR_4->n)) {

        return VAR_1;
      }
    }
  }
  return VAR_0;
}
