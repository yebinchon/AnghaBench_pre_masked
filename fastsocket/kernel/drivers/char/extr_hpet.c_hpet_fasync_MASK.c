
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpet_dev {int hd_async_queue; } ;
struct file {struct hpet_dev* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct file*,int,int *) ;

__attribute__((used)) static int FUNC_1(int VAR_1, struct file *VAR_2, int VAR_3)
{
 struct hpet_dev *VAR_4;

 VAR_4 = VAR_2->private_data;

 if (FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_4->hd_async_queue) >= 0)
  return 0;
 else
  return -VAR_0;
}
