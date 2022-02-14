
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct metapage {scalar_t__ data; } ;
struct inomap {TYPE_2__* im_agctl; } ;
struct inode {int i_ino; int i_sb; } ;
struct iag {int * extsmap; int * inosmap; int * wmap; int * inoext; scalar_t__ nfreeinos; scalar_t__ nfreeexts; } ;
typedef int ino_t ;
struct TYPE_8__ {int agno; int fileset; struct inode* ipimap; struct inomap* i_imap; } ;
struct TYPE_7__ {int ipbmap; TYPE_1__* bmap; struct inode* ipimap; } ;
struct TYPE_6__ {int numfree; } ;
struct TYPE_5__ {int * db_active; } ;


 int FUNC_0 (struct inomap*,int) ;
 int FUNC_1 (struct inomap*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*) ;
 TYPE_4__* FUNC_5 (struct inode*) ;
 TYPE_3__* FUNC_6 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct inomap*,int,int,struct inode*) ;
 int FUNC_12 (struct inomap*,int,int,struct inode*) ;
 int FUNC_13 (struct inomap*,struct iag*,int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (struct inomap*,int,struct metapage**) ;
 int FUNC_16 (struct inode*,int,int,int,struct iag*) ;
 int FUNC_17 (struct inomap*,struct iag*,int) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct metapage*) ;
 int FUNC_21 (struct metapage*) ;

int FUNC_22(struct inode *VAR_12, bool VAR_13, struct inode *VAR_14)
{
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;
 u32 VAR_26, VAR_27, VAR_28;
 struct inode *VAR_29;
 struct metapage *VAR_30;
 ino_t VAR_31;
 struct iag *VAR_32;
 struct inomap *VAR_33;




 VAR_29 = FUNC_6(VAR_12->i_sb)->ipimap;
 VAR_33 = FUNC_5(VAR_29)->i_imap;
 FUNC_5(VAR_14)->ipimap = VAR_29;
 FUNC_5(VAR_14)->fileset = VAR_4;




 if (VAR_13) {
  VAR_25 = FUNC_10(FUNC_6(VAR_12->i_sb)->ipbmap);
  FUNC_0(VAR_33, VAR_25);
  goto tryag;
 }
 VAR_25 = FUNC_5(VAR_12)->agno;

 if (FUNC_9(&FUNC_6(VAR_12->i_sb)->bmap->db_active[VAR_25])) {





  VAR_25 = FUNC_10(FUNC_6(VAR_12->i_sb)->ipbmap);
  FUNC_0(VAR_33, VAR_25);
  goto tryag;
 }

 VAR_31 = VAR_12->i_ino + 1;
 VAR_16 = VAR_31 & (VAR_6 - 1);


 if (VAR_16 == 0)
  VAR_31 = VAR_12->i_ino;


 FUNC_0(VAR_33, VAR_25);


 FUNC_3(VAR_29, VAR_10);


 VAR_17 = FUNC_2(VAR_31);
 if ((VAR_15 = FUNC_15(VAR_33, VAR_17, &VAR_30))) {
  FUNC_4(VAR_29);
  FUNC_1(VAR_33, VAR_25);
  return (VAR_15);
 }
 VAR_32 = (struct iag *) VAR_30->data;





 VAR_18 = (VAR_33->im_agctl[VAR_25].numfree < 32 && VAR_32->nfreeexts);







 if (VAR_32->nfreeinos || VAR_18) {


  VAR_19 = VAR_16 >> VAR_8;




  if (FUNC_7(&VAR_32->inoext[VAR_19])) {
   VAR_20 = VAR_16 & (VAR_5 - 1);
   if ((VAR_20 =
        FUNC_14(FUNC_19(VAR_32->wmap[VAR_19]),
     VAR_20))
       < VAR_5) {
    VAR_16 = (VAR_19 << VAR_8) + VAR_20;




    VAR_15 = FUNC_13(VAR_33, VAR_32, VAR_16);
    FUNC_4(VAR_29);
    if (VAR_15) {
     FUNC_8(VAR_15 == -VAR_0);
    } else {



     FUNC_16(VAR_14, VAR_17, VAR_16, VAR_19,
          VAR_32);
     FUNC_20(VAR_30);
    }
    FUNC_21(VAR_30);



    FUNC_1(VAR_33, VAR_25);
    return (VAR_15);
   }

   if (!VAR_18)
    VAR_19 =
        (VAR_19 ==
         VAR_2 - 1) ? 0 : VAR_19 + 1;
  }
  VAR_20 = VAR_19 & (VAR_3 - 1);
  VAR_22 = (VAR_20 == 0) ? VAR_11 : VAR_11 + 1;
  VAR_21 = VAR_19 >> VAR_7;




  VAR_26 = VAR_9 << (VAR_3 - VAR_20);
  VAR_27 = FUNC_19(VAR_32->inosmap[VAR_21]) | VAR_26;
  VAR_28 = FUNC_19(VAR_32->extsmap[VAR_21]) | VAR_26;




  for (VAR_24 = 0; VAR_24 < VAR_22; VAR_24++) {



   if (~VAR_27) {




    VAR_23 = FUNC_14(VAR_27, 0);
    VAR_19 = (VAR_21 << VAR_7) + VAR_23;
    VAR_23 = FUNC_14(FUNC_19(VAR_32->wmap[VAR_19]),
       0);
    if (VAR_23 >= VAR_5) {
     FUNC_4(VAR_29);
     FUNC_21(VAR_30);
     FUNC_1(VAR_33, VAR_25);
     FUNC_18(VAR_14->i_sb,
        "diAlloc: can't find free bit "
        "in wmap");
     return -VAR_0;
    }





    VAR_16 = (VAR_19 << VAR_8) + VAR_23;
    VAR_15 = FUNC_13(VAR_33, VAR_32, VAR_16);
    FUNC_4(VAR_29);
    if (VAR_15)
     FUNC_8(VAR_15 == -VAR_0);
    else {



     FUNC_16(VAR_14, VAR_17, VAR_16, VAR_19,
          VAR_32);
     FUNC_20(VAR_30);
    }
    FUNC_21(VAR_30);



    FUNC_1(VAR_33, VAR_25);
    return (VAR_15);

   }





   if (VAR_18 && ~VAR_28) {



    VAR_23 = FUNC_14(VAR_28, 0);
    VAR_19 = (VAR_21 << VAR_7) + VAR_23;



    if ((VAR_15 = FUNC_17(VAR_33, VAR_32, VAR_19))) {




     if (VAR_15 == -VAR_1)
      break;

     FUNC_8(VAR_15 == -VAR_0);
    } else {



     FUNC_16(VAR_14, VAR_17,
          VAR_19 << VAR_8,
          VAR_19, VAR_32);
     FUNC_20(VAR_30);
    }
    FUNC_21(VAR_30);


    FUNC_4(VAR_29);
    FUNC_1(VAR_33, VAR_25);
    return (VAR_15);
   }



   VAR_21 = (VAR_21 == VAR_11 - 1) ? 0 : VAR_21 + 1;
   VAR_27 = FUNC_19(VAR_32->inosmap[VAR_21]);
   VAR_28 = FUNC_19(VAR_32->extsmap[VAR_21]);
  }
 }

 FUNC_4(VAR_29);


 FUNC_21(VAR_30);

      tryag:



 VAR_15 = FUNC_11(VAR_33, VAR_25, VAR_13, VAR_14);

 FUNC_1(VAR_33, VAR_25);

 if (VAR_15 != -VAR_1)
  return (VAR_15);




 return (FUNC_12(VAR_33, VAR_25, VAR_13, VAR_14));
}
