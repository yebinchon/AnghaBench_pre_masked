
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flag; void* nextindex; void* maxentry; scalar_t__ prev; scalar_t__ next; int self; } ;
struct metapage {TYPE_1__ header; int i_sb; int * xad; scalar_t__ data; } ;
typedef struct metapage xtpage_t ;
typedef int xad_t ;
typedef int tid_t ;
struct xtsplit {int index; struct metapage* mp; int addr; int len; int off; int flag; struct pxdlist* pxdlist; } ;
struct TYPE_7__ {size_t offset; size_t length; } ;
struct xtlock {TYPE_2__ lwm; } ;
struct tlock {int lock; } ;
struct pxdlist {size_t npxd; int * pxd; } ;
struct inode {TYPE_1__ header; int i_sb; int * xad; scalar_t__ data; } ;
typedef int s64 ;
typedef int pxd_t ;
struct TYPE_10__ {struct metapage i_xtroot; } ;
struct TYPE_9__ {int nbperpage; } ;
struct TYPE_8__ {int split; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct metapage*,struct metapage*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (struct metapage*) ;
 TYPE_4__* FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (size_t) ;
 struct metapage* FUNC_7 (struct metapage*,int ,int,int) ;
 int FUNC_8 (char*,struct metapage*,struct metapage*) ;
 size_t FUNC_9 (void*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (struct metapage*) ;
 int FUNC_13 (int ,struct metapage*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct tlock* FUNC_14 (int ,struct metapage*,struct metapage*,int) ;
 scalar_t__ FUNC_15 (struct metapage*,int ) ;
 TYPE_3__ VAR_12 ;

__attribute__((used)) static int
FUNC_16(tid_t VAR_13,
     struct inode *VAR_14, struct xtsplit * VAR_15, struct metapage ** VAR_16)
{
 xtpage_t *VAR_17;
 struct metapage *VAR_18;
 xtpage_t *VAR_19;
 s64 VAR_20;
 int VAR_21, VAR_22;
 xad_t *VAR_23;
 pxd_t *VAR_24;
 struct pxdlist *VAR_25;
 struct tlock *VAR_26;
 struct xtlock *VAR_27;

 VAR_17 = &FUNC_2(VAR_14)->i_xtroot;

 FUNC_1(VAR_12.split);




 VAR_25 = VAR_15->pxdlist;
 VAR_24 = &VAR_25->pxd[VAR_25->npxd];
 VAR_25->npxd++;
 VAR_20 = FUNC_5(VAR_24);
 VAR_18 = FUNC_7(VAR_14, VAR_20, VAR_6, 1);
 if (VAR_18 == ((void*)0))
  return -VAR_4;


 if (FUNC_15(VAR_14, FUNC_10(VAR_24))) {
  FUNC_12(VAR_18);
  return -VAR_3;
 }

 FUNC_8("xtSplitRoot: ip:0x%p rmp:0x%p", VAR_14, VAR_18);






 FUNC_0(VAR_18, VAR_14);

 VAR_19 = (xtpage_t *) VAR_18->data;
 VAR_19->header.flag =
     (VAR_17->header.flag & VAR_1) ? VAR_1 : VAR_0;
 VAR_19->header.self = *VAR_24;
 VAR_19->header.nextindex = FUNC_6(VAR_8);
 VAR_19->header.maxentry = FUNC_6(VAR_6 >> VAR_5);


 VAR_19->header.next = 0;
 VAR_19->header.prev = 0;




 VAR_22 = FUNC_9(VAR_17->header.maxentry);
 FUNC_11(&VAR_19->xad[VAR_8], &VAR_17->xad[VAR_8],
  (VAR_22 - VAR_8) << VAR_5);





 VAR_21 = VAR_15->index;

 if (VAR_21 != VAR_22)
  FUNC_11(&VAR_19->xad[VAR_21 + 1], &VAR_19->xad[VAR_21],
   (VAR_22 - VAR_21) * sizeof(xad_t));

 VAR_23 = &VAR_19->xad[VAR_21];
 FUNC_4(VAR_23, VAR_15->flag, VAR_15->off, VAR_15->len, VAR_15->addr);


 VAR_19->header.nextindex = FUNC_6(VAR_22 + 1);

 if (!FUNC_13(VAR_2, VAR_14)) {
  VAR_26 = FUNC_14(VAR_13, VAR_14, VAR_18, VAR_11 | VAR_10);
  VAR_27 = (struct xtlock *) & VAR_26->lock;
  VAR_27->lwm.offset = VAR_8;
  VAR_27->lwm.length = FUNC_9(VAR_19->header.nextindex) -
      VAR_8;
 }
 FUNC_0(VAR_15->mp, VAR_14);

 VAR_23 = &VAR_17->xad[VAR_8];
 FUNC_4(VAR_23, VAR_7, 0, FUNC_3(VAR_14->i_sb)->nbperpage, VAR_20);


 VAR_17->header.flag &= ~VAR_1;
 VAR_17->header.flag |= VAR_0;

 VAR_17->header.nextindex = FUNC_6(VAR_8 + 1);

 if (!FUNC_13(VAR_2, VAR_14)) {
  VAR_26 = FUNC_14(VAR_13, VAR_14, VAR_15->mp, VAR_11 | VAR_9);
  VAR_27 = (struct xtlock *) & VAR_26->lock;
  VAR_27->lwm.offset = VAR_8;
  VAR_27->lwm.length = 1;
 }

 *VAR_16 = VAR_18;

 FUNC_8("xtSplitRoot: sp:0x%p rp:0x%p", VAR_17, VAR_19);
 return 0;
}
