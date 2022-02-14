
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u8 ;
typedef int tid_t ;
struct tlock {int lock; scalar_t__ data; } ;
struct pxdlist {size_t npxd; int * pxd; } ;
struct metapage {int lock; scalar_t__ data; } ;
struct lv {int offset; int length; } ;
struct ldtentry {int index; int namlen; } ;
struct inode {int lock; scalar_t__ data; } ;
struct idtentry {int namlen; } ;
struct dtsplit {int index; int nslot; int data; int key; struct pxdlist* pxdlist; struct tlock* mp; } ;
struct dtslot {int next; } ;
struct dt_lock {size_t index; size_t maxcnt; struct lv* lv; } ;
typedef scalar_t__ s64 ;
typedef int pxd_t ;
struct TYPE_10__ {int flag; int nextindex; int stblindex; int maxslot; int freelist; int freecnt; void* prev; void* next; int self; } ;
struct TYPE_11__ {TYPE_1__ header; struct dtslot* slot; } ;
typedef TYPE_2__ dtpage_t ;


 int FUNC_0 (int) ;


 int FUNC_1 (struct tlock*,struct tlock*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct tlock*) ;
 int FUNC_3 (struct tlock*,scalar_t__,struct tlock*,int,TYPE_2__*,int) ;
 size_t* FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (struct tlock*,struct tlock*) ;
 int FUNC_6 (struct tlock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (int *) ;
 void* FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct tlock*) ;
 int FUNC_13 (TYPE_2__*,int,int ,int ,struct dt_lock**) ;
 int FUNC_14 (TYPE_2__*,int,TYPE_2__*,struct dt_lock**,struct dt_lock**,scalar_t__) ;
 struct tlock* FUNC_15 (struct tlock*,scalar_t__,int,int) ;
 int FUNC_16 (char*,struct tlock*,struct tlock*,struct tlock*) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (void*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,struct tlock*,int ,scalar_t__,int,struct tlock**,scalar_t__*) ;
 int FUNC_21 (struct tlock*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_22 (struct dt_lock*) ;
 struct tlock* FUNC_23 (int ,struct tlock*,struct tlock*,int) ;
 scalar_t__ FUNC_24 (struct tlock*,int ) ;

__attribute__((used)) static int FUNC_25(tid_t VAR_9, struct inode *VAR_10, struct dtsplit * VAR_11,
     struct metapage ** VAR_12, dtpage_t ** VAR_13, pxd_t * VAR_14)
{
 int VAR_15 = 0;
 struct metapage *VAR_16;
 dtpage_t *VAR_17;
 struct metapage *VAR_18;
 dtpage_t *VAR_19;
 s64 VAR_20;
 struct metapage *VAR_21;
 dtpage_t *VAR_22;
 s64 VAR_23;
 struct pxdlist *VAR_24;
 pxd_t *VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
 struct ldtentry *VAR_33;
 struct idtentry *VAR_34;
 u8 *VAR_35;
 struct dtslot *VAR_36;
 int VAR_37, VAR_38;
 int VAR_39;
 struct dt_lock *VAR_40, *VAR_41;
 struct tlock *VAR_42;
 struct dt_lock *VAR_43;
 struct lv *VAR_44, *VAR_45, *VAR_46;


 VAR_16 = VAR_11->mp;
 VAR_17 = FUNC_5(VAR_10, VAR_16);




 VAR_24 = VAR_11->pxdlist;
 VAR_25 = &VAR_24->pxd[VAR_24->npxd];
 VAR_24->npxd++;
 VAR_20 = FUNC_10(VAR_25);
 VAR_18 = FUNC_15(VAR_10, VAR_20, VAR_4, 1);
 if (VAR_18 == ((void*)0))
  return -VAR_2;


 if (FUNC_24(VAR_10, FUNC_19(VAR_25))) {
  FUNC_21(VAR_18);
  return -VAR_1;
 }

 FUNC_16("dtSplitPage: ip:0x%p smp:0x%p rmp:0x%p", VAR_10, VAR_16, VAR_18);

 FUNC_1(VAR_18, VAR_10);



 VAR_42 = FUNC_23(VAR_9, VAR_10, VAR_18, VAR_5 | VAR_7);
 VAR_41 = (struct dt_lock *) & VAR_42->lock;

 VAR_19 = (dtpage_t *) VAR_18->data;
 *VAR_13 = VAR_19;
 VAR_19->header.self = *VAR_25;

 FUNC_1(VAR_16, VAR_10);





 VAR_42 = FUNC_23(VAR_9, VAR_10, VAR_16, VAR_5 | VAR_6);
 VAR_40 = (struct dt_lock *) & VAR_42->lock;


 FUNC_0(VAR_40->index == 0);
 VAR_44 = & VAR_40->lv[0];
 VAR_44->offset = 0;
 VAR_44->length = 1;
 VAR_40->index++;




 VAR_23 = FUNC_18(VAR_17->header.next);
 VAR_19->header.next = FUNC_11(VAR_23);
 VAR_19->header.prev = FUNC_11(FUNC_10(&VAR_17->header.self));
 VAR_17->header.next = FUNC_11(VAR_20);




 VAR_19->header.flag = VAR_17->header.flag;


 VAR_19->header.nextindex = 0;
 VAR_19->header.stblindex = 1;

 VAR_39 = VAR_4 >> VAR_3;
 VAR_19->header.maxslot = VAR_39;
 VAR_38 = (VAR_39 + 31) >> VAR_3;


 VAR_37 = VAR_19->header.stblindex + VAR_38;
 VAR_19->header.freelist = VAR_37;
 VAR_19->header.freecnt = VAR_19->header.maxslot - VAR_37;
 if (VAR_23 == 0 && VAR_11->index == VAR_17->header.nextindex) {

  VAR_45 = & VAR_41->lv[VAR_41->index];
  VAR_45->offset = 0;
  VAR_45->length = 2;
  VAR_41->index++;




  VAR_36 = &VAR_19->slot[VAR_37];
  for (VAR_37++; VAR_37 < VAR_19->header.maxslot; VAR_36++, VAR_37++)
   VAR_36->next = VAR_37;
  VAR_36->next = -1;


  FUNC_13(VAR_19, 0, VAR_11->key, VAR_11->data, &VAR_41);

  goto out;
 }
 if (VAR_23 != 0) {
  FUNC_3(VAR_10, VAR_23, VAR_21, VAR_4, VAR_22, VAR_15);
  if (VAR_15) {
   FUNC_12(VAR_18);
   return VAR_15;
  }

  FUNC_1(VAR_21, VAR_10);



  VAR_42 = FUNC_23(VAR_9, VAR_10, VAR_21, VAR_5 | VAR_8);
  FUNC_16("dtSplitPage: tlck = 0x%p, ip = 0x%p, mp=0x%p",
   VAR_42, VAR_10, VAR_21);
  VAR_43 = (struct dt_lock *) & VAR_42->lock;


  VAR_46 = & VAR_43->lv[VAR_43->index];
  VAR_46->offset = 0;
  VAR_46->length = 1;
  VAR_43->index++;

  VAR_22->header.prev = FUNC_11(VAR_20);

  FUNC_6(VAR_21);
 }




 VAR_26 = VAR_11->index;
 VAR_28 = (VAR_4 >> VAR_3) >> 1;
 VAR_29 = 0;







 VAR_35 = (u8 *) & VAR_17->slot[VAR_17->header.stblindex];
 VAR_27 = VAR_17->header.nextindex;
 for (VAR_30 = VAR_31 = 0; VAR_30 < VAR_27; ++VAR_31) {
  if (VAR_31 == VAR_26)

   VAR_39 = VAR_11->nslot;
  else {
   VAR_32 = VAR_35[VAR_30];
   switch (VAR_17->header.flag & VAR_0) {
   case 128:
    VAR_33 = (struct ldtentry *) & VAR_17->slot[VAR_32];
    if (FUNC_2(VAR_10))
     VAR_39 = FUNC_8(VAR_33->namlen);
    else
     VAR_39 = FUNC_9(VAR_33->
          namlen);
    break;

   case 129:
    VAR_34 = (struct idtentry *) & VAR_17->slot[VAR_32];
    VAR_39 = FUNC_7(VAR_34->namlen);
    break;

   default:
    break;
   }

   ++VAR_30;
  }

  VAR_29 += VAR_39;
  if (VAR_29 >= VAR_28)
   break;
 }
 VAR_45 = & VAR_41->lv[VAR_41->index];
 VAR_45->offset = 0;
 VAR_45->length = 5;
 VAR_41->index++;

 FUNC_14(VAR_17, VAR_30, VAR_19, &VAR_40, &VAR_41, FUNC_2(VAR_10));

 VAR_17->header.nextindex = VAR_30;




 VAR_37 = VAR_19->header.freelist;
 VAR_36 = &VAR_19->slot[VAR_37];
 for (VAR_37++; VAR_37 < VAR_19->header.maxslot; VAR_36++, VAR_37++)
  VAR_36->next = VAR_37;
 VAR_36->next = -1;




 if ((VAR_19->header.flag & 128) && FUNC_2(VAR_10)) {
  s64 VAR_47;

  VAR_21 = ((void*)0);
  VAR_35 = FUNC_4(VAR_19);
  for (VAR_39 = 0; VAR_39 < VAR_19->header.nextindex; VAR_39++) {
   VAR_33 = (struct ldtentry *) & VAR_19->slot[VAR_35[VAR_39]];
   FUNC_20(VAR_9, VAR_10, FUNC_17(VAR_33->index),
         VAR_20, VAR_39, &VAR_21, &VAR_47);
  }
  if (VAR_21)
   FUNC_21(VAR_21);
 }




 if (VAR_26 <= VAR_31) {

  FUNC_13(VAR_17, VAR_26, VAR_11->key, VAR_11->data, &VAR_40);


  if (VAR_40->index >= VAR_40->maxcnt)
   VAR_40 = (struct dt_lock *) FUNC_22(VAR_40);
  VAR_44 = & VAR_40->lv[VAR_40->index];
  VAR_39 = VAR_26 >> VAR_3;
  VAR_44->offset = VAR_17->header.stblindex + VAR_39;
  VAR_44->length =
      ((VAR_17->header.nextindex - 1) >> VAR_3) - VAR_39 + 1;
  VAR_40->index++;
 }



 else {

  VAR_26 -= VAR_30;


  FUNC_13(VAR_19, VAR_26, VAR_11->key, VAR_11->data, &VAR_41);
 }

      out:
 *VAR_12 = VAR_18;
 *VAR_14 = *VAR_25;

 return VAR_15;
}
