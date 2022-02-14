
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef int int8_t ;
typedef char* int64_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_22__ {int numOfColumns; int numOfTags; } ;
struct TYPE_21__ {TYPE_6__* pMeterMeta; } ;
struct TYPE_20__ {char* name; size_t type; int bytes; } ;
struct TYPE_18__ {char* data; } ;
struct TYPE_19__ {int cmd; TYPE_2__ res; } ;
struct TYPE_17__ {int bytes; } ;
struct TYPE_16__ {char* aName; } ;
typedef TYPE_1__ TAOS_FIELD ;
typedef TYPE_2__ SSqlRes ;
typedef TYPE_3__ SSqlObj ;
typedef int SSqlCmd ;
typedef TYPE_4__ SSchema ;
typedef TYPE_5__ SMeterMetaInfo ;
typedef TYPE_6__ SMeterMeta ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 TYPE_14__* VAR_3 ;
 int FUNC_5 (char*,int,char*) ;
 TYPE_4__* FUNC_6 (TYPE_6__*) ;
 char* FUNC_7 (TYPE_6__*) ;
 TYPE_1__* FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 TYPE_5__* FUNC_10 (int *,int ) ;
 int FUNC_11 (TYPE_3__*,int,int) ;

__attribute__((used)) static int32_t FUNC_12(SSqlObj *VAR_4, int32_t VAR_5) {
  SSqlRes *VAR_6 = &VAR_4->res;


  SSqlCmd * VAR_7 = &VAR_4->cmd;
  SMeterMetaInfo *VAR_8 = FUNC_10(VAR_7, 0);
  SMeterMeta * VAR_9 = VAR_8->pMeterMeta;







  int32_t VAR_10 = VAR_9->numOfColumns;
  int32_t VAR_11 = VAR_10 + VAR_9->numOfTags;

  if (FUNC_0(VAR_8)) {
    VAR_10 = VAR_9->numOfColumns + VAR_9->numOfTags;
  }

  FUNC_11(VAR_4, VAR_11, VAR_5);
  SSchema *VAR_12 = FUNC_6(VAR_9);

  for (int32_t VAR_13 = 0; VAR_13 < VAR_10; ++VAR_13) {
    TAOS_FIELD *VAR_14 = FUNC_8(VAR_7, 0);
    FUNC_4(VAR_6->data + FUNC_9(VAR_7, 0) * VAR_11 + VAR_14->bytes * VAR_13, VAR_12[VAR_13].name,
            VAR_0);

    char *VAR_15 = VAR_3[VAR_12[VAR_13].type].aName;

    VAR_14 = FUNC_8(VAR_7, 1);
    FUNC_4(VAR_6->data + FUNC_9(VAR_7, 1) * VAR_11 + VAR_14->bytes * VAR_13, VAR_15, VAR_14->bytes);

    int32_t VAR_16 = VAR_12[VAR_13].bytes;
    if (VAR_12[VAR_13].type == 130) {
      VAR_16 = VAR_16 / VAR_2;
    }

    VAR_14 = FUNC_8(VAR_7, 2);
    *(int32_t *)(VAR_6->data + FUNC_9(VAR_7, 2) * VAR_11 + VAR_14->bytes * VAR_13) = VAR_16;

    VAR_14 = FUNC_8(VAR_7, 3);
    if (VAR_13 >= VAR_9->numOfColumns && VAR_9->numOfTags != 0) {
      FUNC_4(VAR_6->data + FUNC_9(VAR_7, 3) * VAR_11 + VAR_14->bytes * VAR_13, "tag",
              FUNC_3("tag") + 1);
    }
  }

  if (FUNC_0(VAR_8)) {
    return 0;
  }


  char *VAR_17 = FUNC_7(VAR_9);
  for (int32_t VAR_18 = VAR_10; VAR_18 < VAR_11; ++VAR_18) {

    TAOS_FIELD *VAR_19 = FUNC_8(VAR_7, 0);
    FUNC_4(VAR_6->data + FUNC_9(VAR_7, 0) * VAR_11 + VAR_19->bytes * VAR_18, VAR_12[VAR_18].name,
            VAR_0);


    VAR_19 = FUNC_8(VAR_7, 1);
    char *VAR_20 = VAR_3[VAR_12[VAR_18].type].aName;
    FUNC_4(VAR_6->data + FUNC_9(VAR_7, 1) * VAR_11 + VAR_19->bytes * VAR_18, VAR_20, VAR_19->bytes);


    int32_t VAR_21 = VAR_12[VAR_18].bytes;
    VAR_19 = FUNC_8(VAR_7, 2);
    if (VAR_12[VAR_18].type == 130) {
      VAR_21 = VAR_21 / VAR_2;
    }

    *(int32_t *)(VAR_6->data + FUNC_9(VAR_7, 2) * VAR_11 + VAR_19->bytes * VAR_18) = VAR_21;


    VAR_19 = FUNC_8(VAR_7, 3);
    char *VAR_22 = VAR_6->data + FUNC_9(VAR_7, 3) * VAR_11 + VAR_19->bytes * VAR_18;

    if (FUNC_1(VAR_17, VAR_12[VAR_18].type)) {
      FUNC_2(VAR_22, "%s", VAR_1);
    } else {
      switch (VAR_12[VAR_18].type) {
        case 135:

          FUNC_4(VAR_22, VAR_17, VAR_12[VAR_18].bytes);
          break;
        case 130:
          FUNC_5(VAR_17, VAR_12[VAR_18].bytes, VAR_22);
          break;
        case 132: {





          FUNC_2(VAR_22, "%f", *(float *)VAR_17);

          }
          break;
        case 133: {





          FUNC_2(VAR_22, "%lf", *(double *)VAR_17);

          }
          break;
        case 128:
          FUNC_2(VAR_22, "%d", *(int8_t *)VAR_17);
          break;
        case 129:
          FUNC_2(VAR_22, "%d", *(int16_t *)VAR_17);
          break;
        case 131:
          FUNC_2(VAR_22, "%d", *(int32_t *)VAR_17);
          break;
        case 136:
          FUNC_2(VAR_22, "%lld", *(int64_t *)VAR_17);
          break;
        case 134: {
          char *VAR_23 = (*((int8_t *)VAR_17) == 0) ? "false" : "true";
          FUNC_2(VAR_22, "%s", VAR_23);
          break;
        }
        default:
          break;
      }
    }

    VAR_17 += VAR_12[VAR_18].bytes;
  }

  return 0;
}
