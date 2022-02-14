
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tid_t ;
struct tlock {int lock; } ;
struct metapage {int dummy; } ;
struct lv {int length; scalar_t__ offset; } ;
struct inode {int dummy; } ;
struct dtsplit {int index; int nslot; TYPE_4__* data; struct component_name* key; struct metapage* mp; } ;
struct dt_lock {size_t index; size_t maxcnt; struct lv* lv; } ;
struct component_name {int namlen; } ;
struct btstack {int top; } ;
typedef int s64 ;
typedef int ino_t ;
struct TYPE_10__ {int freecnt; int flag; int nextindex; scalar_t__ stblindex; } ;
struct TYPE_11__ {TYPE_2__ header; } ;
typedef TYPE_3__ dtpage_t ;
struct TYPE_9__ {int ino; struct inode* ip; int tid; } ;
struct TYPE_12__ {TYPE_1__ leaf; } ;
typedef TYPE_4__ ddata_t ;
struct TYPE_13__ {scalar_t__ next_index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct metapage*,struct inode*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ,int ,struct metapage*,TYPE_3__*,int) ;
 int FUNC_4 (struct metapage*) ;
 int VAR_2 ;
 TYPE_7__* FUNC_5 (struct inode*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,int,struct component_name*,TYPE_4__*,struct dt_lock**) ;
 int FUNC_9 (int ,struct inode*,struct dtsplit*,struct btstack*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (struct dt_lock*) ;
 struct tlock* FUNC_11 (int ,struct inode*,struct metapage*,int) ;

int FUNC_12(tid_t VAR_6, struct inode *VAR_7,
  struct component_name * VAR_8, ino_t * VAR_9, struct btstack * VAR_10)
{
 int VAR_11 = 0;
 struct metapage *VAR_12;
 dtpage_t *VAR_13;
 s64 VAR_14;
 int VAR_15;
 struct dtsplit VAR_16;
 ddata_t VAR_17;
 struct dt_lock *VAR_18;
 int VAR_19;
 struct tlock *VAR_20;
 struct lv *VAR_21;
 FUNC_3(VAR_7, VAR_10->top, VAR_14, VAR_12, VAR_13, VAR_15);




 if (FUNC_2(VAR_7)) {
  if (FUNC_5(VAR_7)->next_index == VAR_1) {
   FUNC_4(VAR_12);
   return -VAR_2;
  }
  VAR_19 = FUNC_6(VAR_8->namlen);
  VAR_17.leaf.tid = VAR_6;
  VAR_17.leaf.ip = VAR_7;
 } else {
  VAR_19 = FUNC_7(VAR_8->namlen);
  VAR_17.leaf.ip = ((void*)0);
 }
 VAR_17.leaf.ino = *VAR_9;
 if (VAR_19 > VAR_13->header.freecnt) {
  VAR_16.mp = VAR_12;
  VAR_16.index = VAR_15;
  VAR_16.nslot = VAR_19;
  VAR_16.key = VAR_8;
  VAR_16.data = &VAR_17;
  VAR_11 = FUNC_9(VAR_6, VAR_7, &VAR_16, VAR_10);
  return VAR_11;
 }






 FUNC_1(VAR_12, VAR_7);



 VAR_20 = FUNC_11(VAR_6, VAR_7, VAR_12, VAR_4 | VAR_5);
 VAR_18 = (struct dt_lock *) & VAR_20->lock;
 FUNC_0(VAR_18->index == 0);
 VAR_21 = & VAR_18->lv[0];


 VAR_21->offset = 0;
 VAR_21->length = 1;
 VAR_18->index++;

 FUNC_8(VAR_13, VAR_15, VAR_8, &VAR_17, &VAR_18);


 if (!(VAR_13->header.flag & VAR_0)) {
  if (VAR_18->index >= VAR_18->maxcnt)
   VAR_18 = (struct dt_lock *) FUNC_10(VAR_18);
  VAR_21 = & VAR_18->lv[VAR_18->index];
  VAR_19 = VAR_15 >> VAR_3;
  VAR_21->offset = VAR_13->header.stblindex + VAR_19;
  VAR_21->length =
      ((VAR_13->header.nextindex - 1) >> VAR_3) - VAR_19 + 1;
  VAR_18->index++;
 }


 FUNC_4(VAR_12);

 return 0;
}
