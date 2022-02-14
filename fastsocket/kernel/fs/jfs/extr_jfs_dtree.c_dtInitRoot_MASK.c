
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
typedef int tid_t ;
struct tlock {int lock; } ;
struct tblock {scalar_t__ xflag; } ;
struct metapage {int dummy; } ;
struct lv {int length; scalar_t__ offset; } ;
struct TYPE_3__ {int flag; int freelist; int freecnt; int idotdot; scalar_t__ nextindex; } ;
struct TYPE_4__ {TYPE_1__ header; struct dtslot* slot; } ;
struct jfs_inode_info {int next_index; TYPE_2__ i_dtroot; int bxflag; } ;
struct inode {int i_size; } ;
struct dtslot {int next; } ;
struct dt_lock {scalar_t__ index; struct lv* lv; } ;
typedef TYPE_2__ dtroot_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct jfs_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ,struct inode*) ;
 struct tblock* FUNC_6 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct tlock* FUNC_7 (int ,struct inode*,struct metapage*,int) ;
 int FUNC_8 (int ,struct inode*,int ,int ) ;

void FUNC_9(tid_t VAR_10, struct inode *VAR_11, u32 VAR_12)
{
 struct jfs_inode_info *VAR_13 = FUNC_2(VAR_11);
 dtroot_t *VAR_14;
 int VAR_15;
 struct dtslot *VAR_16;
 struct tlock *VAR_17;
 struct dt_lock *VAR_18;
 struct lv *VAR_19;
 u16 VAR_20;





 if (FUNC_1(VAR_11)) {
  if (!FUNC_4(VAR_11)) {
   struct tblock *VAR_21 = FUNC_6(VAR_10);






   VAR_20 = VAR_21->xflag;
   VAR_21->xflag = 0;
   FUNC_8(VAR_10, VAR_11, 0, VAR_2);
   FUNC_5(VAR_3, VAR_11);

   VAR_21->xflag = VAR_20;
  } else
   VAR_11->i_size = 1;

  VAR_13->next_index = 2;
 } else
  VAR_11->i_size = VAR_6;






 VAR_17 = FUNC_7(VAR_10, VAR_11, (struct metapage *) & VAR_13->bxflag,
        VAR_8 | VAR_9 | VAR_7);
 VAR_18 = (struct dt_lock *) & VAR_17->lock;


 FUNC_0(VAR_18->index == 0);
 VAR_19 = & VAR_18->lv[0];
 VAR_19->offset = 0;
 VAR_19->length = VAR_4;
 VAR_18->index++;

 VAR_14 = &VAR_13->i_dtroot;

 VAR_14->header.flag = VAR_5 | VAR_1 | VAR_0;

 VAR_14->header.nextindex = 0;


 VAR_15 = 1;
 VAR_16 = &VAR_14->slot[VAR_15];


 for (VAR_15++; VAR_15 < VAR_4; VAR_16++, VAR_15++)
  VAR_16->next = VAR_15;
 VAR_16->next = -1;

 VAR_14->header.freelist = 1;
 VAR_14->header.freecnt = 8;


 VAR_14->header.idotdot = FUNC_3(VAR_12);

 return;
}
