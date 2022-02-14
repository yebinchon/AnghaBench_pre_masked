
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct metapage {scalar_t__ data; } ;
struct jfs_sb_info {unsigned long l2nbperpage; int nbperpage; int l2niperblk; struct inode* ipimap; } ;
struct inomap {scalar_t__ im_nbperiext; } ;
struct inode {int i_ino; int i_sb; } ;
struct iag {int agstart; int * inoext; } ;
struct dinode {int di_nlink; int di_number; } ;
typedef unsigned long s64 ;
struct TYPE_2__ {int active_ag; int agno; struct inomap* i_imap; struct inode* ipimap; } ;


 int FUNC_0 (unsigned long,struct jfs_sb_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (int *,int,unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*) ;
 TYPE_1__* FUNC_5 (struct inode*) ;
 struct jfs_sb_info* FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct dinode*,struct inode*) ;
 int FUNC_9 (struct inomap*,int,struct metapage**) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int ) ;
 unsigned long FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int *) ;
 struct metapage* FUNC_16 (struct inode*,unsigned long,int ,int) ;
 int FUNC_17 (struct metapage*) ;

int FUNC_18(struct inode *VAR_7)
{
 struct jfs_sb_info *VAR_8 = FUNC_6(VAR_7->i_sb);
 int VAR_9, VAR_10, VAR_11, VAR_12;
 struct inode *VAR_13;
 struct dinode *VAR_14;
 struct iag *VAR_15;
 struct metapage *VAR_16;
 s64 VAR_17, VAR_18;
 struct inomap *VAR_19;
 int VAR_20;
 int VAR_21;
 unsigned long VAR_22;
 int VAR_23;

 FUNC_12("diRead: ino = %ld", VAR_7->i_ino);

 VAR_13 = VAR_8->ipimap;
 FUNC_5(VAR_7)->ipimap = VAR_13;


 VAR_9 = FUNC_2(VAR_7->i_ino);


 VAR_19 = FUNC_5(VAR_13)->i_imap;
 FUNC_3(VAR_13, VAR_6);
 VAR_12 = FUNC_9(VAR_19, VAR_9, &VAR_16);
 FUNC_4(VAR_13);
 if (VAR_12) {
  FUNC_10("diRead: diIAGRead returned %d", VAR_12);
  return (VAR_12);
 }

 VAR_15 = (struct iag *) VAR_16->data;


 VAR_10 = VAR_7->i_ino & (VAR_2 - 1);
 VAR_11 = VAR_10 >> VAR_4;

 if ((FUNC_15(&VAR_15->inoext[VAR_11]) != VAR_19->im_nbperiext) ||
     (FUNC_7(&VAR_15->inoext[VAR_11]) == 0)) {
  FUNC_17(VAR_16);
  return -VAR_1;
 }




 VAR_17 = FUNC_1(&VAR_15->inoext[VAR_11], VAR_10, VAR_8->l2nbperpage);


 VAR_18 = FUNC_14(VAR_15->agstart);

 FUNC_17(VAR_16);

 VAR_23 = (VAR_10 & (VAR_3 - 1));
 VAR_22 = VAR_17 >> VAR_8->l2nbperpage;

 if ((VAR_20 = ((u32) VAR_17 & (VAR_8->nbperpage - 1)))) {



  VAR_21 =
       (VAR_8->nbperpage - VAR_20) << VAR_8->l2niperblk;

  if (VAR_23 < VAR_21)
   VAR_23 += VAR_20 << VAR_8->l2niperblk;
  else {
   VAR_22 += 1;
   VAR_23 -= VAR_21;
  }
 }


 VAR_16 = FUNC_16(VAR_13, VAR_22 << VAR_8->l2nbperpage, VAR_5, 1);
 if (!VAR_16) {
  FUNC_10("diRead: read_metapage failed");
  return -VAR_0;
 }


 VAR_14 = (struct dinode *) VAR_16->data;
 VAR_14 += VAR_23;

 if (VAR_7->i_ino != FUNC_13(VAR_14->di_number)) {
  FUNC_11(VAR_7->i_sb, "diRead: i_ino != di_number");
  VAR_12 = -VAR_0;
 } else if (FUNC_13(VAR_14->di_nlink) == 0)
  VAR_12 = -VAR_1;
 else

  VAR_12 = FUNC_8(VAR_14, VAR_7);

 FUNC_17(VAR_16);


 FUNC_5(VAR_7)->agno = FUNC_0(VAR_18, VAR_8);
 FUNC_5(VAR_7)->active_ag = -1;

 return (VAR_12);
}
