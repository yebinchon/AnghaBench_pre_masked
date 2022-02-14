
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_private; } ;
struct file {struct debug_buffer* private_data; } ;
struct debug_buffer {int alloc_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct debug_buffer* FUNC_0 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_3, struct file *VAR_4)
{
 struct debug_buffer *VAR_5;
 VAR_5 = FUNC_0(VAR_3->i_private, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->alloc_size = (sizeof(void *) == 4 ? 6 : 8)*VAR_1;
 VAR_4->private_data = VAR_5;
 return 0;
}
