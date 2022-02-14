
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {TYPE_1__* private; } ;
typedef int loff_t ;
struct TYPE_2__ {int hostap_interfaces; } ;
typedef TYPE_1__ local_info_t ;


 void* FUNC_0 (void*,int *,int *) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 local_info_t *VAR_3 = VAR_0->private;
 return FUNC_0(VAR_1, &VAR_3->hostap_interfaces, VAR_2);
}
