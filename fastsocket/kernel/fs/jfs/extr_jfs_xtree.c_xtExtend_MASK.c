
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int flag; int nextindex; int maxentry; } ;
struct TYPE_14__ {TYPE_1__ header; TYPE_4__* xad; } ;
typedef TYPE_3__ xtpage_t ;
struct TYPE_15__ {int flag; } ;
typedef TYPE_4__ xad_t ;
typedef int ulong ;
typedef int tid_t ;
struct xtsplit {int index; int flag; int len; int * pxdlist; scalar_t__ addr; scalar_t__ off; struct metapage* mp; } ;
struct TYPE_13__ {int offset; int length; } ;
struct xtlock {TYPE_2__ lwm; } ;
struct tlock {int lock; } ;
struct metapage {int dummy; } ;
struct inode {int i_sb; } ;
struct btstack {int top; } ;
typedef scalar_t__ s64 ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct metapage*,struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_3 (struct inode*,scalar_t__,struct metapage*,int ,TYPE_3__*,int) ;
 int FUNC_4 (struct inode*,int ,scalar_t__,struct metapage*,TYPE_3__*,int) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_4__*,int,scalar_t__,int,scalar_t__) ;
 int FUNC_6 (struct metapage*) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*,int ,scalar_t__) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (int,int) ;
 scalar_t__ FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (int ,struct inode*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct tlock* FUNC_17 (int ,struct inode*,struct metapage*,int) ;
 int FUNC_18 (struct inode*,scalar_t__,int *,int*,struct btstack*,int ) ;
 int FUNC_19 (int ,struct inode*,struct xtsplit*,struct btstack*) ;

int FUNC_20(tid_t VAR_11,
      struct inode *VAR_12, s64 VAR_13,
      s32 VAR_14,
      int VAR_15)
{
 int VAR_16 = 0;
 int VAR_17;
 struct metapage *VAR_18;
 xtpage_t *VAR_19;
 s64 VAR_20;
 int VAR_21, VAR_22, VAR_23;
 struct btstack VAR_24;
 struct xtsplit VAR_25;
 xad_t *VAR_26;
 s64 VAR_27;
 struct tlock *VAR_28;
 struct xtlock *VAR_29 = ((void*)0);

 FUNC_10("xtExtend: nxoff:0x%lx nxlen:0x%x", (ulong) VAR_13, VAR_14);


 if ((VAR_16 = FUNC_18(VAR_12, VAR_13 - 1, ((void*)0), &VAR_17, &VAR_24, VAR_8)))
  return VAR_16;


 FUNC_4(VAR_12, VAR_24.top, VAR_20, VAR_18, VAR_19, VAR_21);

 if (VAR_17 != 0) {
  FUNC_6(VAR_18);
  FUNC_9(VAR_12->i_sb, "xtExtend: xtSearch did not find extent");
  return -VAR_2;
 }


 VAR_26 = &VAR_19->xad[VAR_21];
 if ((FUNC_15(VAR_26) + FUNC_13(VAR_26)) != VAR_13) {
  FUNC_6(VAR_18);
  FUNC_9(VAR_12->i_sb, "xtExtend: extension is not contiguous");
  return -VAR_2;
 }






 FUNC_1(VAR_18, VAR_12);
 if (!FUNC_16(VAR_1, VAR_12)) {
  VAR_28 = FUNC_17(VAR_11, VAR_12, VAR_18, VAR_10 | VAR_9);
  VAR_29 = (struct xtlock *) & VAR_28->lock;
 }


 VAR_14 = FUNC_13(VAR_26) + VAR_14;
 if ((VAR_23 = VAR_14 - VAR_3) <= 0)
  goto extendOld;





 VAR_13 = FUNC_15(VAR_26) + VAR_3;
 VAR_27 = FUNC_7(VAR_26) + VAR_3;
 VAR_22 = FUNC_12(VAR_19->header.nextindex);







 if (VAR_22 == FUNC_12(VAR_19->header.maxentry)) {

  VAR_25.mp = VAR_18;
  VAR_25.index = VAR_21 + 1;
  VAR_25.flag = VAR_6;
  VAR_25.off = VAR_13;
  VAR_25.len = VAR_23;
  VAR_25.addr = VAR_27;
  VAR_25.pxdlist = ((void*)0);
  if ((VAR_16 = FUNC_19(VAR_11, VAR_12, &VAR_25, &VAR_24)))
   return VAR_16;


  FUNC_3(VAR_12, VAR_20, VAR_18, VAR_4, VAR_19, VAR_16);
  if (VAR_16)
   return VAR_16;





  if (VAR_19->header.flag & VAR_0) {
   FUNC_0(VAR_19->header.nextindex ==
          FUNC_8(VAR_7 + 1));
   VAR_26 = &VAR_19->xad[VAR_7];
   VAR_20 = FUNC_7(VAR_26);
   FUNC_6(VAR_18);


   FUNC_3(VAR_12, VAR_20, VAR_18, VAR_4, VAR_19, VAR_16);
   if (VAR_16)
    return VAR_16;

   FUNC_1(VAR_18, VAR_12);
   if (!FUNC_16(VAR_1, VAR_12)) {
    VAR_28 = FUNC_17(VAR_11, VAR_12, VAR_18, VAR_10|VAR_9);
    VAR_29 = (struct xtlock *) & VAR_28->lock;
   }
  }
 }



 else {

  VAR_26 = &VAR_19->xad[VAR_21 + 1];
  FUNC_5(VAR_26, VAR_6, VAR_13, VAR_23, VAR_27);


  FUNC_11(&VAR_19->header.nextindex, 1);
 }


 VAR_26 = &VAR_19->xad[VAR_21];
 VAR_14 = VAR_3;




      extendOld:
 FUNC_2(VAR_26, VAR_14);
 if (!(VAR_26->flag & VAR_6))
  VAR_26->flag |= VAR_5;

 if (!FUNC_16(VAR_1, VAR_12)) {
  VAR_29->lwm.offset =
      (VAR_29->lwm.offset) ? FUNC_14(VAR_21,
           (int)VAR_29->lwm.offset) : VAR_21;
  VAR_29->lwm.length =
      FUNC_12(VAR_19->header.nextindex) - VAR_29->lwm.offset;
 }


 FUNC_6(VAR_18);

 return VAR_16;
}
