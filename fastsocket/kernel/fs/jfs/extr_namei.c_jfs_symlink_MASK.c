
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int unchar ;
typedef int tid_t ;
struct TYPE_5__ {int ixpxd; } ;
struct tblock {TYPE_1__ u; int ino; int xflag; } ;
struct super_block {int dummy; } ;
struct metapage {int * data; } ;
struct inode {int i_mode; int i_size; scalar_t__ i_nlink; int i_mtime; int i_ctime; int i_ino; struct super_block* i_sb; TYPE_2__* i_mapping; int * i_op; } ;
struct dentry {struct inode* d_inode; } ;
struct component_name {int dummy; } ;
struct btstack {int dummy; } ;
typedef int s64 ;
typedef int ino_t ;
struct TYPE_8__ {int commit_mutex; int mode2; int * i_inline; int ixpxd; } ;
struct TYPE_7__ {int bsize; int l2bsize; int nbperpage; } ;
struct TYPE_6__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_8 ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 TYPE_3__* FUNC_2 (struct super_block*) ;
 int VAR_9 ;
 int FUNC_3 (struct inode*) ;
 int VAR_10 ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (int ,struct inode*,struct component_name*,int *,struct btstack*) ;
 int FUNC_6 (struct inode*,struct component_name*,int *,struct btstack*,int ) ;
 int FUNC_7 (struct metapage*) ;
 int FUNC_8 (struct component_name*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct component_name*,struct dentry*) ;
 struct metapage* FUNC_11 (struct inode*,int,int ,int) ;
 struct inode* FUNC_12 (struct inode*,int) ;
 int FUNC_13 (struct inode*) ;
 int VAR_11 ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (int ,struct inode*,struct inode*) ;
 int VAR_12 ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (int *,char const*,int) ;
 int FUNC_18 (int,int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *) ;
 int VAR_13 ;
 int FUNC_21 (char const*) ;
 struct tblock* FUNC_22 (int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (struct super_block*,int ) ;
 int FUNC_25 (int ,int,struct inode**,int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (struct inode*) ;
 int FUNC_28 (int ,struct inode*) ;
 int FUNC_29 (int ,struct inode*,int ,int ,int,int*,int ) ;
 int FUNC_30 (int ,struct inode*,int ,int ) ;

__attribute__((used)) static int FUNC_31(struct inode *VAR_14, struct dentry *VAR_15,
  const char *VAR_16)
{
 int VAR_17;
 tid_t VAR_18;
 ino_t VAR_19 = 0;
 struct component_name VAR_20;
 int VAR_21;
 struct btstack VAR_22;
 struct inode *VAR_23 = VAR_15->d_inode;
 unchar *VAR_24;
 s64 VAR_25 = 0;
 int VAR_26 = 0, VAR_27;
 s64 VAR_28 = 0, VAR_29;
 struct metapage *VAR_30;
 struct super_block *VAR_31;
 struct tblock *VAR_32;

 struct inode *VAR_33[2];

 FUNC_14("jfs_symlink: dip:0x%p name:%s", VAR_14, VAR_16);

 VAR_21 = FUNC_21(VAR_16) + 1;






 if ((VAR_17 = FUNC_10(&VAR_20, VAR_15)))
  goto out1;





 VAR_23 = FUNC_12(VAR_14, VAR_10 | 0777);
 if (FUNC_0(VAR_23)) {
  VAR_17 = FUNC_3(VAR_23);
  goto out2;
 }

 VAR_18 = FUNC_24(VAR_14->i_sb, 0);

 FUNC_19(&FUNC_1(VAR_14)->commit_mutex, VAR_2);
 FUNC_19(&FUNC_1(VAR_23)->commit_mutex, VAR_1);

 VAR_17 = FUNC_15(VAR_18, VAR_23, VAR_14);
 if (VAR_17)
  goto out3;

 VAR_32 = FUNC_22(VAR_18);
 VAR_32->xflag |= VAR_0;
 VAR_32->ino = VAR_23->i_ino;
 VAR_32->u.ixpxd = FUNC_1(VAR_23)->ixpxd;





 VAR_23->i_mode |= 0777;




 FUNC_28(VAR_18, VAR_23);





 if (VAR_21 <= VAR_6) {
  VAR_23->i_op = &VAR_12;

  VAR_24 = FUNC_1(VAR_23)->i_inline;
  FUNC_17(VAR_24, VAR_16, VAR_21);
  VAR_23->i_size = VAR_21 - 1;





  if (VAR_21 > sizeof (FUNC_1(VAR_23)->i_inline))
   FUNC_1(VAR_23)->mode2 &= ~VAR_7;

  FUNC_14("jfs_symlink: fast symlink added  ssize:%d name:%s ",
    VAR_21, VAR_16);
 }



 else {
  FUNC_14("jfs_symlink: allocate extent ip:0x%p", VAR_23);

  VAR_23->i_op = &VAR_13;
  VAR_23->i_mapping->a_ops = &VAR_11;






  VAR_31 = VAR_23->i_sb;
  VAR_26 = FUNC_2(VAR_31)->bsize - 1;
  VAR_27 = (VAR_21 + VAR_26) & ~VAR_26;
  VAR_29 = 0;
  VAR_25 = VAR_27 >> FUNC_2(VAR_31)->l2bsize;
  if ((VAR_17 = FUNC_29(VAR_18, VAR_23, 0, 0, VAR_25, &VAR_29, 0))) {
   FUNC_23(VAR_18, 0);
   goto out3;
  }
  VAR_28 = VAR_29;
  VAR_23->i_size = VAR_21 - 1;
  while (VAR_21) {

   int VAR_34 = FUNC_18(VAR_21, VAR_9);

   VAR_30 = FUNC_11(VAR_23, VAR_29, VAR_9, 1);

   if (VAR_30 == ((void*)0)) {
    FUNC_30(VAR_18, VAR_23, 0, VAR_3);
    VAR_17 = -VAR_5;
    FUNC_23(VAR_18, 0);
    goto out3;
   }
   FUNC_17(VAR_30->data, VAR_16, VAR_34);
   FUNC_7(VAR_30);
   VAR_21 -= VAR_34;
   VAR_16 += VAR_34;
   VAR_29 += FUNC_2(VAR_31)->nbperpage;
  }
 }




 VAR_17 = FUNC_6(VAR_14, &VAR_20, &VAR_19, &VAR_22, VAR_8);
 if (VAR_17 == 0) {
  VAR_19 = VAR_23->i_ino;
  VAR_17 = FUNC_5(VAR_18, VAR_14, &VAR_20, &VAR_19, &VAR_22);
 }
 if (VAR_17) {
  if (VAR_25)
   FUNC_30(VAR_18, VAR_23, 0, VAR_3);
  FUNC_23(VAR_18, 0);

  goto out3;
 }

 FUNC_16(VAR_23);

 VAR_14->i_ctime = VAR_14->i_mtime = VAR_4;
 FUNC_16(VAR_14);




 VAR_33[0] = VAR_14;
 VAR_33[1] = VAR_23;
 VAR_17 = FUNC_25(VAR_18, 2, &VAR_33[0], 0);

      out3:
 FUNC_26(VAR_18);
 FUNC_20(&FUNC_1(VAR_23)->commit_mutex);
 FUNC_20(&FUNC_1(VAR_14)->commit_mutex);
 if (VAR_17) {
  FUNC_9(VAR_23);
  VAR_23->i_nlink = 0;
  FUNC_27(VAR_23);
  FUNC_13(VAR_23);
 } else {
  FUNC_4(VAR_15, VAR_23);
  FUNC_27(VAR_23);
 }

      out2:
 FUNC_8(&VAR_20);

      out1:
 FUNC_14("jfs_symlink: rc:%d", VAR_17);
 return VAR_17;
}
