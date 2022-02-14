
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_mode; } ;
struct gfs2_inode {int i_gl; int i_no_formal_ino; int i_no_addr; } ;
struct gfs2_holder {int dummy; } ;
struct TYPE_2__ {int no_formal_ino; int no_addr; } ;
struct get_name_filldir {char* name; TYPE_1__ inum; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct inode*,int *,struct get_name_filldir*,int ,int *) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (int ,int ,int ,struct gfs2_holder*) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_4, char *VAR_5,
    struct dentry *VAR_6)
{
 struct inode *VAR_7 = VAR_4->d_inode;
 struct inode *VAR_8 = VAR_6->d_inode;
 struct gfs2_inode *VAR_9, *VAR_10;
 struct get_name_filldir VAR_11;
 struct gfs2_holder VAR_12;
 u64 VAR_13 = 0;
 int VAR_14;

 if (!VAR_7)
  return -VAR_0;

 if (!FUNC_1(VAR_7->i_mode) || !VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_7);
 VAR_10 = FUNC_0(VAR_8);

 *VAR_5 = 0;
 VAR_11.inum.no_addr = VAR_10->i_no_addr;
 VAR_11.inum.no_formal_ino = VAR_10->i_no_formal_ino;
 VAR_11.name = VAR_5;

 VAR_14 = FUNC_4(VAR_9->i_gl, VAR_2, 0, &VAR_12);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_2(VAR_7, &VAR_13, &VAR_11, VAR_3, ((void*)0));

 FUNC_3(&VAR_12);

 if (!VAR_14 && !*VAR_5)
  VAR_14 = -VAR_1;

 return VAR_14;
}
