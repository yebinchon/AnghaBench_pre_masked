
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int * vm_ops; } ;
struct gfs2_inode {int i_gl; int i_inode; } ;
struct gfs2_holder {int dummy; } ;
struct file {int f_flags; TYPE_1__* f_mapping; } ;
struct TYPE_2__ {int host; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (int ,int ,int ,struct gfs2_holder*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct file *VAR_5, struct vm_area_struct *VAR_6)
{
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_5->f_mapping->host);

 if (!(VAR_5->f_flags & VAR_2) &&
     !FUNC_1(&VAR_7->i_inode)) {
  struct gfs2_holder VAR_8;
  int VAR_9;

  VAR_9 = FUNC_4(VAR_7->i_gl, VAR_1, VAR_0,
        &VAR_8);
  if (VAR_9)
   return VAR_9;

  FUNC_3(&VAR_8);
  FUNC_2(VAR_5);
 }
 VAR_6->vm_ops = &VAR_4;
 VAR_6->vm_flags |= VAR_3;

 return 0;
}
