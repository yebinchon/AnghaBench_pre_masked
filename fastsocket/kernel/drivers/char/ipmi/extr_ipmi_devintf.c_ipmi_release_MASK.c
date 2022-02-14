
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_file_private {int user; } ;
struct inode {int dummy; } ;
struct file {struct ipmi_file_private* private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipmi_file_private*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct ipmi_file_private *VAR_2 = VAR_1->private_data;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->user);
 if (VAR_3)
  return VAR_3;


 FUNC_1(VAR_2);

 return 0;
}
