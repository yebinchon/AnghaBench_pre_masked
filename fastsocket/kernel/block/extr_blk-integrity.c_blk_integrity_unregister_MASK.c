
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gendisk {struct blk_integrity* integrity; TYPE_2__* queue; } ;
struct blk_integrity {int kobj; } ;
struct TYPE_3__ {int capabilities; } ;
struct TYPE_4__ {TYPE_1__ backing_dev_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct gendisk *VAR_2)
{
 struct blk_integrity *VAR_3;

 if (!VAR_2 || !VAR_2->integrity)
  return;

 VAR_2->queue->backing_dev_info.capabilities &= ~VAR_0;

 VAR_3 = VAR_2->integrity;

 FUNC_2(&VAR_3->kobj, VAR_1);
 FUNC_0(&VAR_3->kobj);
 FUNC_1(&VAR_3->kobj);
 VAR_2->integrity = ((void*)0);
}
