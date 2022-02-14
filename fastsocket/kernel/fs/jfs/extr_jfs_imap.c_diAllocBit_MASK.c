
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct metapage {scalar_t__ data; } ;
struct inomap {int im_numfree; TYPE_2__* im_agctl; TYPE_1__* im_ipimap; } ;
struct iag {int nfreeinos; int inofreeback; int inofreefwd; int * inosmap; int * wmap; int * inoext; int * pmap; int agstart; } ;
struct TYPE_4__ {int inofree; int numfree; } ;
struct TYPE_3__ {int i_sb; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct inomap*,int,struct metapage**) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct metapage*) ;
 int FUNC_11 (struct metapage*) ;

__attribute__((used)) static int FUNC_12(struct inomap * VAR_7, struct iag * VAR_8, int VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 struct metapage *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 struct iag *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 u32 VAR_19;






 if (VAR_8->nfreeinos == FUNC_4(1)) {
  if ((int) FUNC_8(VAR_8->inofreefwd) >= 0) {
   if ((VAR_14 =
        FUNC_5(VAR_7, FUNC_8(VAR_8->inofreefwd),
           &VAR_15)))
    return (VAR_14);
   VAR_17 = (struct iag *) VAR_15->data;
  }

  if ((int) FUNC_8(VAR_8->inofreeback) >= 0) {
   if ((VAR_14 =
        FUNC_5(VAR_7,
           FUNC_8(VAR_8->inofreeback),
           &VAR_16))) {
    if (VAR_15)
     FUNC_10(VAR_15);
    return (VAR_14);
   }
   VAR_18 = (struct iag *) VAR_16->data;
  }
 }




 VAR_12 = FUNC_0(FUNC_9(VAR_8->agstart), FUNC_1(VAR_7->im_ipimap->i_sb));
 VAR_10 = VAR_9 >> VAR_5;
 VAR_11 = VAR_9 & (VAR_3 - 1);



 VAR_19 = VAR_2 >> VAR_11;



 if (((FUNC_8(VAR_8->pmap[VAR_10]) & VAR_19) != 0) ||
     ((FUNC_8(VAR_8->wmap[VAR_10]) & VAR_19) != 0) ||
     (FUNC_2(&VAR_8->inoext[VAR_10]) == 0)) {
  if (VAR_15)
   FUNC_10(VAR_15);
  if (VAR_16)
   FUNC_10(VAR_16);

  FUNC_6(VAR_7->im_ipimap->i_sb,
     "diAllocBit: iag inconsistent");
  return -VAR_0;
 }



 VAR_8->wmap[VAR_10] |= FUNC_4(VAR_19);





 if (VAR_8->wmap[VAR_10] == FUNC_4(VAR_6)) {
  VAR_13 = VAR_10 >> VAR_4;
  VAR_11 = VAR_10 & (VAR_1 - 1);
  VAR_8->inosmap[VAR_13] |= FUNC_4(VAR_2 >> VAR_11);
 }




 if (VAR_8->nfreeinos == FUNC_4(1)) {
  if (VAR_15) {
   VAR_17->inofreeback = VAR_8->inofreeback;
   FUNC_11(VAR_15);
  }

  if (VAR_16) {
   VAR_18->inofreefwd = VAR_8->inofreefwd;
   FUNC_11(VAR_16);
  } else {
   VAR_7->im_agctl[VAR_12].inofree =
       FUNC_8(VAR_8->inofreefwd);
  }
  VAR_8->inofreefwd = VAR_8->inofreeback = FUNC_4(-1);
 }




 FUNC_7(&VAR_8->nfreeinos, -1);
 VAR_7->im_agctl[VAR_12].numfree -= 1;
 FUNC_3(&VAR_7->im_numfree);

 return (0);
}
