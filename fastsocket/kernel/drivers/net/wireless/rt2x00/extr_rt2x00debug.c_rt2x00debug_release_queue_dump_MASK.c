
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00debug_intf {int frame_dump_flags; int frame_dump_skbqueue; } ;
struct inode {struct rt2x00debug_intf* i_private; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct inode*,struct file*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct rt2x00debug_intf *VAR_3 = VAR_1->i_private;

 FUNC_2(&VAR_3->frame_dump_skbqueue);

 FUNC_0(VAR_0, &VAR_3->frame_dump_flags);

 return FUNC_1(VAR_1, VAR_2);
}
