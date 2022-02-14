
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int query ;
struct TYPE_14__ {int commitSlot; scalar_t__ commitPoint; int maxBlocks; } ;
struct TYPE_13__ {scalar_t__ firstKey; scalar_t__ lastKey; int slot; scalar_t__ pos; scalar_t__ key; TYPE_3__* pObj; } ;
struct TYPE_12__ {scalar_t__ pointsPerBlock; int meterId; int sid; int vnode; scalar_t__ pCache; } ;
struct TYPE_10__ {int order; } ;
struct TYPE_11__ {scalar_t__ ekey; int slot; scalar_t__ pos; scalar_t__ key; scalar_t__ skey; TYPE_1__ order; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_2__ SQuery ;
typedef TYPE_3__ SMeterObj ;
typedef TYPE_4__ SImportInfo ;
typedef TYPE_5__ SCacheInfo ;


 int FUNC_0 (char*,int ,int ,int ,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;

int FUNC_3(SImportInfo *VAR_0, int VAR_1) {
  SMeterObj *VAR_2 = VAR_0->pObj;
  int VAR_3 = 0;
  SQuery VAR_4;
  SCacheInfo *VAR_5 = (SCacheInfo *)VAR_2->pCache;

  TSKEY VAR_6 = VAR_1 ? VAR_0->firstKey : VAR_0->lastKey;
  FUNC_1(&VAR_4, 0, sizeof(VAR_4));
  VAR_4.order.order = VAR_1;
  VAR_4.skey = VAR_6;
  VAR_4.ekey = VAR_1 ? VAR_0->lastKey : VAR_0->firstKey;
  FUNC_2(VAR_2, &VAR_4);

  if (VAR_4.slot < 0) {
    VAR_0->slot = VAR_5->commitSlot;
    if (VAR_5->commitPoint >= VAR_2->pointsPerBlock) VAR_0->slot = (VAR_0->slot + 1) % VAR_5->maxBlocks;
    VAR_0->pos = 0;
    VAR_0->key = 0;
    FUNC_0("vid:%d sid:%d id:%s, key:%ld, import to head of cache", VAR_2->vnode, VAR_2->sid, VAR_2->meterId, VAR_6);
    VAR_3 = 0;
  } else {
    VAR_0->slot = VAR_4.slot;
    VAR_0->pos = VAR_4.pos;
    VAR_0->key = VAR_4.key;

    if (VAR_6 != VAR_4.key) {
      if (VAR_1 == 0) {

        VAR_0->pos++;
        if (VAR_0->pos >= VAR_2->pointsPerBlock) {
          VAR_0->slot = (VAR_0->slot + 1) % VAR_5->maxBlocks;
          VAR_0->pos = 0;
        }
      } else {
        if (VAR_0->pos < 0) VAR_0->pos = 0;
      }
    }
    VAR_3 = 0;
  }

  return VAR_3;
}
