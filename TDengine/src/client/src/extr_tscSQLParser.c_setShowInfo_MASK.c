
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct SSqlInfo {int sqlType; TYPE_1__* pDCLInfo; } ;
typedef int int8_t ;
typedef scalar_t__ int32_t ;
struct TYPE_17__ {int name; } ;
struct TYPE_16__ {scalar_t__ n; int z; } ;
struct TYPE_15__ {scalar_t__ payloadLen; int payload; int showType; int command; } ;
struct TYPE_14__ {TYPE_3__ cmd; } ;
struct TYPE_13__ {int nTokens; TYPE_4__* a; } ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;
typedef TYPE_4__ SSQLToken ;
typedef TYPE_5__ SMeterMetaInfo ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,char const*) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_4__*,int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 TYPE_5__* FUNC_5 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;

int32_t FUNC_7(SSqlObj* VAR_20, struct SSqlInfo* VAR_21) {
  SSqlCmd* VAR_22 = &VAR_20->cmd;
  SMeterMetaInfo* VAR_23 = FUNC_5(VAR_22, 0);

  VAR_22->command = VAR_19;
  int8_t VAR_24 = VAR_21->sqlType;

  const char* VAR_25 = "database name too long";
  const char* VAR_26 = "invalid database name";
  const char* VAR_27 = "pattern filter string too long";

  switch (VAR_24) {
    case 128:
      VAR_22->showType = VAR_18;
      break;
    case 130:
      VAR_22->showType = VAR_16;
      break;
    case 132:
      VAR_22->showType = VAR_9;
      break;

    case 139:
      VAR_22->showType = VAR_7;
      break;
    case 136:
      VAR_22->showType = VAR_10;
      break;
    case 138:
      VAR_22->showType = VAR_12;
      break;
    case 142:
      VAR_22->showType = VAR_4;
      break;
    case 129:
      VAR_22->showType = VAR_17;
      break;
    case 135:
      VAR_22->showType = VAR_11;
      break;
    case 140:
      VAR_22->showType = VAR_6;
      break;
    case 134:
      VAR_22->showType = VAR_13;
      break;
    case 133:
      VAR_22->showType = VAR_14;
      break;
    case 137:
      VAR_22->showType = VAR_8;
      break;
    case 131:
      VAR_22->showType = VAR_15;
      break;
    case 141:
      VAR_22->showType = VAR_5;
      break;
    default:
      return VAR_0;
  }





  if (VAR_24 == 130 || VAR_24 == 132 || VAR_24 == 128) {

    if (VAR_21->pDCLInfo->nTokens > 0) {
      SSQLToken* VAR_28 = &VAR_21->pDCLInfo->a[0];

      if (VAR_28->n > VAR_2) {
        FUNC_1(VAR_22, VAR_25);
        return VAR_0;
      }

      if (VAR_28->n > 0 && FUNC_6(VAR_28) != VAR_1) {
        FUNC_1(VAR_22, VAR_26);
        return VAR_0;
      }

      int32_t VAR_29 = 0;
      if (VAR_28->n > 0) {
        VAR_29 = FUNC_2(VAR_23->name, FUNC_0(VAR_20), VAR_28, ((void*)0), ((void*)0));
      }

      if (VAR_29 != VAR_1) {
        return VAR_29;
      }

      if (VAR_24 != 128 && VAR_21->pDCLInfo->nTokens == 2) {

        SSQLToken* VAR_30 = &VAR_21->pDCLInfo->a[1];

        FUNC_4(VAR_22->payload, VAR_30->z, VAR_30->n);
        VAR_22->payloadLen = FUNC_3(VAR_22->payload);

        if (VAR_22->payloadLen > VAR_3) {
          FUNC_1(VAR_22, VAR_27);
          return VAR_0;
        }
      }
    }
  }

  return VAR_1;
}
