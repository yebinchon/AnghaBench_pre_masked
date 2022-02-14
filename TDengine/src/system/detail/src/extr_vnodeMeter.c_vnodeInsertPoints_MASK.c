
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_20__ {int notFreeSlots; } ;
struct TYPE_19__ {int vnode; short bytesPerPoint; int pointsPerBlock; short freePoints; int sversion; scalar_t__ state; scalar_t__ lastKey; int numOfColumns; int meterId; int sid; } ;
struct TYPE_18__ {char* payLoad; int numOfRows; } ;
struct TYPE_14__ {int totalStorage; int pointsWritten; } ;
struct TYPE_15__ {int totalBlocks; } ;
struct TYPE_16__ {int blocksPerMeter; int replications; scalar_t__ daysPerFile; size_t precision; scalar_t__ commitLog; TYPE_2__ cacheNumOfBlocks; } ;
struct TYPE_17__ {scalar_t__ logFd; int maxFiles; scalar_t__ lastKey; scalar_t__ firstKey; TYPE_1__ vnodeStatistic; int vmutex; int version; TYPE_3__ cfg; int lastKeyOnFile; scalar_t__ pCachePool; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_4__ SVnodeObj ;
typedef TYPE_5__ SSubmitMsg ;
typedef TYPE_6__ SMeterObj ;
typedef TYPE_7__ SCachePool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__,scalar_t__,size_t) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int,int ,int ,int,...) ;
 int FUNC_3 (char*,int,int ,int ,int,short,...) ;
 int FUNC_4 (char*,int,int ,int ,scalar_t__,...) ;
 short FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__* VAR_11 ;
 int FUNC_8 (TYPE_6__*,char*,int,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_6__*,char*) ;
 TYPE_4__* VAR_12 ;
 int FUNC_10 (TYPE_4__*,int *) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (TYPE_6__*,int ,char*,int,int) ;

