
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int flag; void* nextindex; void* maxentry; void* prev; void* next; int self; } ;
struct TYPE_10__ {TYPE_2__ header; int * xad; } ;
typedef TYPE_3__ xtpage_t ;
typedef int xad_t ;
typedef int tid_t ;
struct xtsplit {int index; int addr; int len; int off; int flag; struct pxdlist* pxdlist; struct metapage* mp; } ;
struct TYPE_8__ {size_t offset; int length; } ;
struct xtlock {TYPE_1__ lwm; } ;
struct tlock {int lock; } ;
struct pxdlist {size_t npxd; int * pxd; } ;
struct metapage {scalar_t__ data; } ;
struct inode {int dummy; } ;
typedef scalar_t__ s64 ;
typedef int pxd_t ;
struct TYPE_11__ {int split; } ;


 int FUNC_0 (struct metapage*,struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (struct inode*,scalar_t__,struct metapage*,int ,TYPE_3__*,int) ;
 TYPE_3__* FUNC_3 (struct inode*,struct metapage*) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (struct metapage*) ;
 scalar_t__ FUNC_6 (int *) ;
 void* FUNC_7 (size_t) ;
 void* FUNC_8 (scalar_t__) ;
 struct metapage* FUNC_9 (struct inode*,scalar_t__,int ,int) ;
 int FUNC_10 (char*,TYPE_3__*,...) ;
 size_t FUNC_11 (void*) ;
 scalar_t__ FUNC_12 (void*) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *,int *,int) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int ,struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct tlock* FUNC_17 (int ,struct inode*,struct metapage*,int) ;
 scalar_t__ FUNC_18 (struct inode*,scalar_t__) ;
 int FUNC_19 (struct inode*,int) ;
 TYPE_4__ VAR_11 ;

__attribute__((used)) static int
FUNC_20(tid_t VAR_12, struct inode *VAR_13,
     struct xtsplit * VAR_14, struct metapage ** VAR_15, s64 * VAR_16)
{
 int VAR_17 = 0;
 struct metapage *VAR_18;
 xtpage_t *VAR_19;
 struct metapage *VAR_20;
 xtpage_t *VAR_21;
 s64 VAR_22;
 struct metapage *VAR_23;
 xtpage_t *VAR_24;
 s64 VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
 xad_t *VAR_31;
 struct pxdlist *VAR_32;
 pxd_t *VAR_33;
 struct tlock *VAR_34;
 struct xtlock *VAR_35 = ((void*)0), *VAR_36 = ((void*)0);
 int VAR_37 = 0;

 VAR_18 = VAR_14->mp;
 VAR_19 = FUNC_3(VAR_13, VAR_18);

 FUNC_1(VAR_11.split);

 VAR_32 = VAR_14->pxdlist;
 VAR_33 = &VAR_32->pxd[VAR_32->npxd];
 VAR_32->npxd++;
 VAR_22 = FUNC_6(VAR_33);


 if (FUNC_18(VAR_13, FUNC_13(VAR_33))) {
  VAR_17 = -VAR_2;
  goto clean_up;
 }

 VAR_37 += FUNC_13(VAR_33);




 VAR_20 = FUNC_9(VAR_13, VAR_22, VAR_5, 1);
 if (VAR_20 == ((void*)0)) {
  VAR_17 = -VAR_3;
  goto clean_up;
 }

 FUNC_10("xtSplitPage: ip:0x%p smp:0x%p rmp:0x%p", VAR_13, VAR_18, VAR_20);

 FUNC_0(VAR_20, VAR_13);




 VAR_21 = (xtpage_t *) VAR_20->data;
 VAR_21->header.self = *VAR_33;
 VAR_21->header.flag = VAR_19->header.flag & VAR_0;
 VAR_21->header.maxentry = VAR_19->header.maxentry;
 VAR_21->header.nextindex = FUNC_7(VAR_6);

 FUNC_0(VAR_18, VAR_13);

 if (!FUNC_16(VAR_1, VAR_13)) {



  VAR_34 = FUNC_17(VAR_12, VAR_13, VAR_20, VAR_10 | VAR_8);
  VAR_36 = (struct xtlock *) & VAR_34->lock;
  VAR_36->lwm.offset = VAR_6;



  VAR_34 = FUNC_17(VAR_12, VAR_13, VAR_18, VAR_10 | VAR_7);
  VAR_35 = (struct xtlock *) & VAR_34->lock;
 }




