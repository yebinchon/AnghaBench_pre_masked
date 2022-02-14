
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vhost_work_fn_t ;
struct vhost_poll {unsigned long mask; int work; struct vhost_dev* dev; int table; int wait; } ;
struct vhost_dev {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct vhost_poll *VAR_2, vhost_work_fn_t VAR_3,
       unsigned long VAR_4, struct vhost_dev *VAR_5)
{
 FUNC_1(&VAR_2->wait, VAR_1);
 FUNC_0(&VAR_2->table, VAR_0);
 VAR_2->mask = VAR_4;
 VAR_2->dev = VAR_5;

 FUNC_2(&VAR_2->work, VAR_3);
}
