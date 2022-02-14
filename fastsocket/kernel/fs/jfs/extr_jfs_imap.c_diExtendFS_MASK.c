
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct metapage {scalar_t__ data; } ;
struct inomap {int im_nextiag; int im_numfree; int im_numinos; TYPE_1__* im_agctl; } ;
struct inode {int i_sb; } ;
struct iag {scalar_t__ iagnum; scalar_t__ nfreeexts; scalar_t__ nfreeinos; scalar_t__ inofreeback; scalar_t__ extfreeback; scalar_t__ extfreefwd; scalar_t__ inofreefwd; int agstart; } ;
struct bmap {int db_agl2size; } ;
typedef int s64 ;
struct TYPE_6__ {struct inomap* i_imap; } ;
struct TYPE_5__ {struct bmap* bmap; } ;
struct TYPE_4__ {int inofree; int extfree; scalar_t__ numfree; scalar_t__ numinos; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct inomap*,int,struct metapage**) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,int,int,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct metapage*) ;
 int FUNC_10 (struct metapage*) ;

int FUNC_11(struct inode *VAR_4, struct inode *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 struct inomap *VAR_8 = FUNC_0(VAR_4)->i_imap;
 struct iag *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 struct bmap *VAR_11 = FUNC_1(VAR_5->i_sb)->bmap;
 struct metapage *VAR_12, *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18 = 0, VAR_19 = 0;
 s64 VAR_20;

 FUNC_6("diExtendFS: nextiag:%d numinos:%d numfree:%d",
     VAR_8->im_nextiag, FUNC_2(&VAR_8->im_numinos),
     FUNC_2(&VAR_8->im_numfree));
 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  VAR_8->im_agctl[VAR_14].inofree = -1;
  VAR_8->im_agctl[VAR_14].extfree = -1;
  VAR_8->im_agctl[VAR_14].numinos = 0;
  VAR_8->im_agctl[VAR_14].numfree = 0;
 }






 for (VAR_14 = 0; VAR_14 < VAR_8->im_nextiag; VAR_14++) {
  if ((VAR_6 = FUNC_4(VAR_8, VAR_14, &VAR_12))) {
   VAR_7 = VAR_6;
   continue;
  }
  VAR_9 = (struct iag *) VAR_12->data;
  if (FUNC_7(VAR_9->iagnum) != VAR_14) {
   FUNC_9(VAR_12);
   FUNC_5(VAR_4->i_sb,
      "diExtendFs: unexpected value of iagnum");
   return -VAR_0;
  }


  if (VAR_9->nfreeexts == FUNC_3(VAR_1)) {
   FUNC_9(VAR_12);
   continue;
  }


  VAR_20 = FUNC_8(VAR_9->agstart);

  VAR_15 = VAR_20 >> VAR_11->db_agl2size;


  VAR_17 = (VAR_1 - FUNC_7(VAR_9->nfreeexts))
      << VAR_2;
  if (VAR_17 > 0) {

   VAR_8->im_agctl[VAR_15].numinos += VAR_17;
   VAR_18 += VAR_17;
  }


  if ((int) FUNC_7(VAR_9->nfreeinos) > 0) {
   if ((VAR_16 = VAR_8->im_agctl[VAR_15].inofree) == -1) {
    VAR_9->inofreefwd = FUNC_3(-1);
    VAR_9->inofreeback = FUNC_3(-1);
   } else {
    if ((VAR_6 = FUNC_4(VAR_8, VAR_16, &VAR_13))) {
     VAR_7 = VAR_6;
     goto nextiag;
    }
    VAR_10 = (struct iag *) VAR_13->data;
    VAR_10->inofreeback = VAR_9->iagnum;
    VAR_9->inofreefwd = FUNC_3(VAR_16);
    VAR_9->inofreeback = FUNC_3(-1);
    FUNC_10(VAR_13);
   }

   VAR_8->im_agctl[VAR_15].inofree =
       FUNC_7(VAR_9->iagnum);


   VAR_8->im_agctl[VAR_15].numfree +=
       FUNC_7(VAR_9->nfreeinos);
   VAR_19 += FUNC_7(VAR_9->nfreeinos);
  }


  if (FUNC_7(VAR_9->nfreeexts) > 0) {
   if ((VAR_16 = VAR_8->im_agctl[VAR_15].extfree) == -1) {
    VAR_9->extfreefwd = FUNC_3(-1);
    VAR_9->extfreeback = FUNC_3(-1);
   } else {
    if ((VAR_6 = FUNC_4(VAR_8, VAR_16, &VAR_13))) {
     VAR_7 = VAR_6;
     goto nextiag;
    }
    VAR_10 = (struct iag *) VAR_13->data;
    VAR_10->extfreeback = VAR_9->iagnum;
    VAR_9->extfreefwd = FUNC_3(VAR_16);
    VAR_9->extfreeback = FUNC_3(-1);
    FUNC_10(VAR_13);
   }

   VAR_8->im_agctl[VAR_15].extfree =
       FUNC_7(VAR_9->iagnum);
  }

       nextiag:
  FUNC_10(VAR_12);
 }

 if (VAR_18 != FUNC_2(&VAR_8->im_numinos) ||
     VAR_19 != FUNC_2(&VAR_8->im_numfree)) {
  FUNC_5(VAR_4->i_sb,
     "diExtendFs: numinos or numfree incorrect");
  return -VAR_0;
 }

 return VAR_7;
}
