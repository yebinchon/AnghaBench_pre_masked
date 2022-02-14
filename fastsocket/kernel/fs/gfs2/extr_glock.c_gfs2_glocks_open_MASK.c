
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int size; scalar_t__ buf; struct gfs2_glock_iter* private; } ;
struct inode {int i_private; } ;
struct gfs2_glock_iter {int sdp; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct file*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_4, struct file *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_5, &VAR_3,
       sizeof(struct gfs2_glock_iter));
 if (VAR_6 == 0) {
  struct seq_file *VAR_7 = VAR_5->private_data;
  struct gfs2_glock_iter *VAR_8 = VAR_7->private;
  VAR_8->sdp = VAR_4->i_private;
  VAR_7->buf = FUNC_0(VAR_1, VAR_0 | VAR_2);
  if (VAR_7->buf)
   VAR_7->size = VAR_1;
 }
 return VAR_6;
}
