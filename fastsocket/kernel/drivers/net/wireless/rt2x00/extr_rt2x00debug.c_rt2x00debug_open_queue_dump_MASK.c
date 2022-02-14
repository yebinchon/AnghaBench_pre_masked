
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00debug_intf {int frame_dump_flags; } ;
struct inode {struct rt2x00debug_intf* i_private; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,struct file*) ;
 int FUNC_1 (struct inode*,struct file*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct rt2x00debug_intf *VAR_4 = VAR_2->i_private;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 if (FUNC_2(VAR_1, &VAR_4->frame_dump_flags)) {
  FUNC_1(VAR_2, VAR_3);
  return -VAR_0;
 }

 return 0;
}
