
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char uint8_t ;
typedef int int32_t ;
struct TYPE_16__ {scalar_t__ sid; int sversion; scalar_t__ vgid; int numOfColumns; char numOfTags; int rowSize; scalar_t__ meterType; scalar_t__ index; TYPE_2__* vpeerDesc; int uid; } ;
struct TYPE_15__ {TYPE_6__* pMeterMeta; int name; } ;
struct TYPE_14__ {int bytes; int colId; } ;
struct TYPE_11__ {char* pRsp; } ;
struct TYPE_13__ {int cmd; TYPE_1__ res; } ;
struct TYPE_12__ {scalar_t__ vnode; } ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SSchema ;
typedef TYPE_5__ SMeterMetaInfo ;
typedef TYPE_6__ SMeterMeta ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ,char*,int,int ) ;
 int FUNC_4 (int ,void**,int) ;
 TYPE_4__* FUNC_5 (TYPE_6__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (char*,char,...) ;
 TYPE_5__* FUNC_7 (int *,int ) ;

int FUNC_8(SSqlObj *VAR_10) {
  SMeterMeta *VAR_11;
  SSchema * VAR_12;
  uint8_t VAR_13;

  char *VAR_14 = VAR_10->res.pRsp;

  VAR_13 = *VAR_14;
  if (VAR_13 != VAR_3) {
    FUNC_6("invalid ie type:%d", VAR_13);
    return VAR_0;
  }

  VAR_14++;
  VAR_11 = (SMeterMeta *)VAR_14;

  VAR_11->sid = FUNC_1(VAR_11->sid);
  VAR_11->sversion = FUNC_2(VAR_11->sversion);
  VAR_11->vgid = FUNC_1(VAR_11->vgid);
  VAR_11->uid = FUNC_0(VAR_11->uid);

  if (VAR_11->sid < 0 || VAR_11->vgid < 0) {
    FUNC_6("invalid meter vgid:%d, sid%d", VAR_11->vgid, VAR_11->sid);
    return VAR_1;
  }

  VAR_11->numOfColumns = FUNC_2(VAR_11->numOfColumns);

  if (VAR_11->numOfTags > VAR_5 || VAR_11->numOfTags < 0) {
    FUNC_6("invalid tag value count:%d", VAR_11->numOfTags);
    return VAR_1;
  }

  if (VAR_11->numOfTags > VAR_5 || VAR_11->numOfTags < 0) {
    FUNC_6("invalid numOfTags:%d", VAR_11->numOfTags);
    return VAR_1;
  }

  if (VAR_11->numOfColumns > VAR_4 || VAR_11->numOfColumns < 0) {
    FUNC_6("invalid numOfColumns:%d", VAR_11->numOfColumns);
    return VAR_1;
  }

  for (int VAR_15 = 0; VAR_15 < VAR_7; ++VAR_15) {
    VAR_11->vpeerDesc[VAR_15].vnode = FUNC_1(VAR_11->vpeerDesc[VAR_15].vnode);
  }

  VAR_11->rowSize = 0;
  VAR_14 += sizeof(SMeterMeta);
  VAR_12 = (SSchema *)VAR_14;

  int32_t VAR_16 = VAR_11->numOfColumns + VAR_11->numOfTags;
  for (int VAR_17 = 0; VAR_17 < VAR_16; ++VAR_17) {
    VAR_12->bytes = FUNC_2(VAR_12->bytes);
    VAR_12->colId = FUNC_2(VAR_12->colId);


    if (VAR_17 < VAR_11->numOfColumns) {
      VAR_11->rowSize += VAR_12->bytes;
    }
    VAR_12++;
  }

  VAR_14 += VAR_16 * sizeof(SSchema);

  int32_t VAR_18 = 0;
  SSchema *VAR_19 = FUNC_5(VAR_11);

  if (VAR_11->meterType == VAR_6) {
    for (int32_t VAR_20 = 0; VAR_20 < VAR_11->numOfTags; ++VAR_20) {
      VAR_18 += VAR_19[VAR_20].bytes;
    }
  }

  VAR_14 += VAR_18;
  int32_t VAR_21 = (int32_t)(VAR_14 - (char *)VAR_11);


  VAR_11->index = 0;


  SMeterMetaInfo *VAR_22 = FUNC_7(&VAR_10->cmd, 0);
  FUNC_4(VAR_9, (void **)&(VAR_22->pMeterMeta), 0);

  VAR_22->pMeterMeta = (SMeterMeta *)FUNC_3(VAR_9, VAR_22->name, (char *)VAR_11,
                                                                  VAR_21, VAR_8);
  if (VAR_22->pMeterMeta == ((void*)0)) return 0;

  return VAR_2;
}
