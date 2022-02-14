
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {TYPE_1__* private; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ last_scan_results_count; } ;
typedef TYPE_1__ local_info_t ;



__attribute__((used)) static void *FUNC_0(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 local_info_t *VAR_3 = VAR_0->private;

 ++*VAR_2;
 if (*VAR_2 > VAR_3->last_scan_results_count)
  return ((void*)0);
 return (void *)(unsigned long)(*VAR_2 + 1);
}
