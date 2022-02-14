
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_31__ {scalar_t__ numOfTags; TYPE_1__* vpeerDesc; int meterType; void* numOfColumns; int precision; void* sversion; void* vgid; void* sid; int uid; } ;
struct TYPE_35__ {char* meterId; TYPE_5__ meta; } ;
struct TYPE_29__ {scalar_t__ sid; scalar_t__ vgId; } ;
struct TYPE_34__ {int sversion; scalar_t__ numOfTags; int numOfColumns; char* pTagData; TYPE_3__ gid; int uid; int meterType; } ;
struct TYPE_33__ {scalar_t__ code; } ;
struct TYPE_32__ {TYPE_2__* vnodeGid; } ;
struct TYPE_30__ {int precision; } ;
struct TYPE_28__ {scalar_t__ vnode; int publicIp; } ;
struct TYPE_27__ {void* vnode; int ip; } ;
struct TYPE_26__ {int thandle; } ;
struct TYPE_25__ {TYPE_4__ cfg; } ;
struct TYPE_24__ {scalar_t__ numOfMeters; } ;
typedef TYPE_6__ SVgObj ;
typedef TYPE_7__ STaosRsp ;
typedef int STaosHeader ;
typedef TYPE_8__ STabObj ;
typedef int SSchema ;
typedef TYPE_9__ SMultiMeterMeta ;
typedef TYPE_10__ SMultiMeterInfoMsg ;
typedef TYPE_11__ SDbObj ;
typedef TYPE_12__ SConnObj ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int ,int,scalar_t__) ;
 int FUNC_5 (char*,char*,int ,int) ;
 int FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (TYPE_12__*,int,char**,TYPE_7__**) ;
 TYPE_11__* FUNC_8 (char*) ;
 TYPE_8__* FUNC_9 (char*) ;
 TYPE_6__* FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_8__*) ;
 scalar_t__ FUNC_12 (TYPE_8__*) ;
 scalar_t__ FUNC_13 (char*,TYPE_8__*,TYPE_8__*) ;
 int FUNC_14 (int *,TYPE_8__*,int) ;
 scalar_t__ FUNC_15 (char*,int) ;
 char* FUNC_16 (char*,char) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int ,char*,int) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (char*) ;

