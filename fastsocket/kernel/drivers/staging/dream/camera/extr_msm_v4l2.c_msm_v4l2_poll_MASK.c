
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {TYPE_1__* drv; } ;
struct TYPE_3__ {unsigned int (* drv_poll ) (int ,struct file*,struct poll_table_struct*) ;int sync; } ;


 TYPE_2__* VAR_0 ;
 unsigned int FUNC_0 (int ,struct file*,struct poll_table_struct*) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_1, struct poll_table_struct *VAR_2)
{
 return VAR_0->drv->drv_poll(VAR_0->drv->sync, VAR_1, VAR_2);
}
