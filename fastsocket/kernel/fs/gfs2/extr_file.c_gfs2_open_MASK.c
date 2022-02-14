
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int i_mode; } ;
struct gfs2_inode {int i_gl; TYPE_1__ i_inode; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_file {int f_fl_mutex; } ;
struct file {int f_flags; struct gfs2_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct gfs2_holder*) ;
 int FUNC_5 (int ,int ,int ,struct gfs2_holder*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct gfs2_file*) ;
 struct gfs2_file* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_7, struct file *VAR_8)
{
 struct gfs2_inode *VAR_9 = FUNC_0(VAR_7);
 struct gfs2_holder VAR_10;
 struct gfs2_file *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_8(sizeof(struct gfs2_file), VAR_2);
 if (!VAR_11)
  return -VAR_0;

 FUNC_9(&VAR_11->f_fl_mutex);

 FUNC_3(FUNC_1(VAR_7), !VAR_8->private_data);
 VAR_8->private_data = VAR_11;

 if (FUNC_2(VAR_9->i_inode.i_mode)) {
  VAR_12 = FUNC_5(VAR_9->i_gl, VAR_4, VAR_3,
        &VAR_10);
  if (VAR_12)
   goto fail;

  if (!(VAR_8->f_flags & VAR_6) &&
      FUNC_6(VAR_7) > VAR_5) {
   VAR_12 = -VAR_1;
   goto fail_gunlock;
  }

  FUNC_4(&VAR_10);
 }

 return 0;

fail_gunlock:
 FUNC_4(&VAR_10);
fail:
 VAR_8->private_data = ((void*)0);
 FUNC_7(VAR_11);
 return VAR_12;
}
