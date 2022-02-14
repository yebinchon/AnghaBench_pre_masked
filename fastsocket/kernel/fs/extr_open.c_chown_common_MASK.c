
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct inode {int i_mutex; int i_mode; } ;
struct iattr {int ia_valid; scalar_t__ ia_gid; scalar_t__ ia_uid; } ;
struct dentry {struct inode* d_inode; } ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dentry*,struct iattr*) ;

__attribute__((used)) static int FUNC_4(struct dentry * VAR_6, uid_t VAR_7, gid_t VAR_8)
{
 struct inode *VAR_9 = VAR_6->d_inode;
 int VAR_10;
 struct iattr VAR_11;

 VAR_11.ia_valid = VAR_0;
 if (VAR_7 != (uid_t) -1) {
  VAR_11.ia_valid |= VAR_5;
  VAR_11.ia_uid = VAR_7;
 }
 if (VAR_8 != (gid_t) -1) {
  VAR_11.ia_valid |= VAR_1;
  VAR_11.ia_gid = VAR_8;
 }
 if (!FUNC_0(VAR_9->i_mode))
  VAR_11.ia_valid |=
   VAR_4 | VAR_3 | VAR_2;
 FUNC_1(&VAR_9->i_mutex);
 VAR_10 = FUNC_3(VAR_6, &VAR_11);
 FUNC_2(&VAR_9->i_mutex);

 return VAR_10;
}
