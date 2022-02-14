
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_file_private {int fasync_queue; } ;
struct file {struct ipmi_file_private* private_data; } ;


 int FUNC_0 (int,struct file*,int,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(int VAR_0, struct file *VAR_1, int VAR_2)
{
 struct ipmi_file_private *VAR_3 = VAR_1->private_data;
 int VAR_4;

 FUNC_1();
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3->fasync_queue);
 FUNC_2();

 return (VAR_4);
}
