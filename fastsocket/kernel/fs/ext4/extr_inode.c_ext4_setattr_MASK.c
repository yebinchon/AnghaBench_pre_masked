
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_uid; scalar_t__ i_gid; scalar_t__ i_size; int i_sb; scalar_t__ i_nlink; int i_mode; } ;
struct iattr {unsigned int ia_valid; scalar_t__ ia_uid; scalar_t__ ia_gid; scalar_t__ ia_size; } ;
struct ext4_sb_info {scalar_t__ s_bitmap_maxbytes; } ;
struct dentry {struct inode* d_inode; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ i_disksize; } ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 int VAR_2 ;
 unsigned int const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ext4_sb_info* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,scalar_t__) ;
 int * FUNC_9 (struct inode*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,struct inode*) ;
 int FUNC_12 (int *,struct inode*) ;
 int FUNC_13 (int *,struct inode*) ;
 scalar_t__ FUNC_14 (struct inode*) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (struct inode*,int ) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*,struct iattr*) ;
 int FUNC_19 (struct inode*,struct iattr*) ;
 scalar_t__ FUNC_20 (struct inode*,struct iattr*) ;

int FUNC_21(struct dentry *VAR_7, struct iattr *VAR_8)
{
 struct inode *VAR_9 = VAR_7->d_inode;
 int VAR_10, VAR_11 = 0;
 const unsigned int VAR_12 = VAR_8->ia_valid;

 VAR_10 = FUNC_18(VAR_9, VAR_8);
 if (VAR_10)
  return VAR_10;

 if ((VAR_12 & VAR_3 && VAR_8->ia_uid != VAR_9->i_uid) ||
  (VAR_12 & VAR_0 && VAR_8->ia_gid != VAR_9->i_gid)) {
  handle_t *VAR_13;



  VAR_13 = FUNC_9(VAR_9, (FUNC_2(VAR_9->i_sb)+
     FUNC_1(VAR_9->i_sb))+3);
  if (FUNC_4(VAR_13)) {
   VAR_10 = FUNC_5(VAR_13);
   goto err_out;
  }
  VAR_10 = FUNC_20(VAR_9, VAR_8) ? -VAR_4 : 0;
  if (VAR_10) {
   FUNC_10(VAR_13);
   return VAR_10;
  }


  if (VAR_8->ia_valid & VAR_3)
   VAR_9->i_uid = VAR_8->ia_uid;
  if (VAR_8->ia_valid & VAR_0)
   VAR_9->i_gid = VAR_8->ia_gid;
  VAR_10 = FUNC_11(VAR_13, VAR_9);
  FUNC_10(VAR_13);
 }

 if (VAR_8->ia_valid & VAR_2) {
  if (!(FUNC_16(VAR_9, VAR_6))) {
   struct ext4_sb_info *VAR_14 = FUNC_3(VAR_9->i_sb);

   if (VAR_8->ia_size > VAR_14->s_bitmap_maxbytes)
    return -VAR_5;
  }
 }

 if (FUNC_6(VAR_9->i_mode) &&
     VAR_8->ia_valid & VAR_2 &&
     (VAR_8->ia_size < VAR_9->i_size)) {
  handle_t *VAR_15;

  VAR_15 = FUNC_9(VAR_9, 3);
  if (FUNC_4(VAR_15)) {
   VAR_10 = FUNC_5(VAR_15);
   goto err_out;
  }

  VAR_10 = FUNC_12(VAR_15, VAR_9);
  FUNC_0(VAR_9)->i_disksize = VAR_8->ia_size;
  VAR_11 = FUNC_11(VAR_15, VAR_9);
  if (!VAR_10)
   VAR_10 = VAR_11;
  FUNC_10(VAR_15);

  if (FUNC_14(VAR_9)) {
   VAR_10 = FUNC_8(VAR_9,
           VAR_8->ia_size);
   if (VAR_10) {

    VAR_15 = FUNC_9(VAR_9, 3);
    if (FUNC_4(VAR_15)) {
     FUNC_13(((void*)0), VAR_9);
     goto err_out;
    }
    FUNC_13(VAR_15, VAR_9);
    FUNC_10(VAR_15);
    goto err_out;
   }
  }
  FUNC_17(VAR_9);
 }

 VAR_11 = FUNC_19(VAR_9, VAR_8);




 if (VAR_9->i_nlink)
  FUNC_13(((void*)0), VAR_9);

 if (!VAR_11 && (VAR_12 & VAR_1))
  VAR_11 = FUNC_7(VAR_9);

err_out:
 FUNC_15(VAR_9->i_sb, VAR_10);
 if (!VAR_10)
  VAR_10 = VAR_11;
 return VAR_10;
}
