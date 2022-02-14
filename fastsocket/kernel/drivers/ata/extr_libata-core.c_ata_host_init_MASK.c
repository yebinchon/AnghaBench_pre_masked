
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ata_port_operations {int dummy; } ;
struct ata_host {struct ata_port_operations* ops; struct device* dev; int eh_mutex; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ata_host *VAR_0, struct device *VAR_1,
     struct ata_port_operations *VAR_2)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(&VAR_0->eh_mutex);
 VAR_0->dev = VAR_1;
 VAR_0->ops = VAR_2;
}
