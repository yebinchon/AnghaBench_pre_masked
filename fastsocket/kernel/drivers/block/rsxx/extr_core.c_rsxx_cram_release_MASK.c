
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_cram {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct rsxx_cram* private_data; } ;


 int FUNC_0 (struct rsxx_cram*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct rsxx_cram *VAR_2 = VAR_1->private_data;

 if (!VAR_2)
  return 0;

 FUNC_0(VAR_2);
 VAR_1->private_data = ((void*)0);

 return 0;
}
