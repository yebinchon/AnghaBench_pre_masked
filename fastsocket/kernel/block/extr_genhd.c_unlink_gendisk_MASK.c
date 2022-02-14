
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gendisk {int minors; TYPE_1__* queue; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_3__ {int backing_dev_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gendisk*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct gendisk*) ;
 TYPE_2__* FUNC_4 (struct gendisk*) ;
 int FUNC_5 (int *,char*) ;

void FUNC_6(struct gendisk *VAR_0)
{
 FUNC_5(&FUNC_4(VAR_0)->kobj, "bdi");
 FUNC_0(&VAR_0->queue->backing_dev_info);
 FUNC_1(VAR_0);
 FUNC_2(FUNC_3(VAR_0), VAR_0->minors);
}