int FUNC_13(SMeterObj *VAR_13, char *VAR_14, int VAR_15, char VAR_16, void *VAR_17, int VAR_18,
                      int *VAR_19, TSKEY VAR_20) {
  int VAR_21, VAR_22;
  short VAR_23;
  SSubmitMsg *VAR_24 = (SSubmitMsg *)VAR_14;
  char * VAR_25;
  TSKEY VAR_26;
  int VAR_27 = 0;
  int VAR_28 = VAR_5;
  SVnodeObj * VAR_29 = VAR_12 + VAR_13->vnode;

  VAR_23 = FUNC_5(VAR_24->numOfRows);
  VAR_21 = VAR_23 * VAR_13->bytesPerPoint + sizeof(VAR_24->numOfRows);
  if (VAR_21 != VAR_15) {
    FUNC_2("vid:%d sid:%d id:%s, invalid submit msg length:%d, expected:%d, bytesPerPoint: %d",
           VAR_13->vnode, VAR_13->sid, VAR_13->meterId, VAR_15, VAR_21, VAR_13->bytesPerPoint);
    VAR_28 = VAR_7;
    goto _over;
  }


  VAR_25 = VAR_24->payLoad;
  VAR_26 = VAR_20;
  if (*((TSKEY *)VAR_25) == 0) {
    for (VAR_22 = 0; VAR_22 < VAR_23; ++VAR_22) {
      *((TSKEY *)VAR_25) = VAR_26++;
      VAR_25 += VAR_13->bytesPerPoint;
    }
  }

  if (VAR_23 >= (VAR_29->cfg.blocksPerMeter - 2) * VAR_13->pointsPerBlock) {
    VAR_28 = VAR_2;
    FUNC_2("vid:%d sid:%d id:%s, batch size too big, it shall be smaller than:%d", VAR_13->vnode, VAR_13->sid,
           VAR_13->meterId, (VAR_29->cfg.blocksPerMeter - 2) * VAR_13->pointsPerBlock);
    return VAR_28;
  }

  SCachePool *VAR_30 = (SCachePool *)VAR_29->pCachePool;
  if (VAR_13->freePoints < VAR_23 || VAR_13->freePoints < (VAR_13->pointsPerBlock << 1) ||
      VAR_30->notFreeSlots > VAR_29->cfg.cacheNumOfBlocks.totalBlocks - 2) {
    VAR_28 = VAR_1;
    FUNC_3("vid:%d sid:%d id:%s, cache is full, freePoints:%d, notFreeSlots:%d", VAR_13->vnode, VAR_13->sid, VAR_13->meterId,
           VAR_13->freePoints, VAR_30->notFreeSlots);
    FUNC_10(VAR_29, ((void*)0));
    return VAR_1;
  }


  if (VAR_29->cfg.commitLog && VAR_16 != VAR_8) {
    if (VAR_29->logFd < 0) return VAR_3;
    VAR_28 = FUNC_12(VAR_13, VAR_0, VAR_14, VAR_15, VAR_18);
    if (VAR_28 != 0) return VAR_28;
  }

  if (VAR_16 == VAR_9 && VAR_29->cfg.replications > 1) {
    VAR_28 = FUNC_8(VAR_13, VAR_14, VAR_15, VAR_0, VAR_18);
    if (VAR_28 != 0) return VAR_28;
  }

  if (VAR_13->sversion < VAR_18) {
    FUNC_3("vid:%d sid:%d id:%s, schema is changed, new:%d old:%d", VAR_13->vnode, VAR_13->sid, VAR_13->meterId, VAR_18,
           VAR_13->sversion);
    FUNC_11(VAR_13->vnode, VAR_13->sid);
    VAR_28 = VAR_1;
    return VAR_28;
  }

  VAR_25 = VAR_24->payLoad;
  VAR_28 = 0;

  TSKEY VAR_31 = *((TSKEY *)VAR_25);
  TSKEY VAR_32 = *((TSKEY *)(VAR_25 + VAR_13->bytesPerPoint * (VAR_23 - 1)));
  int VAR_33 = VAR_20/VAR_29->cfg.daysPerFile/VAR_11[VAR_29->cfg.precision];
  TSKEY VAR_34 = (VAR_33 - VAR_29->maxFiles + 1)*VAR_29->cfg.daysPerFile*VAR_11[VAR_29->cfg.precision];
  TSKEY VAR_35 = (VAR_33 + 2)*VAR_29->cfg.daysPerFile*VAR_11[VAR_29->cfg.precision] - 2;
  if (VAR_31 < VAR_34 || VAR_31 > VAR_35 || VAR_32 < VAR_34 || VAR_32 > VAR_35) {
    FUNC_2("vid:%d sid:%d id:%s, vnode lastKeyOnFile:%lld, data is out of range, numOfPoints:%d firstKey:%lld lastKey:%lld minAllowedKey:%lld maxAllowedKey:%lld",
            VAR_13->vnode, VAR_13->sid, VAR_13->meterId, VAR_29->lastKeyOnFile, VAR_23,VAR_31, VAR_32, VAR_34, VAR_35);
    return VAR_6;
  }

  for (VAR_22 = 0; VAR_22 < VAR_23; ++VAR_22) {

    if (VAR_13->state >= VAR_10) {
      FUNC_4("vid:%d sid:%d id:%s, meter is dropped, abort insert, state:%d", VAR_13->vnode, VAR_13->sid, VAR_13->meterId,
            VAR_13->state);

      VAR_28 = VAR_4;
      break;
    }

    if (*((TSKEY *)VAR_25) <= VAR_13->lastKey) {
      FUNC_4("vid:%d sid:%d id:%s, received key:%ld not larger than lastKey:%ld", VAR_13->vnode, VAR_13->sid, VAR_13->meterId,
            *((TSKEY *)VAR_25), VAR_13->lastKey);
      VAR_25 += VAR_13->bytesPerPoint;
      continue;
    }

    if (!FUNC_0(*((TSKEY *)VAR_25), VAR_26, VAR_29->cfg.precision)) {
      VAR_28 = VAR_6;
      break;
    }

    if (FUNC_9(VAR_13, VAR_25) < 0) {
      VAR_28 = VAR_1;
      break;
    }

    VAR_13->lastKey = *((TSKEY *)VAR_25);
    VAR_25 += VAR_13->bytesPerPoint;
    VAR_27++;
  }
  FUNC_1(&(VAR_29->vnodeStatistic.pointsWritten), VAR_27 * (VAR_13->numOfColumns - 1));
  FUNC_1(&(VAR_29->vnodeStatistic.totalStorage), VAR_27 * VAR_13->bytesPerPoint);

  FUNC_6(&(VAR_29->vmutex));

  if (VAR_13->lastKey > VAR_29->lastKey) VAR_29->lastKey = VAR_13->lastKey;

  if (VAR_31 < VAR_29->firstKey) VAR_29->firstKey = VAR_31;

  VAR_29->version++;

  FUNC_7(&(VAR_29->vmutex));

_over:
  FUNC_3("vid:%d sid:%d id:%s, %d out of %d points are inserted, lastKey:%ld source:%d, vnode total storage: %ld",
         VAR_13->vnode, VAR_13->sid, VAR_13->meterId, VAR_27, VAR_23, VAR_13->lastKey, VAR_16,
         VAR_29->vnodeStatistic.totalStorage);

  *VAR_19 = VAR_27;
  return VAR_28;
}
