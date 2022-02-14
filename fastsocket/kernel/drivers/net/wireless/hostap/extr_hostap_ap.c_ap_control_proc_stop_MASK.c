
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct ap_data* private; } ;
struct TYPE_2__ {int lock; } ;
struct ap_data {TYPE_1__ mac_restrictions; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct ap_data *VAR_2 = VAR_0->private;
 FUNC_0(&VAR_2->mac_restrictions.lock);
}
