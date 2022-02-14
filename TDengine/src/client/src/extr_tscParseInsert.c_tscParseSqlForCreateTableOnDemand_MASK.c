
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_16__ ;


typedef int uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_28__ {int name; TYPE_16__* pMeterMeta; } ;
struct TYPE_27__ {scalar_t__ type; char* z; scalar_t__ n; } ;
struct TYPE_26__ {scalar_t__ type; scalar_t__ bytes; } ;
struct TYPE_25__ {scalar_t__ payload; } ;
struct TYPE_24__ {TYPE_3__ cmd; } ;
struct TYPE_23__ {char* data; int name; } ;
struct TYPE_22__ {scalar_t__ numOfTags; int precision; } ;
typedef TYPE_1__ STagData ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;
typedef TYPE_4__ SSchema ;
typedef TYPE_5__ SSQLToken ;
typedef TYPE_6__ SMeterMetaInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (scalar_t__,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_5__*,int ) ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (int ,int ,int ) ;
 TYPE_5__ FUNC_7 (char*,scalar_t__*,int,int,int*) ;
 TYPE_4__* FUNC_8 (TYPE_16__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*,TYPE_5__*,char*,scalar_t__,char**,int,int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ,int) ;
 TYPE_6__* FUNC_12 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_13 (TYPE_5__*) ;

__attribute__((used)) static int32_t FUNC_14(char **VAR_10, SSqlObj *VAR_11) {
  int32_t VAR_12 = 0;
  SSQLToken VAR_13;
  SSQLToken VAR_14;
  int32_t VAR_15 = VAR_6;

  SSqlCmd * VAR_16 = &VAR_11->cmd;
  SMeterMetaInfo *VAR_17 = FUNC_12(VAR_16, 0);

  char *VAR_18 = *VAR_10;

  VAR_12 = 0;
  VAR_14 = FUNC_7(VAR_18, &VAR_12, 0, 0, ((void*)0));
  VAR_18 += VAR_12;

  char *VAR_19 = ((void*)0);
  char *VAR_20 = ((void*)0);


  VAR_12 = 0;
  VAR_13 = FUNC_7(VAR_18, &VAR_12, 0, 0, ((void*)0));
  VAR_18 += VAR_12;

  int32_t VAR_21 = 0;
  bool VAR_22 = 0;

  if (VAR_13.type == VAR_0) {
    VAR_19 = &VAR_13.z[0];
    VAR_12 = 0;
    while (1) {
      VAR_13 = FUNC_7(VAR_18, &VAR_12, 0, 0, ((void*)0));
      if (VAR_13.type == VAR_1) {
        VAR_20 = &VAR_13.z[0];
        break;
      }

      ++VAR_21;
    }

    VAR_13 = FUNC_7(VAR_18, &VAR_12, 0, 0, ((void*)0));
    VAR_18 += VAR_12;
  }

  if (VAR_21 == 0 && VAR_19 != ((void*)0)) {
    return VAR_5;
  }

  if (VAR_13.type == VAR_4) {

    VAR_12 = 0;
    VAR_13 = FUNC_7(VAR_18, &VAR_12, 0, 0, ((void*)0));
    VAR_18 += VAR_12;

    STagData *VAR_23 = (STagData *)VAR_16->payload;
    FUNC_2(VAR_23, 0, sizeof(STagData));
    FUNC_4(VAR_11, &VAR_13, 0);

    FUNC_6(VAR_23->name, VAR_17->name, VAR_9);
    VAR_15 = FUNC_10(VAR_11, VAR_23->name, 0);
    if (VAR_15 != VAR_6) {
      return VAR_15;
    }

    if (!FUNC_0(VAR_17)) {
      FUNC_5(VAR_16->payload, "create table only from super table is allowed");
      return VAR_5;
    }

    char * VAR_24 = VAR_23->data;
    SSchema *VAR_25 = FUNC_8(VAR_17->pMeterMeta);

    VAR_12 = 0;
    VAR_13 = FUNC_7(VAR_18, &VAR_12, 0, 0, ((void*)0));
    VAR_18 += VAR_12;
    if (VAR_13.type != VAR_3) {
      FUNC_3(VAR_16->payload, VAR_18);
      return VAR_5;
    }

    int32_t VAR_26 = 0;
    uint32_t VAR_27 = VAR_0;
    uint32_t VAR_28 = 1;
    while (1) {
      VAR_12 = 0;
      VAR_13 = FUNC_7(VAR_18, &VAR_12, 1, VAR_28, &VAR_27);
      VAR_18 += VAR_12;
      if (VAR_13.n == 0) {
        break;
      } else if (VAR_13.type == VAR_1) {
        break;
      }


      if (VAR_2 == VAR_13.type) {
        VAR_13.z++;
        VAR_13.n -= 2;
      }

      VAR_15 = FUNC_9(&VAR_25[VAR_26], &VAR_13, VAR_24, VAR_16->payload, &VAR_18, 0,
                                  VAR_17->pMeterMeta->precision);
      if (VAR_15 != VAR_6) {
        FUNC_3(VAR_16->payload, VAR_18);
        return VAR_5;
      }

      if ((VAR_25[VAR_26].type == VAR_7 ||
           VAR_25[VAR_26].type == VAR_8) &&
          VAR_13.n > VAR_25[VAR_26].bytes) {
        FUNC_5(VAR_16->payload, "tag value too long");
        return VAR_5;
      }

      VAR_24 += VAR_25[VAR_26++].bytes;
    }

    if (VAR_26 != VAR_17->pMeterMeta->numOfTags) {
      FUNC_3(VAR_16->payload, VAR_18);
      return VAR_5;
    }

    if (FUNC_13(&VAR_14) != VAR_6) {
      FUNC_3(VAR_16->payload, VAR_18);
      return VAR_5;
    }

    int32_t VAR_29 = FUNC_4(VAR_11, &VAR_14, 0);
    if (VAR_29 != VAR_6) {
      return VAR_29;
    }

    VAR_22 = 1;
    VAR_15 = FUNC_11(VAR_11, VAR_17->name, 1);
  } else {
    if (VAR_19 != ((void*)0)) {
      VAR_18 = VAR_19;
    } else {
      VAR_18 = VAR_13.z;
    }
    VAR_15 = FUNC_10(VAR_11, VAR_17->name, 0);
  }

  int32_t VAR_30 = VAR_20 - VAR_19 + 1;
  if (VAR_19 != ((void*)0) && VAR_22 == 1) {

    FUNC_1(VAR_18 - VAR_30, VAR_19, VAR_30);
    *VAR_10 = VAR_18 - VAR_30;
  } else {
    *VAR_10 = VAR_18;
  }

  return VAR_15;
}