 VAR_25 = FUNC_12(VAR_19->header.next);
 VAR_21->header.next = FUNC_8(VAR_25);
 VAR_21->header.prev = FUNC_8(FUNC_6(&VAR_19->header.self));
 VAR_19->header.next = FUNC_8(VAR_22);

 VAR_26 = VAR_14->index;
 if (VAR_25 == 0 && VAR_26 == FUNC_11(VAR_19->header.maxentry)) {






  VAR_31 = &VAR_21->xad[VAR_6];
  FUNC_4(VAR_31, VAR_14->flag, VAR_14->off, VAR_14->len,
       VAR_14->addr);

  VAR_21->header.nextindex = FUNC_7(VAR_6 + 1);

  if (!FUNC_16(VAR_1, VAR_13)) {

   VAR_36->lwm.length = 1;
  }

  *VAR_15 = VAR_20;
  *VAR_16 = VAR_22;

  FUNC_10("xtSplitPage: sp:0x%p rp:0x%p", VAR_19, VAR_21);
  return 0;
 }
 if (VAR_25 != 0) {
  FUNC_2(VAR_13, VAR_25, VAR_23, VAR_5, VAR_24, VAR_17);
  if (VAR_17) {
   FUNC_5(VAR_20);
   goto clean_up;
  }

  FUNC_0(VAR_23, VAR_13);





  if (!FUNC_16(VAR_1, VAR_13))
   VAR_34 = FUNC_17(VAR_12, VAR_13, VAR_23, VAR_10 | VAR_9);

  VAR_24->header.prev = FUNC_8(VAR_22);





  FUNC_5(VAR_23);
 }




 VAR_27 = FUNC_11(VAR_19->header.maxentry);
 VAR_28 = VAR_27 >> 1;
 VAR_29 = VAR_27 - VAR_28;




 if (VAR_26 <= VAR_28) {

  FUNC_14(&VAR_21->xad[VAR_6], &VAR_19->xad[VAR_28],
   VAR_29 << VAR_4);


  if (VAR_26 < VAR_28)
   FUNC_14(&VAR_19->xad[VAR_26 + 1], &VAR_19->xad[VAR_26],
    (VAR_28 - VAR_26) << VAR_4);


  VAR_31 = &VAR_19->xad[VAR_26];
  FUNC_4(VAR_31, VAR_14->flag, VAR_14->off, VAR_14->len,
       VAR_14->addr);


  VAR_19->header.nextindex = FUNC_7(VAR_28 + 1);
  if (!FUNC_16(VAR_1, VAR_13)) {
   VAR_35->lwm.offset = (VAR_35->lwm.offset) ?
       FUNC_15(VAR_26, (int)VAR_35->lwm.offset) : VAR_26;
  }

  VAR_21->header.nextindex =
      FUNC_7(VAR_6 + VAR_29);
 }



 else {

  VAR_30 = VAR_26 - VAR_28;
  FUNC_14(&VAR_21->xad[VAR_6], &VAR_19->xad[VAR_28],
   VAR_30 << VAR_4);


  VAR_30 += VAR_6;
  VAR_31 = &VAR_21->xad[VAR_30];
  FUNC_4(VAR_31, VAR_14->flag, VAR_14->off, VAR_14->len,
       VAR_14->addr);


  if (VAR_26 < VAR_27)
   FUNC_14(&VAR_21->xad[VAR_30 + 1], &VAR_19->xad[VAR_26],
    (VAR_27 - VAR_26) << VAR_4);


  VAR_19->header.nextindex = FUNC_7(VAR_28);
  if (!FUNC_16(VAR_1, VAR_13)) {
   VAR_35->lwm.offset = (VAR_35->lwm.offset) ?
       FUNC_15(VAR_28, (int)VAR_35->lwm.offset) : VAR_28;
  }

  VAR_21->header.nextindex = FUNC_7(VAR_6 +
         VAR_29 + 1);
 }

 if (!FUNC_16(VAR_1, VAR_13)) {
  VAR_35->lwm.length = FUNC_11(VAR_19->header.nextindex) -
      VAR_35->lwm.offset;


  VAR_36->lwm.length = FUNC_11(VAR_21->header.nextindex) -
      VAR_6;
 }

 *VAR_15 = VAR_20;
 *VAR_16 = VAR_22;

 FUNC_10("xtSplitPage: sp:0x%p rp:0x%p", VAR_19, VAR_21);
 return VAR_17;

      clean_up:


 if (VAR_37)
  FUNC_19(VAR_13, VAR_37);

 return (VAR_17);
}
