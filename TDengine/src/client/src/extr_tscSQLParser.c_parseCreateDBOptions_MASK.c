
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_17__ {scalar_t__ n; int z; } ;
struct TYPE_19__ {TYPE_5__ precision; TYPE_3__* keep; } ;
struct TYPE_18__ {int precision; void* daysToKeep2; void* daysToKeep1; void* daysToKeep; } ;
struct TYPE_16__ {scalar_t__ payload; } ;
struct TYPE_15__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_13__ {int i64Key; } ;
struct TYPE_14__ {TYPE_1__ pVar; } ;
typedef TYPE_4__ SSqlCmd ;
typedef TYPE_5__ SSQLToken ;
typedef int SMgmtHead ;
typedef TYPE_6__ SCreateDbMsg ;
typedef TYPE_7__ SCreateDBInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_2 (TYPE_4__*,char const*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_6 ;

int32_t FUNC_6(SCreateDBInfo* VAR_7, SSqlCmd* VAR_8) {
  const char* VAR_9 = "invalid number of options";
  const char* VAR_10 = "invalid time precision";

  SCreateDbMsg* VAR_11 = (SCreateDbMsg*)(VAR_8->payload + VAR_6 + sizeof(SMgmtHead));
  FUNC_1(VAR_11, VAR_7);

  if (VAR_7->keep != ((void*)0)) {
    switch (VAR_7->keep->nExpr) {
      case 1:
        VAR_11->daysToKeep = FUNC_0(VAR_7->keep->a[0].pVar.i64Key);
        break;
      case 2: {
        VAR_11->daysToKeep = FUNC_0(VAR_7->keep->a[0].pVar.i64Key);
        VAR_11->daysToKeep1 = FUNC_0(VAR_7->keep->a[1].pVar.i64Key);
        break;
      }
      case 3: {
        VAR_11->daysToKeep = FUNC_0(VAR_7->keep->a[0].pVar.i64Key);
        VAR_11->daysToKeep1 = FUNC_0(VAR_7->keep->a[1].pVar.i64Key);
        VAR_11->daysToKeep2 = FUNC_0(VAR_7->keep->a[2].pVar.i64Key);
        break;
      }
      default: {
        FUNC_2(VAR_8, VAR_9);
        return VAR_0;
      }
    }
  }

  SSQLToken* VAR_12 = &VAR_7->precision;
  if (VAR_12->n > 0) {
    VAR_12->n = FUNC_3(VAR_12->z);

    if (FUNC_5(VAR_12->z, VAR_5, VAR_12->n) == 0 &&
        FUNC_4(VAR_5) == VAR_12->n) {

      VAR_11->precision = VAR_4;
    } else if (FUNC_5(VAR_12->z, VAR_3, VAR_12->n) == 0 &&
               FUNC_4(VAR_3) == VAR_12->n) {
      VAR_11->precision = VAR_2;
    } else {
      FUNC_2(VAR_8, VAR_10);
      return VAR_0;
    }
  }

  return VAR_1;
}
