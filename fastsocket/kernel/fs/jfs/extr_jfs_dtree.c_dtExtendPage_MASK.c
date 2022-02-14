
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint ;
typedef size_t u8 ;
typedef int tid_t ;
struct tlock {int lock; } ;
struct super_block {int dummy; } ;
struct pxdlist {size_t npxd; int * pxd; } ;
struct pxd_lock {int index; int pxd; int flag; } ;
struct metapage {int dummy; } ;
struct lv {int offset; int length; } ;
struct ldtentry {int index; } ;
struct inode {struct super_block* i_sb; } ;
struct dtsplit {int data; int key; int index; struct pxdlist* pxdlist; struct metapage* mp; } ;
struct dtslot {int next; } ;
struct dt_lock {size_t index; struct lv* lv; } ;
struct btstack {int dummy; } ;
struct btframe {int bn; } ;
typedef scalar_t__ s64 ;
typedef int pxd_t ;
struct TYPE_10__ {int nextindex; int stblindex; int maxslot; int freelist; int freecnt; int self; } ;
struct TYPE_11__ {struct dtslot* slot; TYPE_1__ header; } ;
typedef TYPE_2__ dtpage_t ;
struct TYPE_12__ {int l2bsize; } ;


 int FUNC_0 (struct metapage*,struct inode*) ;
 struct btframe* FUNC_1 (struct btstack*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ,struct metapage*,int ,TYPE_2__*,int) ;
 size_t* FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (struct inode*,struct metapage*) ;
 int FUNC_6 (struct metapage*) ;
 TYPE_6__* FUNC_7 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*,int ,int ,int ,struct dt_lock**) ;
 int FUNC_10 (TYPE_2__*,int,struct dt_lock**) ;
 int FUNC_11 (char*,struct inode*,struct metapage*,TYPE_2__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct dtslot*,struct dtslot*,int) ;
 int VAR_2 ;
 int FUNC_15 (int ,struct inode*,int ,scalar_t__,int,struct metapage**,scalar_t__*) ;
 int FUNC_16 (struct metapage*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct tlock* FUNC_17 (int ,struct inode*,struct metapage*,int) ;
 struct tlock* FUNC_18 (int ,struct inode*,int) ;

__attribute__((used)) static int FUNC_19(tid_t VAR_8,
      struct inode *VAR_9, struct dtsplit * VAR_10, struct btstack * VAR_11)
{
 struct super_block *VAR_12 = VAR_9->i_sb;
 int VAR_13;
 struct metapage *VAR_14, *VAR_15, *VAR_16;
 dtpage_t *VAR_17, *VAR_18;
 struct pxdlist *VAR_19;
 pxd_t *VAR_20, *VAR_21;
 int VAR_22, VAR_23;
 int VAR_24, VAR_25;
 int VAR_26, VAR_27;
 int VAR_28, VAR_29;
 struct dtslot *VAR_30;
 struct btframe *VAR_31;
 int VAR_32;
 struct dt_lock *VAR_33;
 s64 VAR_34, VAR_35;
 struct tlock *VAR_36;
 struct pxd_lock *VAR_37;
 struct lv *VAR_38;
 uint VAR_39;
 struct ldtentry *VAR_40;
 u8 *VAR_41;


 VAR_14 = VAR_10->mp;
 VAR_17 = FUNC_5(VAR_9, VAR_14);


 VAR_31 = FUNC_1(VAR_11);
 FUNC_3(VAR_9, VAR_31->bn, VAR_15, VAR_1, VAR_18, VAR_13);
 if (VAR_13)
  return (VAR_13);




 VAR_19 = VAR_10->pxdlist;
 VAR_20 = &VAR_19->pxd[VAR_19->npxd];
 VAR_19->npxd++;

 VAR_34 = FUNC_8(VAR_20);
 VAR_21 = &VAR_17->header.self;
 VAR_35 = FUNC_8(VAR_21);

 if (VAR_34 == VAR_35) {
  VAR_39 = VAR_5;
 }

 else {
  VAR_39 = VAR_6;


  VAR_36 = FUNC_18(VAR_8, VAR_9, VAR_3 | VAR_7);
  VAR_37 = (struct pxd_lock *) & VAR_36->lock;
  VAR_37->flag = VAR_2;
  VAR_37->pxd = VAR_17->header.self;
  VAR_37->index = 1;




  if (FUNC_2(VAR_9)) {
   s64 VAR_42;

   VAR_16 = ((void*)0);
   VAR_41 = FUNC_4(VAR_17);
   for (VAR_32 = 0; VAR_32 < VAR_17->header.nextindex; VAR_32++) {
    VAR_40 =
        (struct ldtentry *) & VAR_17->slot[VAR_41[VAR_32]];
    FUNC_15(VAR_8, VAR_9,
          FUNC_12(VAR_40->index),
          VAR_34, VAR_32, &VAR_16, &VAR_42);
   }
   if (VAR_16)
    FUNC_16(VAR_16);
  }
 }




 VAR_17->header.self = *VAR_20;

 FUNC_11("dtExtendPage: ip:0x%p smp:0x%p sp:0x%p", VAR_9, VAR_14, VAR_17);

 FUNC_0(VAR_14, VAR_9);



 VAR_36 = FUNC_17(VAR_8, VAR_9, VAR_14, VAR_3 | VAR_39);
 VAR_33 = (struct dt_lock *) & VAR_36->lock;
 VAR_38 = & VAR_33->lv[0];


 VAR_22 = FUNC_13(VAR_20);
 VAR_23 = VAR_22 << FUNC_7(VAR_12)->l2bsize;




 VAR_26 = VAR_17->header.stblindex;
 VAR_27 = (VAR_17->header.maxslot + 31) >> VAR_0;
 VAR_24 = VAR_17->header.maxslot;
 VAR_32 = VAR_23 >> VAR_0;
 VAR_25 = (VAR_32 + 31) >> VAR_0;
 FUNC_14(&VAR_17->slot[VAR_24], &VAR_17->slot[VAR_26],
        VAR_17->header.nextindex);




 if (VAR_39 == VAR_5) {

  VAR_38->offset = 0;
  VAR_38->length = 1;
  VAR_33->index++;
  VAR_38++;


  VAR_38->offset = VAR_24;
  VAR_38->length = VAR_25;
 }



 else {
  VAR_38->offset = 0;
  VAR_38->length = VAR_17->header.maxslot + VAR_25;
 }

 VAR_33->index++;

 VAR_17->header.maxslot = VAR_32;
 VAR_17->header.stblindex = VAR_24;





 VAR_28 = VAR_26;
 VAR_30 = &VAR_17->slot[VAR_28];
 VAR_29 = VAR_17->header.freelist;
 for (VAR_32 = 0; VAR_32 < VAR_27; VAR_32++, VAR_28++, VAR_30++) {
  VAR_30->next = VAR_29;
  VAR_29 = VAR_28;
 }
 VAR_17->header.freelist = VAR_29;
 VAR_17->header.freecnt += VAR_27;





 VAR_28 = VAR_32 = VAR_24 + VAR_25;
 VAR_30 = &VAR_17->slot[VAR_28];
 for (VAR_28++; VAR_28 < VAR_17->header.maxslot; VAR_30++, VAR_28++)
  VAR_30->next = VAR_28;
 VAR_30->next = -1;


 VAR_28 = VAR_17->header.freelist;
 if (VAR_28 == -1)
  VAR_17->header.freelist = VAR_32;
 else {
  do {
   VAR_30 = &VAR_17->slot[VAR_28];
   VAR_28 = VAR_30->next;
  } while (VAR_28 != -1);

  VAR_30->next = VAR_32;
 }

 VAR_17->header.freecnt += VAR_17->header.maxslot - VAR_32;




 FUNC_9(VAR_17, VAR_10->index, VAR_10->key, VAR_10->data, &VAR_33);

 FUNC_0(VAR_15, VAR_9);



 if (VAR_39 == VAR_5) {
  VAR_32 = VAR_17->header.maxslot >> 2;
  if (VAR_17->header.freelist < VAR_32)
   FUNC_10(VAR_17, VAR_32, &VAR_33);
 }







 VAR_36 = FUNC_17(VAR_8, VAR_9, VAR_15, VAR_3 | VAR_4);
 VAR_33 = (struct dt_lock *) & VAR_36->lock;
 VAR_38 = & VAR_33->lv[VAR_33->index];


 VAR_38->offset = 1;
 VAR_38->length = 1;
 VAR_33->index++;


 VAR_21 = (pxd_t *) & VAR_18->slot[1];
 *VAR_21 = *VAR_20;

 FUNC_6(VAR_15);
 return 0;
}
