
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef char uint8_t ;
typedef scalar_t__ int32_t ;
struct TYPE_18__ {scalar_t__ sid; char sversion; scalar_t__ vgid; char numOfColumns; char numOfTags; char rowSize; scalar_t__ meterType; scalar_t__ index; TYPE_1__* vpeerDesc; int uid; } ;
struct TYPE_17__ {scalar_t__ numOfMeters; } ;
struct TYPE_16__ {int meterId; TYPE_7__ meta; } ;
struct TYPE_15__ {char bytes; char colId; } ;
struct TYPE_13__ {char* pRsp; int code; scalar_t__ numOfTotal; } ;
struct TYPE_14__ {TYPE_2__ res; } ;
struct TYPE_12__ {scalar_t__ vnode; } ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SSchema ;
typedef TYPE_5__ SMultiMeterMeta ;
typedef TYPE_6__ SMultiMeterInfoMsg ;
typedef TYPE_7__ SMeterMeta ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (char) ;
 int FUNC_3 (int ,int ,char*,scalar_t__,int ) ;
 TYPE_4__* FUNC_4 (TYPE_7__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (char*,char,...) ;
 int FUNC_6 (char*,TYPE_3__*,scalar_t__) ;

int FUNC_7(SSqlObj *VAR_11) {
  SSchema *VAR_12;
  uint8_t VAR_13;
  int32_t VAR_14;
  int32_t VAR_15;

  char *VAR_16 = VAR_11->res.pRsp;

  VAR_13 = *VAR_16;
  if (VAR_13 != VAR_4) {
    FUNC_5("invalid ie type:%d", VAR_13);
    VAR_11->res.code = VAR_0;
    VAR_11->res.numOfTotal = 0;
    return VAR_2;
  }

  VAR_16++;

  SMultiMeterInfoMsg *VAR_17 = (SMultiMeterInfoMsg *)VAR_16;
  VAR_14 = FUNC_1(VAR_17->numOfMeters);
  VAR_16 += sizeof(SMultiMeterInfoMsg);

  for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
    SMultiMeterMeta *VAR_18 = (SMultiMeterMeta *)VAR_16;
    SMeterMeta * VAR_19 = &VAR_18->meta;

    VAR_19->sid = FUNC_1(VAR_19->sid);
    VAR_19->sversion = FUNC_2(VAR_19->sversion);
    VAR_19->vgid = FUNC_1(VAR_19->vgid);
    VAR_19->uid = FUNC_0(VAR_19->uid);

    if (VAR_19->sid <= 0 || VAR_19->vgid < 0) {
      FUNC_5("invalid meter vgid:%d, sid%d", VAR_19->vgid, VAR_19->sid);
      VAR_11->res.code = VAR_1;
      VAR_11->res.numOfTotal = VAR_15;
      return VAR_2;
    }

    VAR_19->numOfColumns = FUNC_2(VAR_19->numOfColumns);

    if (VAR_19->numOfTags > VAR_6 || VAR_19->numOfTags < 0) {
      FUNC_5("invalid tag value count:%d", VAR_19->numOfTags);
      VAR_11->res.code = VAR_1;
      VAR_11->res.numOfTotal = VAR_15;
      return VAR_2;
    }

    if (VAR_19->numOfTags > VAR_6 || VAR_19->numOfTags < 0) {
      FUNC_5("invalid numOfTags:%d", VAR_19->numOfTags);
      VAR_11->res.code = VAR_1;
      VAR_11->res.numOfTotal = VAR_15;
      return VAR_2;
    }

    if (VAR_19->numOfColumns > VAR_5 || VAR_19->numOfColumns < 0) {
      FUNC_5("invalid numOfColumns:%d", VAR_19->numOfColumns);
      VAR_11->res.code = VAR_1;
      VAR_11->res.numOfTotal = VAR_15;
      return VAR_2;
    }

    for (int VAR_20 = 0; VAR_20 < VAR_8; ++VAR_20) {
      VAR_19->vpeerDesc[VAR_20].vnode = FUNC_1(VAR_19->vpeerDesc[VAR_20].vnode);
    }

    VAR_19->rowSize = 0;
    VAR_16 += sizeof(SMultiMeterMeta);
    VAR_12 = (SSchema *)VAR_16;

    int32_t VAR_21 = VAR_19->numOfColumns + VAR_19->numOfTags;
    for (int VAR_22 = 0; VAR_22 < VAR_21; ++VAR_22) {
      VAR_12->bytes = FUNC_2(VAR_12->bytes);
      VAR_12->colId = FUNC_2(VAR_12->colId);


      if (VAR_22 < VAR_19->numOfColumns) {
        VAR_19->rowSize += VAR_12->bytes;
      }
      VAR_12++;
    }

    VAR_16 += VAR_21 * sizeof(SSchema);

    int32_t VAR_23 = 0;
    SSchema *VAR_24 = FUNC_4(VAR_19);

    if (VAR_19->meterType == VAR_7) {
      for (int32_t VAR_25 = 0; VAR_25 < VAR_19->numOfTags; ++VAR_25) {
        VAR_23 += VAR_24[VAR_25].bytes;
      }
    }

    VAR_16 += VAR_23;
    int32_t VAR_26 = (int32_t)(VAR_16 - ((char *)VAR_19));

    VAR_19->index = 0;
    (void)FUNC_3(VAR_10, VAR_18->meterId, (char *)VAR_19, VAR_26, VAR_9);
  }

  VAR_11->res.code = VAR_3;
  VAR_11->res.numOfTotal = VAR_15;
  FUNC_6("%p load multi-metermeta resp complete num:%d", VAR_11, VAR_11->res.numOfTotal);
  return VAR_3;
}
