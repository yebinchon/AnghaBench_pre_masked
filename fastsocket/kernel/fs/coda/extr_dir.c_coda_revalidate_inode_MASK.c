
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; scalar_t__ i_ino; int i_sb; } ;
struct dentry {struct inode* d_inode; } ;
struct coda_vattr {int dummy; } ;
struct coda_inode_info {int c_flags; int c_fid; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct coda_inode_info* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct inode*,struct coda_vattr*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,scalar_t__,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *,struct coda_vattr*) ;

int FUNC_8(struct dentry *VAR_5)
{
 struct coda_vattr VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 ino_t VAR_9;
 struct inode *VAR_10 = VAR_5->d_inode;
 struct coda_inode_info *VAR_11 = FUNC_0(VAR_10);

 FUNC_4();
 if ( !VAR_11->c_flags )
  goto ok;

 if (VAR_11->c_flags & (VAR_2 | VAR_1 | VAR_0)) {
  VAR_7 = FUNC_7(VAR_10->i_sb, &(VAR_11->c_fid), &VAR_6);
  if ( VAR_7 )
   goto return_bad;






  VAR_8 = VAR_10->i_mode;
  VAR_9 = VAR_10->i_ino;
  FUNC_3(VAR_10, &VAR_6);

  if ((VAR_8 & VAR_4) != (VAR_10->i_mode & VAR_4)) {
   FUNC_5("Coda: inode %ld, fid %s changed type!\n",
          VAR_10->i_ino, FUNC_1(&(VAR_11->c_fid)));
  }



  if (VAR_10->i_ino != VAR_9)
   goto return_bad;

  FUNC_2(VAR_10, VAR_0);
  VAR_11->c_flags &= ~(VAR_2 | VAR_1 | VAR_0);
 }

ok:
 FUNC_6();
 return 0;

return_bad:
 FUNC_6();
 return -VAR_3;
}