int FUNC_21(char *VAR_7, int VAR_8, SConnObj *VAR_9) {
  SDbObj * VAR_10 = ((void*)0);
  STabObj * VAR_11 = ((void*)0);
  SVgObj * VAR_12 = ((void*)0);
  SMultiMeterMeta * VAR_13 = ((void*)0);
  SSchema * VAR_14 = ((void*)0);
  STaosRsp * VAR_15 = ((void*)0);
  char * VAR_16 = ((void*)0);

  SMultiMeterInfoMsg * VAR_17 = (SMultiMeterInfoMsg *)VAR_7;
  char * VAR_18 = VAR_7 + sizeof(SMultiMeterInfoMsg);
  VAR_17->numOfMeters = FUNC_2(VAR_17->numOfMeters);

  int VAR_19 = 4*1024*1024;

  char *VAR_20;
  if ((VAR_16 = FUNC_7(VAR_9, VAR_19, &VAR_20, &VAR_15)) == ((void*)0)) {
    FUNC_19(VAR_9->thandle, VAR_5, VAR_2);
    return 0;
  }

  int32_t VAR_21 = 0;
  char VAR_22[VAR_4];
  char* VAR_23;

  char* VAR_24 = VAR_16 + sizeof(STaosRsp) + sizeof(SMultiMeterInfoMsg) + 1;
  char* VAR_25 = VAR_16 + VAR_19;

  while (VAR_18 - VAR_7 < VAR_8) {
    VAR_23 = FUNC_16(VAR_18, ',');
    if (VAR_23 == ((void*)0)) {
      break;
    }

    FUNC_6(VAR_22, VAR_18, VAR_23 - VAR_18);
    VAR_22[VAR_23 - VAR_18] = '\0';
    VAR_18 = VAR_23 + 1;


    if ((VAR_25 - VAR_24) < VAR_0) {
      char* VAR_26 = VAR_16 - sizeof(STaosHeader);
      VAR_19 *= 2;
      VAR_26 = (char*)FUNC_15(VAR_26, VAR_19);
      if (((void*)0) == VAR_26) {
        char* VAR_27 = VAR_16 - sizeof(STaosHeader);
        FUNC_20(VAR_27);
        FUNC_19(VAR_9->thandle, VAR_5, VAR_2);
        break;
      }

      VAR_24 = (char*)VAR_26 + sizeof(STaosHeader) + (VAR_24 - VAR_16);
      VAR_16 = (char*)VAR_26 + sizeof(STaosHeader);
      VAR_20 = VAR_16;
      VAR_15 = (STaosRsp *)VAR_16;
      VAR_25 = VAR_26 + VAR_19;
    }


    VAR_11 = FUNC_9(VAR_22);
    VAR_10 = FUNC_8(VAR_22);

    if (VAR_11 == ((void*)0) || (VAR_10 == ((void*)0))) {
      continue;
    } else {
      FUNC_5("%s, uid:%lld sversion:%d meter meta is retrieved", VAR_22, VAR_11->uid, VAR_11->sversion);
      VAR_13 = (SMultiMeterMeta *)VAR_24;

      FUNC_6(VAR_13->meterId, VAR_22, FUNC_17(VAR_22));
      VAR_13->meta.uid = FUNC_1(VAR_11->uid);
      VAR_13->meta.sid = FUNC_2(VAR_11->gid.sid);
      VAR_13->meta.vgid = FUNC_2(VAR_11->gid.vgId);
      VAR_13->meta.sversion = FUNC_3(VAR_11->sversion);
      VAR_13->meta.precision = VAR_10->cfg.precision;
      VAR_13->meta.numOfTags = VAR_11->numOfTags;
      VAR_13->meta.numOfColumns = FUNC_3(VAR_11->numOfColumns);
      VAR_13->meta.meterType = VAR_11->meterType;

      VAR_24 += sizeof(SMultiMeterMeta);
      VAR_14 = (SSchema *)VAR_24;

      if (FUNC_12(VAR_11)) {
        FUNC_0(VAR_11->numOfTags == 0);

        STabObj *VAR_28 = FUNC_9(VAR_11->pTagData);
        uint32_t VAR_29 = (uint32_t)VAR_28->numOfTags + VAR_28->numOfColumns;

        VAR_13->meta.numOfTags = VAR_28->numOfTags;
        FUNC_14(VAR_14, VAR_28, VAR_29);
        VAR_24 += VAR_29 * sizeof(SSchema);


        int32_t VAR_30 = FUNC_13(VAR_24, VAR_28, VAR_11);
        VAR_24 += VAR_30;
      } else {




        uint32_t VAR_31 = (uint32_t)VAR_11->numOfTags + VAR_11->numOfColumns;
        FUNC_14(VAR_14, VAR_11, VAR_31);
        VAR_24 += VAR_31 * sizeof(SSchema);
      }

      if (FUNC_11(VAR_11)) {
        VAR_12 = FUNC_10(VAR_11->gid.vgId);
        if (VAR_12 == ((void*)0)) {
          VAR_15->code = VAR_1;
          VAR_20++;
          FUNC_4("%s, uid:%lld sversion:%d vgId:%d pVgroup is NULL", VAR_22, VAR_11->uid, VAR_11->sversion,
                 VAR_11->gid.vgId);
          goto _error_exit_code;
        }

        for (int VAR_32 = 0; VAR_32 < VAR_6; ++VAR_32) {
          VAR_13->meta.vpeerDesc[VAR_32].ip = VAR_12->vnodeGid[VAR_32].publicIp;
          VAR_13->meta.vpeerDesc[VAR_32].vnode = FUNC_2(VAR_12->vnodeGid[VAR_32].vnode);
        }
      }
    }

    VAR_21++;
    if (VAR_21 > VAR_17->numOfMeters) {
      VAR_20++;
      break;
    }
  }


  VAR_8 = VAR_24 - VAR_20;

  VAR_15->code = 0;
  VAR_20 += sizeof(STaosRsp);
  *VAR_20 = VAR_3;
  VAR_20++;

  SMultiMeterInfoMsg *VAR_33 = (SMultiMeterInfoMsg *)VAR_20;

  VAR_33->numOfMeters = FUNC_2(VAR_21);
  goto _exit_code;

_error_exit_code:
  VAR_8 = VAR_20 - VAR_16;

_exit_code:
  FUNC_18(VAR_9->thandle, VAR_16, VAR_8);

  return VAR_8;
}
