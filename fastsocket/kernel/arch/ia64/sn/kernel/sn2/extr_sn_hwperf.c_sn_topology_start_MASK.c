
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn_hwperf_object_info {int dummy; } ;
struct seq_file {struct sn_hwperf_object_info* private; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void *FUNC_0(struct seq_file *VAR_1, loff_t * VAR_2)
{
 struct sn_hwperf_object_info *VAR_3 = VAR_1->private;

 if (*VAR_2 < VAR_0)
  return (void *)(VAR_3 + *VAR_2);

 return ((void*)0);
}
