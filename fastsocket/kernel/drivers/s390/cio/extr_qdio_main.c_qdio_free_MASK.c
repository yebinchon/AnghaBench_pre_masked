
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qdio_irq {int setup_mutex; int * debug_area; } ;
struct ccw_device {TYPE_2__* private; } ;
struct TYPE_3__ {int sch_no; } ;
struct TYPE_4__ {struct qdio_irq* qdio_data; TYPE_1__ schid; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qdio_irq*) ;

int FUNC_5(struct ccw_device *VAR_1)
{
 struct qdio_irq *VAR_2 = VAR_1->private->qdio_data;

 if (!VAR_2)
  return -VAR_0;

 FUNC_0("qfree:%4x", VAR_1->private->schid.sch_no);
 FUNC_2(&VAR_2->setup_mutex);

 if (VAR_2->debug_area != ((void*)0)) {
  FUNC_1(VAR_2->debug_area);
  VAR_2->debug_area = ((void*)0);
 }
 VAR_1->private->qdio_data = ((void*)0);
 FUNC_3(&VAR_2->setup_mutex);

 FUNC_4(VAR_2);
 return 0;
}
