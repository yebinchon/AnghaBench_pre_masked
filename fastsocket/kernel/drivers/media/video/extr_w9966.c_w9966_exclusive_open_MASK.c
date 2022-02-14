
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w9966_dev {int in_use; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 struct w9966_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1)
{
 struct w9966_dev *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(0, &VAR_2->in_use) ? -VAR_0 : 0;
}
