
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_uid; scalar_t__ i_gid; scalar_t__ i_size; int i_sb; int i_mode; } ;
struct iattr {unsigned int ia_valid; scalar_t__ ia_uid; scalar_t__ ia_gid; scalar_t__ ia_size; } ;
struct dentry {struct inode* d_inode; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ i_disksize; } ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 int VAR_2 ;
 unsigned int const VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct inode*) ;
 int * FUNC_7 (struct inode*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct inode*) ;
 int FUNC_10 (int *,struct inode*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (struct inode*,struct iattr*) ;
 int FUNC_13 (struct inode*,struct iattr*) ;
 scalar_t__ FUNC_14 (struct inode*,struct iattr*) ;

int FUNC_15(struct dentry *VAR_5, struct iattr *VAR_6)
{
 struct inode *VAR_7 = VAR_5->d_inode;
 int VAR_8, VAR_9 = 0;
 const unsigned int VAR_10 = VAR_6->ia_valid;

 VAR_8 = FUNC_12(VAR_7, VAR_6);
 if (VAR_8)
  return VAR_8;

 if ((VAR_10 & VAR_3 && VAR_6->ia_uid != VAR_7->i_uid) ||
  (VAR_10 & VAR_0 && VAR_6->ia_gid != VAR_7->i_gid)) {
  handle_t *VAR_11;



  VAR_11 = FUNC_7(VAR_7, 2*(FUNC_2(VAR_7->i_sb)+
     FUNC_1(VAR_7->i_sb))+3);
  if (FUNC_3(VAR_11)) {
   VAR_8 = FUNC_4(VAR_11);
   goto err_out;
  }
  VAR_8 = FUNC_14(VAR_7, VAR_6) ? -VAR_4 : 0;
  if (VAR_8) {
   FUNC_8(VAR_11);
   return VAR_8;
  }


  if (VAR_6->ia_valid & VAR_3)
   VAR_7->i_uid = VAR_6->ia_uid;
  if (VAR_6->ia_valid & VAR_0)
   VAR_7->i_gid = VAR_6->ia_gid;
  VAR_8 = FUNC_9(VAR_11, VAR_7);
  FUNC_8(VAR_11);
 }

 if (FUNC_5(VAR_7->i_mode) &&
     VAR_6->ia_valid & VAR_2 && VAR_6->ia_size < VAR_7->i_size) {
  handle_t *VAR_12;

  VAR_12 = FUNC_7(VAR_7, 3);
  if (FUNC_3(VAR_12)) {
   VAR_8 = FUNC_4(VAR_12);
   goto err_out;
  }

  VAR_8 = FUNC_10(VAR_12, VAR_7);
  FUNC_0(VAR_7)->i_disksize = VAR_6->ia_size;
  VAR_9 = FUNC_9(VAR_12, VAR_7);
  if (!VAR_8)
   VAR_8 = VAR_9;
  FUNC_8(VAR_12);
 }

 VAR_9 = FUNC_13(VAR_7, VAR_6);

 if (!VAR_9 && (VAR_10 & VAR_1))
  VAR_9 = FUNC_6(VAR_7);

err_out:
 FUNC_11(VAR_7->i_sb, VAR_8);
 if (!VAR_8)
  VAR_8 = VAR_9;
 return VAR_8;
}
