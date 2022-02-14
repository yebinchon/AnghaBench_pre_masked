
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tid_t ;
struct tlock {int lock; } ;
struct pxd_lock {int index; int pxd; void* flag; } ;
struct metapage {int dummy; } ;
struct lv {int length; scalar_t__ offset; } ;
struct inode {int i_size; } ;
struct dt_lock {size_t index; size_t maxcnt; struct lv* lv; } ;
struct btstack {int dummy; } ;
struct btframe {int index; int bn; } ;
struct TYPE_8__ {int nextindex; int flag; scalar_t__ prev; scalar_t__ stblindex; int self; } ;
struct TYPE_9__ {TYPE_1__ header; } ;
typedef TYPE_2__ dtpage_t ;


 scalar_t__ FUNC_0 (struct metapage*) ;
 int FUNC_1 (struct metapage*,struct inode*) ;
 struct btframe* FUNC_2 (struct btstack*) ;
 int FUNC_3 (struct metapage*) ;
 int VAR_0 ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ,struct metapage*,scalar_t__,TYPE_2__*,int) ;
 int FUNC_6 (struct metapage*) ;
 int VAR_1 ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (struct metapage*) ;
 int FUNC_9 (TYPE_2__*,int,struct dt_lock**) ;
 int FUNC_10 (int ,struct inode*,int ) ;
 int FUNC_11 (int ,struct inode*,TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int ,struct dt_lock**) ;
 int FUNC_13 (int *) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_14 (struct dt_lock*) ;
 struct tlock* FUNC_15 (int ,struct inode*,struct metapage*,int) ;
 struct tlock* FUNC_16 (int ,struct inode*,int) ;
 int FUNC_17 (struct inode*,int) ;

__attribute__((used)) static int FUNC_18(tid_t VAR_7, struct inode *VAR_8,
    struct metapage * VAR_9, dtpage_t * VAR_10, struct btstack * VAR_11)
{
 int VAR_12 = 0;
 struct metapage *VAR_13;
 dtpage_t *VAR_14;
 int VAR_15, VAR_16;
 int VAR_17;
 struct btframe *VAR_18;
 struct dt_lock *VAR_19;
 struct tlock *VAR_20;
 struct lv *VAR_21;
 struct pxd_lock *VAR_22;
 int VAR_23;




 if (FUNC_0(VAR_9)) {





  FUNC_10(VAR_7, VAR_8, FUNC_7(VAR_8));

  FUNC_6(VAR_9);

  return 0;
 }
 VAR_20 = FUNC_16(VAR_7, VAR_8, VAR_4 | VAR_6);
 VAR_22 = (struct pxd_lock *) & VAR_20->lock;
 VAR_22->flag = VAR_3;
 VAR_22->pxd = VAR_10->header.self;
 VAR_22->index = 1;


 if ((VAR_12 = FUNC_11(VAR_7, VAR_8, VAR_10))) {
  FUNC_3(VAR_9);
  return VAR_12;
 }

 VAR_17 = FUNC_13(&VAR_10->header.self);


 FUNC_17(VAR_8, VAR_17);


 FUNC_8(VAR_9);
 while ((VAR_18 = FUNC_2(VAR_11)) != ((void*)0)) {

  FUNC_5(VAR_8, VAR_18->bn, VAR_13, VAR_2, VAR_14, VAR_12);
  if (VAR_12)
   return VAR_12;




  VAR_15 = VAR_18->index;




  VAR_16 = VAR_14->header.nextindex;






  if (VAR_16 == 1) {



   if (VAR_14->header.flag & VAR_0) {





    FUNC_10(VAR_7, VAR_8, FUNC_7(VAR_8));

    FUNC_6(VAR_13);

    return 0;
   }



   else {





    VAR_20 =
        FUNC_16(VAR_7, VAR_8,
           VAR_4 | VAR_6);
    VAR_22 = (struct pxd_lock *) & VAR_20->lock;
    VAR_22->flag = VAR_3;
    VAR_22->pxd = VAR_14->header.self;
    VAR_22->index = 1;


    if ((VAR_12 = FUNC_11(VAR_7, VAR_8, VAR_14))) {
     FUNC_6(VAR_13);
     return VAR_12;
    }

    VAR_17 = FUNC_13(&VAR_14->header.self);


    FUNC_17(VAR_8, VAR_17);


    FUNC_8(VAR_13);


    continue;
   }
  }






  FUNC_1(VAR_13, VAR_8);





  VAR_20 = FUNC_15(VAR_7, VAR_8, VAR_13, VAR_4 | VAR_5);
  VAR_19 = (struct dt_lock *) & VAR_20->lock;


  if (VAR_19->index >= VAR_19->maxcnt)
   VAR_19 = (struct dt_lock *) FUNC_14(VAR_19);
  VAR_21 = & VAR_19->lv[VAR_19->index];
  VAR_21->offset = 0;
  VAR_21->length = 1;
  VAR_19->index++;


  if (!(VAR_14->header.flag & VAR_0)) {
   if (VAR_19->index < VAR_19->maxcnt)
    VAR_21++;
   else {
    VAR_19 = (struct dt_lock *) FUNC_14(VAR_19);
    VAR_21 = & VAR_19->lv[0];
   }
   VAR_23 = VAR_15 >> VAR_1;
   VAR_21->offset = VAR_14->header.stblindex + VAR_23;
   VAR_21->length =
       ((VAR_14->header.nextindex - 1) >> VAR_1) -
       VAR_23 + 1;
   VAR_19->index++;
  }


  FUNC_9(VAR_14, VAR_15, &VAR_19);


  if (VAR_15 == 0 &&
      ((VAR_14->header.flag & VAR_0) || VAR_14->header.prev == 0))
   FUNC_12(VAR_14, 0, &VAR_19);


  FUNC_6(VAR_13);


  break;
 }

 if (!FUNC_4(VAR_8))
  VAR_8->i_size -= VAR_2;

 return 0;
}
