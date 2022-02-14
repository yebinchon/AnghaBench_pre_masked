
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00debug_intf {int frame_dump_skbqueue; int frame_dump_waitqueue; } ;
struct file {struct rt2x00debug_intf* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_2,
      poll_table *VAR_3)
{
 struct rt2x00debug_intf *VAR_4 = VAR_2->private_data;

 FUNC_0(VAR_2, &VAR_4->frame_dump_waitqueue, VAR_3);

 if (!FUNC_1(&VAR_4->frame_dump_skbqueue))
  return VAR_0 | VAR_1;

 return 0;
}
