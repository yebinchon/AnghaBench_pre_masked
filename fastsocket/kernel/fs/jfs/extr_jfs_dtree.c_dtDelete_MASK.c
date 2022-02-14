
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int tid_t ;
struct tlock {int lock; } ;
struct metapage {int dummy; } ;
struct lv {int length; scalar_t__ offset; } ;
struct ldtentry {int index; } ;
struct inode {int dummy; } ;
struct dt_lock {size_t index; size_t maxcnt; struct lv* lv; } ;
struct component_name {int dummy; } ;
struct btstack {int top; } ;
typedef int s64 ;
typedef int ino_t ;
struct TYPE_8__ {int nextindex; int flag; scalar_t__ next; scalar_t__ stblindex; } ;
struct TYPE_9__ {int * slot; TYPE_1__ header; } ;
typedef TYPE_2__ dtpage_t ;


 int FUNC_0 (struct metapage*,struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ,struct metapage*,int ,TYPE_2__*,int) ;
 int FUNC_3 (struct inode*,int ,int ,struct metapage*,TYPE_2__*,int) ;
 size_t* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct metapage*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_2__*,int,struct dt_lock**) ;
 int FUNC_7 (int ,struct inode*,struct metapage*,TYPE_2__*,struct btstack*) ;
 int FUNC_8 (struct inode*,struct component_name*,int *,struct btstack*,int) ;
 int FUNC_9 (int ,struct inode*,int,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,struct inode*,int,int ,int,struct metapage**,int *) ;
 int FUNC_13 (struct metapage*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_14 (struct dt_lock*) ;
 struct tlock* FUNC_15 (int ,struct inode*,struct metapage*,int) ;

int FUNC_16(tid_t VAR_5,
  struct inode *VAR_6, struct component_name * VAR_7, ino_t * VAR_8, int VAR_9)
{
 int VAR_10 = 0;
 s64 VAR_11;
 struct metapage *VAR_12, *VAR_13;
 dtpage_t *VAR_14;
 int VAR_15;
 struct btstack VAR_16;
 struct dt_lock *VAR_17;
 struct tlock *VAR_18;
 struct lv *VAR_19;
 int VAR_20;
 struct ldtentry *VAR_21;
 u8 *VAR_22;
 u32 VAR_23, VAR_24;
 struct metapage *VAR_25;
 dtpage_t *VAR_26;






 if ((VAR_10 = FUNC_8(VAR_6, VAR_7, VAR_8, &VAR_16, VAR_9)))
  return VAR_10;


 FUNC_3(VAR_6, VAR_16.top, VAR_11, VAR_12, VAR_14, VAR_15);






 if (FUNC_1(VAR_6)) {
  VAR_22 = FUNC_4(VAR_14);
  VAR_21 = (struct ldtentry *) & VAR_14->slot[VAR_22[VAR_15]];
  VAR_23 = FUNC_10(VAR_21->index);
  if (VAR_15 == (VAR_14->header.nextindex - 1)) {



   if ((VAR_14->header.flag & VAR_0)
       || (VAR_14->header.next == 0))
    VAR_24 = -1;
   else {

    FUNC_2(VAR_6, FUNC_11(VAR_14->header.next),
        VAR_25, VAR_2, VAR_26, VAR_10);
    if (VAR_10)
     VAR_24 = -1;
    else {
     VAR_22 = FUNC_4(VAR_26);
     VAR_21 =
         (struct ldtentry *) & VAR_26->
         slot[VAR_22[0]];
     VAR_24 =
         FUNC_10(VAR_21->index);
     FUNC_5(VAR_25);
    }
   }
  } else {
   VAR_21 =
       (struct ldtentry *) & VAR_14->slot[VAR_22[VAR_15 + 1]];
   VAR_24 = FUNC_10(VAR_21->index);
  }
  FUNC_9(VAR_5, VAR_6, VAR_23, VAR_24);
 }



 if (VAR_14->header.nextindex == 1) {

  VAR_10 = FUNC_7(VAR_5, VAR_6, VAR_12, VAR_14, &VAR_16);
 }





 else {
  FUNC_0(VAR_12, VAR_6);



  VAR_18 = FUNC_15(VAR_5, VAR_6, VAR_12, VAR_3 | VAR_4);
  VAR_17 = (struct dt_lock *) & VAR_18->lock;
  if (VAR_17->index >= VAR_17->maxcnt)
   VAR_17 = (struct dt_lock *) FUNC_14(VAR_17);
  VAR_19 = & VAR_17->lv[VAR_17->index];
  VAR_19->offset = 0;
  VAR_19->length = 1;
  VAR_17->index++;


  if (!(VAR_14->header.flag & VAR_0)) {
   if (VAR_17->index >= VAR_17->maxcnt)
    VAR_17 = (struct dt_lock *) FUNC_14(VAR_17);
   VAR_19 = & VAR_17->lv[VAR_17->index];
   VAR_20 = VAR_15 >> VAR_1;
   VAR_19->offset = VAR_14->header.stblindex + VAR_20;
   VAR_19->length =
       ((VAR_14->header.nextindex - 1) >> VAR_1) -
       VAR_20 + 1;
   VAR_17->index++;
  }


  FUNC_6(VAR_14, VAR_15, &VAR_17);




  if (FUNC_1(VAR_6) && VAR_15 < VAR_14->header.nextindex) {
   s64 VAR_27;

   VAR_13 = ((void*)0);
   VAR_22 = FUNC_4(VAR_14);
   for (VAR_20 = VAR_15; VAR_20 < VAR_14->header.nextindex; VAR_20++) {
    VAR_21 =
        (struct ldtentry *) & VAR_14->slot[VAR_22[VAR_20]];
    FUNC_12(VAR_5, VAR_6,
          FUNC_10(VAR_21->index),
          VAR_11, VAR_20, &VAR_13, &VAR_27);
   }
   if (VAR_13)
    FUNC_13(VAR_13);
  }

  FUNC_5(VAR_12);
 }

 return VAR_10;
}
