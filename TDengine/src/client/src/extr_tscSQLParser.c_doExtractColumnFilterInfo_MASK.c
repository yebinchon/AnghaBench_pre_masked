
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_18__ {scalar_t__ nType; int nLen; } ;
struct TYPE_13__ {int nSQLOptr; TYPE_8__ val; struct TYPE_13__* pRight; } ;
typedef TYPE_1__ tSQLExpr ;
typedef void* int64_t ;
typedef int int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_17__ {size_t len; int lowerRelOptr; int upperRelOptr; int lowerBndd; void* pz; int upperBndd; } ;
struct TYPE_16__ {int columnIndex; int tableIndex; } ;
struct TYPE_15__ {int pMeterMeta; } ;
struct TYPE_14__ {scalar_t__ type; } ;
typedef int SSqlCmd ;
typedef TYPE_2__ SSchema ;
typedef TYPE_3__ SMeterMetaInfo ;
typedef TYPE_4__ SColumnIndex ;
typedef TYPE_5__ SColumnFilterInfo ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,TYPE_8__*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (TYPE_8__*,char*,scalar_t__) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 TYPE_3__* FUNC_5 (int *,int ) ;
 size_t FUNC_6 (int *) ;

__attribute__((used)) static int32_t FUNC_7(SSqlCmd* VAR_17, SColumnFilterInfo* VAR_18, SColumnIndex* VAR_19,
                                         tSQLExpr* VAR_20) {
  const char* VAR_21 = "not supported filter condition";

  tSQLExpr* VAR_22 = VAR_20->pRight;
  SMeterMetaInfo* VAR_23 = FUNC_5(VAR_17, VAR_19->tableIndex);

  SSchema* VAR_24 = FUNC_4(VAR_23->pMeterMeta, VAR_19->columnIndex);

  int16_t VAR_25 = VAR_24->type;
  if (VAR_25 >= VAR_8 && VAR_25 <= VAR_2) {
    VAR_25 = VAR_2;
  } else if (VAR_25 == VAR_5 || VAR_25 == VAR_4) {
    VAR_25 = VAR_4;
  } else if ((VAR_25 == VAR_7) && (VAR_3 == VAR_22->val.nType)) {
    int VAR_26 = FUNC_1(VAR_17, &VAR_22->val);
    if (VAR_1 != VAR_26) {
      return VAR_26;
    }
  }

  if (VAR_20->nSQLOptr == 131 || VAR_20->nSQLOptr == 129) {
    FUNC_3(&VAR_22->val, (char*)&VAR_18->upperBndd, VAR_25);
  } else {
    if (VAR_25 == VAR_3) {
      VAR_18->pz = (int64_t)FUNC_0(1, VAR_22->val.nLen + 1);
      VAR_18->len = VAR_22->val.nLen;

      FUNC_3(&VAR_22->val, (char*)VAR_18->pz, VAR_25);
    } else if (VAR_25 == VAR_6) {

      VAR_18->pz = (int64_t)FUNC_0(1, (VAR_22->val.nLen + 1) * VAR_9);

      FUNC_3(&VAR_22->val, (char*)VAR_18->pz, VAR_25);

      size_t VAR_27 = FUNC_6((wchar_t*)VAR_18->pz);
      VAR_18->len = VAR_27 * VAR_9;
    } else {
      FUNC_3(&VAR_22->val, (char*)&VAR_18->lowerBndd, VAR_25);
    }
  }

  switch (VAR_20->nSQLOptr) {
    case 131:
      VAR_18->upperRelOptr = VAR_14;
      break;
    case 129:
      VAR_18->upperRelOptr = VAR_13;
      break;
    case 132:
      VAR_18->lowerRelOptr = VAR_11;
      break;
    case 133:
      VAR_18->lowerRelOptr = VAR_12;
      break;
    case 134:
      VAR_18->lowerRelOptr = VAR_10;
      break;
    case 128:
      VAR_18->lowerRelOptr = VAR_16;
      break;
    case 130:
      VAR_18->lowerRelOptr = VAR_15;
      break;
    default:
      FUNC_2(VAR_17, VAR_21);
      return VAR_0;
  }

  return VAR_1;
}
