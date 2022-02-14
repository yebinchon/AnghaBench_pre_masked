
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct file {int f_pos; int f_ra; TYPE_1__* f_mapping; } ;
typedef int filldir_t ;
struct TYPE_2__ {struct inode* host; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,int *,void*,int ,int *) ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_5 (struct gfs2_holder*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_1, void *VAR_2, filldir_t VAR_3)
{
 struct inode *VAR_4 = VAR_1->f_mapping->host;
 struct gfs2_inode *VAR_5 = FUNC_0(VAR_4);
 struct gfs2_holder VAR_6;
 u64 VAR_7 = VAR_1->f_pos;
 int VAR_8;

 FUNC_4(VAR_5->i_gl, VAR_0, 0, &VAR_6);
 VAR_8 = FUNC_3(&VAR_6);
 if (VAR_8) {
  FUNC_5(&VAR_6);
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_4, &VAR_7, VAR_2, VAR_3, &VAR_1->f_ra);

 FUNC_2(&VAR_6);

 VAR_1->f_pos = VAR_7;

 return VAR_8;
}
