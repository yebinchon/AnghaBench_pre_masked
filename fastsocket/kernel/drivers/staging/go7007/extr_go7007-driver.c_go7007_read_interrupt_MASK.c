
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct go7007 {int interrupt_value; int interrupt_data; scalar_t__ interrupt_available; int video_dev; int interrupt_waitq; TYPE_1__* hpi_ops; } ;
struct TYPE_2__ {int (* read_interrupt ) (struct go7007*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct go7007*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int) ;

int FUNC_3(struct go7007 *VAR_1, u16 *VAR_2, u16 *VAR_3)
{
 VAR_1->interrupt_available = 0;
 VAR_1->hpi_ops->read_interrupt(VAR_1);
 if (FUNC_2(VAR_1->interrupt_waitq,
    VAR_1->interrupt_available, 5*VAR_0) < 0) {
  FUNC_1(VAR_1->video_dev, "timeout waiting for read interrupt\n");
  return -1;
 }
 if (!VAR_1->interrupt_available)
  return -1;
 VAR_1->interrupt_available = 0;
 *VAR_2 = VAR_1->interrupt_value & 0xfffe;
 *VAR_3 = VAR_1->interrupt_data;
 return 0;
}
