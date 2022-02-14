
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn_hwperf_object_info {int dummy; } ;
struct seq_file {struct sn_hwperf_object_info* private; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int FUNC_0 (struct file*,int *) ;
 int FUNC_1 (int*,struct sn_hwperf_object_info**) ;
 int VAR_0 ;

int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 int VAR_3;
 struct seq_file *VAR_4;
 struct sn_hwperf_object_info *VAR_5;
 int VAR_6;

 if ((VAR_3 = FUNC_1(&VAR_6, &VAR_5)) == 0) {
  VAR_3 = FUNC_0(VAR_2, &VAR_0);
  VAR_4 = VAR_2->private_data;
  VAR_4->private = VAR_5;
 }

 return VAR_3;
}
