
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {int numOfPoints; char** offset; } ;
struct TYPE_16__ {int unCommittedBlocks; int currentSlot; int maxBlocks; TYPE_7__** cacheBlocks; } ;
struct TYPE_15__ {int commit; int pos; int slot; scalar_t__ importedRows; TYPE_4__* pObj; } ;
struct TYPE_14__ {size_t vnode; int pointsPerBlock; int bytesPerPoint; int freePoints; int numOfColumns; int meterId; int sid; TYPE_1__* schema; scalar_t__ pCache; } ;
struct TYPE_13__ {int cacheBlockSize; } ;
struct TYPE_12__ {scalar_t__ firstKey; int vmutex; TYPE_3__ cfg; } ;
struct TYPE_11__ {int bytes; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_2__ SVnodeObj ;
typedef TYPE_3__ SVnodeCfg ;
typedef TYPE_4__ SMeterObj ;
typedef TYPE_5__ SImportInfo ;
typedef TYPE_6__ SCacheInfo ;
typedef TYPE_7__ SCacheBlock ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (char*,size_t,int ,int ,int) ;
 int FUNC_2 (char*,size_t,int ,int ,int,...) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*) ;
 TYPE_2__* VAR_2 ;

int FUNC_9(SImportInfo *VAR_3, char *VAR_4, int VAR_5) {
  SMeterObj *VAR_6 = VAR_3->pObj;
  SVnodeObj *VAR_7 = &VAR_2[VAR_6->vnode];
  SVnodeCfg *VAR_8 = &VAR_7->cfg;
  int VAR_9 = -1;
  SCacheInfo *VAR_10 = (SCacheInfo *)VAR_6->pCache;
  int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

  char *VAR_17[VAR_1], *VAR_18[VAR_1];
  int VAR_19 = VAR_10->unCommittedBlocks + 1;
  int VAR_20 = VAR_19 * VAR_6->pointsPerBlock + VAR_5;
  int VAR_21 = (VAR_20 / VAR_6->pointsPerBlock + 1) * VAR_8->cacheBlockSize;
  TSKEY VAR_22 = *((TSKEY *)VAR_4);
  TSKEY VAR_23 = *((TSKEY *)(VAR_4 + VAR_6->bytesPerPoint * (VAR_5 - 1)));

  if (VAR_6->freePoints < VAR_5 || VAR_6->freePoints < (VAR_6->pointsPerBlock << 1)) {
    FUNC_1("vid:%d sid:%d id:%s, import failed, cache is full, freePoints:%d", VAR_6->vnode, VAR_6->sid, VAR_6->meterId,
           VAR_6->freePoints);
    VAR_3->importedRows = 0;
    VAR_3->commit = 1;
    VAR_9 = VAR_0;
    return VAR_9;
  }

  FUNC_2("vid:%d sid:%d id:%s, %d rows data will be imported to cache, firstKey:%ld lastKey:%ld",
      VAR_6->vnode, VAR_6->sid, VAR_6->meterId, VAR_5, VAR_22, VAR_23);

  FUNC_6(&(VAR_7->vmutex));
  if (VAR_22 < VAR_7->firstKey) VAR_7->firstKey = VAR_22;
  FUNC_7(&(VAR_7->vmutex));

  char *VAR_24 = FUNC_4(VAR_21);
  VAR_17[0] = VAR_24;
  VAR_18[0] = VAR_17[0];
  for (VAR_14 = 1; VAR_14 < VAR_6->numOfColumns; ++VAR_14) {
    VAR_17[VAR_14] = VAR_17[VAR_14 - 1] + VAR_20 * VAR_6->schema[VAR_14 - 1].bytes;
    VAR_18[VAR_14] = VAR_17[VAR_14];
  }


  for (VAR_13 = 0; VAR_13 < VAR_5; ++VAR_13) {
    for (VAR_14 = 0; VAR_14 < VAR_6->numOfColumns; ++VAR_14) {
      FUNC_5(VAR_18[VAR_14], VAR_4, VAR_6->schema[VAR_14].bytes);
      VAR_4 += VAR_6->schema[VAR_14].bytes;
      VAR_18[VAR_14] += VAR_6->schema[VAR_14].bytes;
    }
  }


  VAR_16 = VAR_5;
  VAR_12 = VAR_3->pos;
  VAR_11 = VAR_3->slot;
  while (1) {
    VAR_15 = VAR_10->cacheBlocks[VAR_11]->numOfPoints - VAR_12;
    for (VAR_14 = 0; VAR_14 < VAR_6->numOfColumns; ++VAR_14) {
      int VAR_25 = VAR_15 * VAR_6->schema[VAR_14].bytes;
      FUNC_5(VAR_18[VAR_14], VAR_10->cacheBlocks[VAR_11]->offset[VAR_14] + VAR_12 * VAR_6->schema[VAR_14].bytes, VAR_25);
      VAR_18[VAR_14] += VAR_25;
    }
    VAR_12 = 0;
    VAR_16 += VAR_15;

    if (VAR_11 == VAR_10->currentSlot) break;
    VAR_11 = (VAR_11 + 1) % VAR_10->maxBlocks;
  }

  for (VAR_14 = 0; VAR_14 < VAR_6->numOfColumns; ++VAR_14) VAR_18[VAR_14] = VAR_17[VAR_14];
  VAR_12 = VAR_3->pos;


  VAR_11 = VAR_3->slot;
  while (1) {
    VAR_15 = (VAR_16 > VAR_6->pointsPerBlock - VAR_12) ? VAR_6->pointsPerBlock - VAR_12 : VAR_16;
    SCacheBlock *VAR_26 = VAR_10->cacheBlocks[VAR_11];
    for (VAR_14 = 0; VAR_14 < VAR_6->numOfColumns; ++VAR_14) {
      int VAR_27 = VAR_15 * VAR_6->schema[VAR_14].bytes;
      FUNC_5(VAR_26->offset[VAR_14] + VAR_12 * VAR_6->schema[VAR_14].bytes, VAR_18[VAR_14], VAR_27);
      VAR_18[VAR_14] += VAR_27;
    }
    VAR_26->numOfPoints = VAR_15 + VAR_12;
    VAR_12 = 0;
    VAR_16 -= VAR_15;

    if (VAR_11 == VAR_10->currentSlot) break;
    VAR_11 = (VAR_11 + 1) % VAR_10->maxBlocks;
  }


  while (VAR_16 > 0) {
    VAR_3->commit = FUNC_8(VAR_6);
    if (VAR_3->commit < 0) goto _exit;
    VAR_15 = (VAR_16 > VAR_6->pointsPerBlock) ? VAR_6->pointsPerBlock : VAR_16;
    SCacheBlock *VAR_28 = VAR_10->cacheBlocks[VAR_10->currentSlot];
    for (VAR_14 = 0; VAR_14 < VAR_6->numOfColumns; ++VAR_14) {
      int VAR_29 = VAR_15 * VAR_6->schema[VAR_14].bytes;
      FUNC_5(VAR_28->offset[VAR_14] + VAR_12 * VAR_6->schema[VAR_14].bytes, VAR_18[VAR_14], VAR_29);
      VAR_18[VAR_14] += VAR_29;
    }
    VAR_16 -= VAR_15;
    VAR_28->numOfPoints = VAR_15;
  }

  VAR_9 = 0;
  FUNC_0(&VAR_6->freePoints, VAR_5);
  FUNC_2("vid:%d sid:%d id:%s, %d rows data are imported to cache", VAR_6->vnode, VAR_6->sid, VAR_6->meterId, VAR_5);

_exit:
  FUNC_3(VAR_24);
  return VAR_9;
}
