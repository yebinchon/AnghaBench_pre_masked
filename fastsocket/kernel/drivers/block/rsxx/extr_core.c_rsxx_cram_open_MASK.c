
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_cram {int f_pos; int i_private; } ;
struct inode {int i_private; } ;
struct file {struct rsxx_cram* private_data; int f_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rsxx_cram* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_2, struct file *VAR_3)
{
 struct rsxx_cram *VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->i_private = VAR_2->i_private;
 VAR_4->f_pos = VAR_3->f_pos;
 VAR_3->private_data = VAR_4;

 return 0;
}
