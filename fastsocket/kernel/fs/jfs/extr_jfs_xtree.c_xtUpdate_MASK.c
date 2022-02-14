
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {void* nextindex; void* maxentry; int flag; int next; } ;
struct TYPE_19__ {TYPE_1__ header; TYPE_4__* xad; } ;
typedef TYPE_3__ xtpage_t ;
struct TYPE_20__ {int flag; } ;
typedef TYPE_4__ xad_t ;
typedef int tid_t ;
struct xtsplit {int index; int flag; int len; int * pxdlist; scalar_t__ addr; scalar_t__ off; struct metapage* mp; } ;
struct TYPE_18__ {int offset; int length; } ;
struct xtlock {TYPE_2__ lwm; } ;
struct tlock {int lock; } ;
struct metapage {int dummy; } ;
struct inode {int i_sb; } ;
struct btstack {int top; } ;
typedef scalar_t__ s64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct metapage*,struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,scalar_t__) ;
 int VAR_9 ;
 int FUNC_5 (struct inode*,scalar_t__,struct metapage*,int ,TYPE_3__*,int) ;
 int FUNC_6 (struct inode*,int ,scalar_t__,struct metapage*,TYPE_3__*,int) ;
 int VAR_10 ;
 int FUNC_7 (TYPE_4__*,int,scalar_t__,int,scalar_t__) ;
 int FUNC_8 (struct metapage*) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 void* FUNC_10 (int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (void*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_16 (int,int) ;
 scalar_t__ FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (int ,struct inode*) ;
 int VAR_11 ;
 int VAR_12 ;
 struct tlock* FUNC_19 (int ,struct inode*,struct metapage*,int) ;
 int FUNC_20 (struct inode*,scalar_t__,int *,int*,struct btstack*,int ) ;
 int FUNC_21 (int ,struct inode*,struct xtsplit*,struct btstack*) ;

int FUNC_22(tid_t VAR_13, struct inode *VAR_14, xad_t * VAR_15)
{
 int VAR_16 = 0;
 int VAR_17;
 struct metapage *VAR_18;
 xtpage_t *VAR_19;
 s64 VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;
 struct btstack VAR_25;
 struct xtsplit VAR_26;
 xad_t *VAR_27, *VAR_28, *VAR_29;
 int VAR_30;
 s64 VAR_31, VAR_32;
 int VAR_33, VAR_34, VAR_35, VAR_36;
 s64 VAR_37, VAR_38;
 struct tlock *VAR_39;
 struct xtlock *VAR_40 = ((void*)0);
 int VAR_41 = 0;


 VAR_31 = FUNC_17(VAR_15);
 VAR_33 = FUNC_14(VAR_15);
 VAR_37 = FUNC_9(VAR_15);

 if ((VAR_16 = FUNC_20(VAR_14, VAR_31, ((void*)0), &VAR_17, &VAR_25, VAR_10)))
  return VAR_16;


 FUNC_6(VAR_14, VAR_25.top, VAR_20, VAR_18, VAR_19, VAR_21);

 if (VAR_17 != 0) {
  FUNC_8(VAR_18);
  FUNC_11(VAR_14->i_sb, "xtUpdate: Could not find extent");
  return -VAR_2;
 }

 FUNC_1(VAR_18, VAR_14);



 if (!FUNC_18(VAR_1, VAR_14)) {
  VAR_39 = FUNC_19(VAR_13, VAR_14, VAR_18, VAR_12 | VAR_11);
  VAR_40 = (struct xtlock *) & VAR_39->lock;
 }

 VAR_27 = &VAR_19->xad[VAR_21];
 VAR_30 = VAR_27->flag;
 VAR_32 = FUNC_17(VAR_27);
 VAR_34 = FUNC_14(VAR_27);
 VAR_38 = FUNC_9(VAR_27);


 if ((VAR_32 > VAR_31) ||
     (VAR_31 + VAR_33 > VAR_32 + VAR_34)) {
  FUNC_8(VAR_18);
  FUNC_11(VAR_14->i_sb,
     "xtUpdate: nXAD in not completely contained within XAD");
  return -VAR_2;
 }

 VAR_22 = VAR_21;
 VAR_23 = VAR_22 + 1;
 VAR_24 = FUNC_12(VAR_19->header.nextindex);
 if (VAR_32 < VAR_31)
  goto coalesceRight;






 if (VAR_22 == VAR_9)
  goto replace;


 VAR_28 = &VAR_19->xad[VAR_22 - 1];
 VAR_35 = FUNC_14(VAR_28);
 if (!(VAR_28->flag & VAR_8) &&
     (VAR_31 == FUNC_17(VAR_28) + VAR_35) &&
     (VAR_37 == FUNC_9(VAR_28) + VAR_35) &&
     (VAR_35 + VAR_33 < VAR_4)) {

  VAR_21 = VAR_22 - 1;
  FUNC_3(VAR_28, VAR_35 + VAR_33);






  if (!(VAR_28->flag & VAR_7))
   VAR_28->flag |= VAR_6;

  if (VAR_34 > VAR_33) {

   FUNC_4(VAR_27, VAR_32 + VAR_33);
   FUNC_3(VAR_27, VAR_34 - VAR_33);
   FUNC_2(VAR_27, VAR_38 + VAR_33);
   goto out;
  } else {


   if (VAR_22 < VAR_24 - 1)
    FUNC_15(&VAR_19->xad[VAR_22], &VAR_19->xad[VAR_22 + 1],
     (VAR_24 - VAR_22 -
      1) << VAR_3);

   VAR_19->header.nextindex =
       FUNC_10(FUNC_12(VAR_19->header.nextindex) -
     1);

   VAR_22 = VAR_21;
   VAR_23 = VAR_22 + 1;
   VAR_24 = FUNC_12(VAR_19->header.nextindex);
   VAR_32 = VAR_31 = FUNC_17(VAR_28);
   VAR_34 = VAR_33 = VAR_35 + VAR_33;
   VAR_38 = VAR_37 = FUNC_9(VAR_28);
   goto coalesceRight;
  }
 }




      replace:
 if (VAR_33 == VAR_34) {

  *VAR_27 = *VAR_15;
  VAR_27->flag = VAR_30 & ~VAR_8;

  goto coalesceRight;
 } else
  goto updateLeft;




      coalesceRight:

 if (VAR_23 == VAR_24) {
  if (VAR_32 == VAR_31)
   goto out;
  goto updateRight;
 }


 VAR_29 = &VAR_19->xad[VAR_22 + 1];
 VAR_36 = FUNC_14(VAR_29);
 if (!(VAR_29->flag & VAR_8) &&
     (VAR_31 + VAR_33 == FUNC_17(VAR_29)) &&
     (VAR_37 + VAR_33 == FUNC_9(VAR_29)) &&
     (VAR_36 + VAR_33 < VAR_4)) {

  FUNC_4(VAR_29, VAR_31);
  FUNC_3(VAR_29, VAR_36 + VAR_33);
  FUNC_2(VAR_29, VAR_37);






  if (!(VAR_29->flag & VAR_7))
   VAR_29->flag |= VAR_6;

  if (VAR_34 > VAR_33)

   FUNC_3(VAR_27, VAR_34 - VAR_33);
  else {


   FUNC_15(&VAR_19->xad[VAR_22], &VAR_19->xad[VAR_22 + 1],
    (VAR_24 - VAR_22 - 1) << VAR_3);

   VAR_19->header.nextindex =
       FUNC_10(FUNC_12(VAR_19->header.nextindex) -
     1);
  }

  goto out;
 } else if (VAR_32 == VAR_31)
  goto out;

 if (VAR_32 >= VAR_31) {
  FUNC_8(VAR_18);
  FUNC_11(VAR_14->i_sb, "xtUpdate: xoff >= nxoff");
  return -VAR_2;
 }
      updateRight:

 VAR_27 = &VAR_19->xad[VAR_22];
 FUNC_3(VAR_27, VAR_31 - VAR_32);


 if (VAR_24 == FUNC_12(VAR_19->header.maxentry)) {


  VAR_26.mp = VAR_18;
  VAR_26.index = VAR_23;
  VAR_26.flag = VAR_30 & ~VAR_8;
  VAR_26.off = VAR_31;
  VAR_26.len = VAR_33;
  VAR_26.addr = VAR_37;
  VAR_26.pxdlist = ((void*)0);
  if ((VAR_16 = FUNC_21(VAR_13, VAR_14, &VAR_26, &VAR_25)))
   return VAR_16;


  FUNC_5(VAR_14, VAR_20, VAR_18, VAR_5, VAR_19, VAR_16);
  if (VAR_16)
   return VAR_16;





  if (VAR_19->header.flag & VAR_0) {
   FUNC_0(VAR_19->header.nextindex ==
          FUNC_10(VAR_9 + 1));
   VAR_27 = &VAR_19->xad[VAR_9];
   VAR_20 = FUNC_9(VAR_27);
   FUNC_8(VAR_18);


   FUNC_5(VAR_14, VAR_20, VAR_18, VAR_5, VAR_19, VAR_16);
   if (VAR_16)
    return VAR_16;

   FUNC_1(VAR_18, VAR_14);
   if (!FUNC_18(VAR_1, VAR_14)) {
    VAR_39 = FUNC_19(VAR_13, VAR_14, VAR_18, VAR_12|VAR_11);
    VAR_40 = (struct xtlock *) & VAR_39->lock;
   }
  } else {

   if (VAR_23 >
       (FUNC_12(VAR_19->header.maxentry) >> 1)) {
    VAR_23 =
        VAR_23 -
        FUNC_12(VAR_19->header.nextindex) +
        VAR_9;
    VAR_41 = 1;
   }
  }
 } else {

  if (VAR_23 < VAR_24)
   FUNC_15(&VAR_19->xad[VAR_23 + 1], &VAR_19->xad[VAR_23],
    (VAR_24 - VAR_23) << VAR_3);


  VAR_27 = &VAR_19->xad[VAR_23];
  *VAR_27 = *VAR_15;
  VAR_27->flag = VAR_30 & ~VAR_8;


  VAR_19->header.nextindex =
      FUNC_10(FUNC_12(VAR_19->header.nextindex) + 1);
 }
 if (VAR_31 + VAR_33 == VAR_32 + VAR_34)
  goto out;


 if (VAR_41) {

  if (!FUNC_18(VAR_1, VAR_14)) {
   VAR_40->lwm.offset = (VAR_40->lwm.offset) ?
       FUNC_16(VAR_21, (int)VAR_40->lwm.offset) : VAR_21;
   VAR_40->lwm.length =
       FUNC_12(VAR_19->header.nextindex) -
       VAR_40->lwm.offset;
  }

  VAR_20 = FUNC_13(VAR_19->header.next);
  FUNC_8(VAR_18);


  FUNC_5(VAR_14, VAR_20, VAR_18, VAR_5, VAR_19, VAR_16);
  if (VAR_16)
   return VAR_16;

  FUNC_1(VAR_18, VAR_14);
  if (!FUNC_18(VAR_1, VAR_14)) {
   VAR_39 = FUNC_19(VAR_13, VAR_14, VAR_18, VAR_12 | VAR_11);
   VAR_40 = (struct xtlock *) & VAR_39->lock;
  }

  VAR_21 = VAR_22 = VAR_23;
 } else
  VAR_22++;

 VAR_23 = VAR_22 + 1;
 VAR_24 = FUNC_12(VAR_19->header.nextindex);
 VAR_34 = VAR_34 - (VAR_31 - VAR_32);
 VAR_32 = VAR_31;
 VAR_38 = VAR_37;


 if (VAR_24 == FUNC_12(VAR_19->header.maxentry)) {
  FUNC_8(VAR_18);

  if ((VAR_16 = FUNC_20(VAR_14, VAR_31, ((void*)0), &VAR_17, &VAR_25, VAR_10)))
   return VAR_16;


  FUNC_6(VAR_14, VAR_25.top, VAR_20, VAR_18, VAR_19, VAR_21);

  if (VAR_17 != 0) {
   FUNC_8(VAR_18);
   FUNC_11(VAR_14->i_sb, "xtUpdate: xtSearch failed");
   return -VAR_2;
  }

  if (VAR_21 != VAR_22) {
   FUNC_8(VAR_18);
   FUNC_11(VAR_14->i_sb,
      "xtUpdate: unexpected value of index");
   return -VAR_2;
  }
 }
      updateLeft:

 VAR_27 = &VAR_19->xad[VAR_22];
 *VAR_27 = *VAR_15;
 VAR_27->flag = VAR_30 & ~VAR_8;


 VAR_32 = VAR_32 + VAR_33;
 VAR_34 = VAR_34 - VAR_33;
 VAR_38 = VAR_38 + VAR_33;
 if (VAR_24 == FUNC_12(VAR_19->header.maxentry)) {




  VAR_26.mp = VAR_18;
  VAR_26.index = VAR_23;
  VAR_26.flag = VAR_30;
  VAR_26.off = VAR_32;
  VAR_26.len = VAR_34;
  VAR_26.addr = VAR_38;
  VAR_26.pxdlist = ((void*)0);
  if ((VAR_16 = FUNC_21(VAR_13, VAR_14, &VAR_26, &VAR_25)))
   return VAR_16;


  FUNC_5(VAR_14, VAR_20, VAR_18, VAR_5, VAR_19, VAR_16);
  if (VAR_16)
   return VAR_16;






  if (VAR_19->header.flag & VAR_0) {
   FUNC_0(VAR_19->header.nextindex ==
          FUNC_10(VAR_9 + 1));
   VAR_27 = &VAR_19->xad[VAR_9];
   VAR_20 = FUNC_9(VAR_27);
   FUNC_8(VAR_18);


   FUNC_5(VAR_14, VAR_20, VAR_18, VAR_5, VAR_19, VAR_16);
   if (VAR_16)
    return VAR_16;

   FUNC_1(VAR_18, VAR_14);
   if (!FUNC_18(VAR_1, VAR_14)) {
    VAR_39 = FUNC_19(VAR_13, VAR_14, VAR_18, VAR_12|VAR_11);
    VAR_40 = (struct xtlock *) & VAR_39->lock;
   }
  }
 } else {

  if (VAR_23 < VAR_24)
   FUNC_15(&VAR_19->xad[VAR_23 + 1], &VAR_19->xad[VAR_23],
    (VAR_24 - VAR_23) << VAR_3);


  VAR_27 = &VAR_19->xad[VAR_23];
  FUNC_7(VAR_27, VAR_30, VAR_32, VAR_34, VAR_38);


  VAR_19->header.nextindex =
      FUNC_10(FUNC_12(VAR_19->header.nextindex) + 1);
 }

      out:
 if (!FUNC_18(VAR_1, VAR_14)) {
  VAR_40->lwm.offset = (VAR_40->lwm.offset) ?
      FUNC_16(VAR_21, (int)VAR_40->lwm.offset) : VAR_21;
  VAR_40->lwm.length = FUNC_12(VAR_19->header.nextindex) -
      VAR_40->lwm.offset;
 }


 FUNC_8(VAR_18);

 return VAR_16;
}
