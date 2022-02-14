
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nextindex; int maxentry; } ;
struct TYPE_8__ {TYPE_1__ header; int * xad; } ;
typedef TYPE_3__ xtpage_t ;
typedef int xad_t ;
typedef int ulong ;
typedef int tid_t ;
struct xtsplit {int index; int flag; int len; void* addr; void* off; struct metapage* mp; struct pxdlist* pxdlist; } ;
struct TYPE_7__ {int offset; int length; } ;
struct xtlock {TYPE_2__ lwm; } ;
struct tlock {int lock; } ;
struct pxdlist {scalar_t__ maxnpxd; int * pxd; scalar_t__ npxd; } ;
struct metapage {int dummy; } ;
struct inode {int i_sb; } ;
struct btstack {int nsplit; int top; } ;
typedef void* s64 ;
typedef int s32 ;
typedef int pxd_t ;
struct TYPE_9__ {int nbperpage; } ;


 int FUNC_0 (struct metapage*,struct inode*) ;
 int VAR_0 ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (int *,int) ;
 int VAR_1 ;
 int FUNC_4 (struct inode*,int ,void*,struct metapage*,TYPE_3__*,int) ;
 int VAR_2 ;
 int FUNC_5 (int *,int,void*,int,void*) ;
 int FUNC_6 (struct metapage*) ;
 int FUNC_7 (struct inode*,void*,void*) ;
 int FUNC_8 (struct inode*,void*,void*) ;
 int FUNC_9 (char*,int ,int,int,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct tlock* FUNC_13 (int ,struct inode*,struct metapage*,int) ;
 int FUNC_14 (struct inode*,void*,void**,int*,struct btstack*,int ) ;
 int FUNC_15 (int ,struct inode*,struct xtsplit*,struct btstack*) ;

int FUNC_16(tid_t VAR_5,
      struct inode *VAR_6, int VAR_7, s64 VAR_8, s32 VAR_9,
      s32 * VAR_10,
      s64 * VAR_11,
      int VAR_12)
{
 int VAR_13 = 0;
 struct metapage *VAR_14;
 xtpage_t *VAR_15;
 s64 VAR_16, VAR_17;
 int VAR_18, VAR_19;
 struct btstack VAR_20;
 struct xtsplit VAR_21;
 xad_t *VAR_22;
 int VAR_23;
 struct tlock *VAR_24;
 struct xtlock *VAR_25;
 int VAR_26, VAR_27, VAR_28;
 struct pxdlist VAR_29;
 pxd_t *VAR_30;
 s64 VAR_31;

 VAR_17 = *VAR_11;
 VAR_28 = *VAR_10;
 FUNC_9("xtAppend: xoff:0x%lx maxblocks:%d xlen:%d xaddr:0x%lx",
   (ulong) VAR_8, VAR_9, VAR_28, (ulong) VAR_17);
 if ((VAR_13 = FUNC_14(VAR_6, VAR_8, &VAR_31, &VAR_23, &VAR_20, VAR_2)))
  return VAR_13;


 FUNC_4(VAR_6, VAR_20.top, VAR_16, VAR_14, VAR_15, VAR_18);

 if (VAR_23 == 0) {
  VAR_13 = -VAR_0;
  goto out;
 }

 if (VAR_31)
  VAR_28 = FUNC_12(VAR_28, (int)(VAR_31 - VAR_8));




 VAR_7 |= VAR_1;







 VAR_19 = FUNC_11(VAR_15->header.nextindex);
 if (VAR_19 < FUNC_11(VAR_15->header.maxentry))
  goto insertLeaf;




 VAR_26 = VAR_20.nsplit;
 VAR_21.pxdlist = &VAR_29;
 VAR_29.maxnpxd = VAR_29.npxd = 0;
 VAR_30 = &VAR_29.pxd[0];
 VAR_27 = FUNC_1(VAR_6->i_sb)->nbperpage;
 for (; VAR_26 > 0; VAR_26--, VAR_30++, VAR_17 += VAR_27, VAR_9 -= VAR_27) {
  if ((VAR_13 = FUNC_7(VAR_6, VAR_17, (s64) VAR_27)) == 0) {
   FUNC_2(VAR_30, VAR_17);
   FUNC_3(VAR_30, VAR_27);

   VAR_29.maxnpxd++;

   continue;
  }



  goto out;
 }

 VAR_28 = FUNC_12(VAR_28, VAR_9);




 if ((VAR_13 = FUNC_7(VAR_6, VAR_17, (s64) VAR_28)))
  goto out;

 VAR_21.mp = VAR_14;
 VAR_21.index = VAR_18;
 VAR_21.flag = VAR_7;
 VAR_21.off = VAR_8;
 VAR_21.len = VAR_28;
 VAR_21.addr = VAR_17;
 if ((VAR_13 = FUNC_15(VAR_5, VAR_6, &VAR_21, &VAR_20))) {

  FUNC_8(VAR_6, *VAR_11, (s64) * VAR_10);

  return VAR_13;
 }

 *VAR_11 = VAR_17;
 *VAR_10 = VAR_28;
 return 0;




      insertLeaf:



 if ((VAR_13 = FUNC_7(VAR_6, VAR_17, (s64) VAR_28)))
  goto out;

 FUNC_0(VAR_14, VAR_6);





 VAR_24 = FUNC_13(VAR_5, VAR_6, VAR_14, VAR_4 | VAR_3);
 VAR_25 = (struct xtlock *) & VAR_24->lock;


 VAR_22 = &VAR_15->xad[VAR_18];
 FUNC_5(VAR_22, VAR_7, VAR_8, VAR_28, VAR_17);


 FUNC_10(&VAR_15->header.nextindex, 1);

 VAR_25->lwm.offset =
     (VAR_25->lwm.offset) ? FUNC_12(VAR_18,(int) VAR_25->lwm.offset) : VAR_18;
 VAR_25->lwm.length = FUNC_11(VAR_15->header.nextindex) -
     VAR_25->lwm.offset;

 *VAR_11 = VAR_17;
 *VAR_10 = VAR_28;

      out:

 FUNC_6(VAR_14);

 return VAR_13;
}
