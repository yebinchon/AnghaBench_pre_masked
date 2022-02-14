
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nextindex; } ;
struct TYPE_10__ {TYPE_1__ header; TYPE_4__* xad; } ;
typedef TYPE_3__ xtpage_t ;
struct TYPE_11__ {int flag; } ;
typedef TYPE_4__ xad_t ;
typedef int uint ;
typedef int u32 ;
typedef int tid_t ;
struct tlock {int type; int lock; struct metapage* mp; } ;
struct metapage {scalar_t__ data; } ;
struct lv {size_t offset; int length; } ;
struct linelock {int index; struct lv* lv; } ;
struct jfs_sb_info {unsigned long l2nbperpage; int nbperpage; int l2niperblk; } ;
struct jfs_inode_info {TYPE_4__ i_dirtable; TYPE_4__* i_inline_ea; TYPE_4__* i_inline; int i_dtroot; TYPE_3__ i_xtroot; scalar_t__ blid; scalar_t__ xtlid; int ixpxd; TYPE_2__* i_imap; struct inode* ipimap; } ;
struct inode {int i_ino; int i_size; int i_mode; int i_sb; } ;
struct dinode {TYPE_4__ di_dirtable; TYPE_4__ di_inlineea; TYPE_4__ di_fastsymlink; int di_dtroot; TYPE_3__ di_xtroot; } ;
typedef unsigned long s64 ;
typedef int s32 ;
typedef scalar_t__ lid_t ;
struct TYPE_12__ {TYPE_4__* slot; } ;
typedef TYPE_5__ dtpage_t ;
struct TYPE_9__ {scalar_t__ im_nbperiext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (int *,int,unsigned long) ;
 int VAR_5 ;
 int VAR_6 ;
 struct jfs_inode_info* FUNC_1 (struct inode*) ;
 struct jfs_sb_info* FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,struct inode*) ;
 int FUNC_8 (struct dinode*,struct inode*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int *) ;
 struct tlock* FUNC_13 (scalar_t__) ;
 int FUNC_14 (TYPE_4__*,TYPE_4__*,int) ;
 struct metapage* FUNC_15 (struct inode*,unsigned long,int ,int) ;
 scalar_t__ FUNC_16 (int ,struct inode*) ;
 scalar_t__ FUNC_17 (int ,struct inode*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct tlock* FUNC_18 (int ,struct inode*,struct metapage*,int) ;
 int FUNC_19 (struct metapage*) ;

int FUNC_20(tid_t VAR_20, struct inode *VAR_21)
{
 struct jfs_sb_info *VAR_22 = FUNC_2(VAR_21->i_sb);
 struct jfs_inode_info *VAR_23 = FUNC_1(VAR_21);
 int VAR_24 = 0;
 s32 VAR_25;
 struct dinode *VAR_26;
 s64 VAR_27;
 int VAR_28;
 int VAR_29;
 struct metapage *VAR_30;
 unsigned long VAR_31;
 int VAR_32;
 int VAR_33;
 struct inode *VAR_34;
 uint VAR_35;
 lid_t VAR_36;
 struct tlock *VAR_37, *VAR_38;
 struct linelock *VAR_39, *VAR_40;
 struct lv *VAR_41;
 int VAR_42;

 VAR_34 = VAR_23->ipimap;

 VAR_25 = VAR_21->i_ino & (VAR_5 - 1);

 if (!FUNC_5(&(VAR_23->ixpxd)) ||
     (FUNC_12(&(VAR_23->ixpxd)) !=
      FUNC_1(VAR_34)->i_imap->im_nbperiext)) {
  FUNC_10(VAR_21->i_sb, "diWrite: ixpxd invalid");
  return -VAR_2;
 }





 VAR_27 = FUNC_0(&(VAR_23->ixpxd), VAR_25, VAR_22->l2nbperpage);

 VAR_32 = (VAR_25 & (VAR_6 - 1));
 VAR_31 = VAR_27 >> VAR_22->l2nbperpage;

 if ((VAR_28 = ((u32) VAR_27 & (VAR_22->nbperpage - 1)))) {



  VAR_29 =
      (VAR_22->nbperpage - VAR_28) << VAR_22->l2niperblk;

  if (VAR_32 < VAR_29)
   VAR_32 += VAR_28 << VAR_22->l2niperblk;
  else {
   VAR_31 += 1;
   VAR_32 -= VAR_29;
  }
 }

      retry:
 VAR_30 = FUNC_15(VAR_34, VAR_31 << VAR_22->l2nbperpage, VAR_11, 1);
 if (!VAR_30)
  return -VAR_2;


 VAR_26 = (struct dinode *) VAR_30->data;
 VAR_26 += VAR_32;

 VAR_33 = (VAR_25 & (VAR_6 - 1)) << VAR_7;





 if ((VAR_37 =
      FUNC_18(VAR_20, VAR_34, VAR_30, VAR_18 | VAR_17)) == ((void*)0))
  goto retry;
 VAR_39 = (struct linelock *) & VAR_37->lock;
 if (FUNC_3(VAR_21->i_mode) && (VAR_36 = VAR_23->xtlid)) {




  xtpage_t *VAR_43, *VAR_44;
  xad_t *VAR_45;

  VAR_23->xtlid = 0;
  VAR_38 = FUNC_13(VAR_36);
  FUNC_6(VAR_38->type & VAR_19);
  VAR_38->type |= VAR_15;
  VAR_38->mp = VAR_30;
  VAR_40 = (struct linelock *) & VAR_38->lock;




  VAR_43 = &VAR_23->i_xtroot;
  VAR_44 = (xtpage_t *) &VAR_26->di_dirtable;
  VAR_41 = VAR_40->lv;
  for (VAR_42 = 0; VAR_42 < VAR_40->index; VAR_42++, VAR_41++) {
   FUNC_14(&VAR_44->xad[VAR_41->offset], &VAR_43->xad[VAR_41->offset],
          VAR_41->length << VAR_10);
  }


  VAR_45 = &VAR_44->xad[VAR_14];
  for (VAR_42 = VAR_14;
       VAR_42 < FUNC_11(VAR_44->header.nextindex); VAR_42++, VAR_45++)
   if (VAR_45->flag & (VAR_13 | VAR_12))
    VAR_45->flag &= ~(VAR_13 | VAR_12);
 }

 if ((VAR_36 = VAR_23->blid) == 0)
  goto inlineData;
 VAR_23->blid = 0;

 VAR_38 = FUNC_13(VAR_36);
 VAR_35 = VAR_38->type;
 VAR_38->type |= VAR_15;
 VAR_38->mp = VAR_30;
 VAR_40 = (struct linelock *) & VAR_38->lock;




 if (VAR_35 & VAR_19) {
  xtpage_t *VAR_46, *VAR_47;
  xad_t *VAR_48;




  VAR_46 = &VAR_23->i_xtroot;
  VAR_47 = &VAR_26->di_xtroot;
  VAR_41 = VAR_40->lv;
  for (VAR_42 = 0; VAR_42 < VAR_40->index; VAR_42++, VAR_41++) {
   FUNC_14(&VAR_47->xad[VAR_41->offset], &VAR_46->xad[VAR_41->offset],
          VAR_41->length << VAR_10);
  }


  VAR_48 = &VAR_47->xad[VAR_14];
  for (VAR_42 = VAR_14;
       VAR_42 < FUNC_11(VAR_47->header.nextindex); VAR_42++, VAR_48++)
   if (VAR_48->flag & (VAR_13 | VAR_12))
    VAR_48->flag &= ~(VAR_13 | VAR_12);
 }



 else if (VAR_35 & VAR_16) {
  dtpage_t *VAR_49, *VAR_50;




  VAR_49 = (dtpage_t *) &VAR_23->i_dtroot;
  VAR_50 = (dtpage_t *) & VAR_26->di_dtroot;
  VAR_41 = VAR_40->lv;
  for (VAR_42 = 0; VAR_42 < VAR_40->index; VAR_42++, VAR_41++) {
   FUNC_14(&VAR_50->slot[VAR_41->offset], &VAR_49->slot[VAR_41->offset],
          VAR_41->length << VAR_8);
  }
 } else {
  FUNC_9("diWrite: UFO tlock");
 }

      inlineData:



 if (FUNC_4(VAR_21->i_mode) && VAR_21->i_size < VAR_3) {
  VAR_41 = & VAR_39->lv[VAR_39->index];
  VAR_41->offset = (VAR_33 + 2 * 128) >> VAR_9;
  VAR_41->length = 2;
  FUNC_14(&VAR_26->di_fastsymlink, VAR_23->i_inline, VAR_3);
  VAR_39->index++;
 }




 if (FUNC_17(VAR_1, VAR_21)) {
  VAR_41 = & VAR_39->lv[VAR_39->index];
  VAR_41->offset = (VAR_33 + 3 * 128) >> VAR_9;
  VAR_41->length = 1;
  FUNC_14(&VAR_26->di_inlineea, VAR_23->i_inline_ea, VAR_4);
  VAR_39->index++;

  FUNC_7(VAR_1, VAR_21);
 }




 VAR_41 = & VAR_39->lv[VAR_39->index];
 VAR_41->offset = VAR_33 >> VAR_9;
 FUNC_8(VAR_26, VAR_21);
 if (FUNC_16(VAR_0, VAR_21)) {
  VAR_41->length = 2;
  FUNC_14(&VAR_26->di_dirtable, &VAR_23->i_dirtable, 96);
 } else
  VAR_41->length = 1;
 VAR_39->index++;




 FUNC_19(VAR_30);

 return (VAR_24);
}
