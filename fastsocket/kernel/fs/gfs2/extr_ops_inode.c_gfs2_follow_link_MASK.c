
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int path; } ;
struct gfs2_inode {int dummy; } ;
struct dentry {int d_inode; } ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 struct gfs2_inode* FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_inode*,char**,unsigned int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nameidata*,char*) ;

__attribute__((used)) static void *FUNC_6(struct dentry *VAR_1, struct nameidata *VAR_2)
{
 struct gfs2_inode *VAR_3 = FUNC_1(VAR_1->d_inode);
 char VAR_4[VAR_0], *VAR_5 = VAR_4;
 unsigned int VAR_6 = VAR_0;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, &VAR_5, &VAR_6);
 if (!VAR_7) {
  VAR_7 = FUNC_5(VAR_2, VAR_5);
  if (VAR_5 != VAR_4)
   FUNC_3(VAR_5);
 } else
  FUNC_4(&VAR_2->path);

 return FUNC_0(VAR_7);
}
