
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {struct hvcs_struct* driver_data; } ;
struct hvcs_struct {int open_count; int kref; int lock; TYPE_2__* vdev; scalar_t__ chars_in_buffer; int * buffer; TYPE_1__* tty; scalar_t__ todo_mask; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int * driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct hvcs_struct*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct tty_struct * VAR_3)
{
 struct hvcs_struct *VAR_4 = VAR_3->driver_data;
 unsigned long VAR_5;
 int VAR_6;
 int VAR_7 = VAR_1;

 FUNC_3(&VAR_4->lock, VAR_5);

 VAR_6 = VAR_4->open_count;






 FUNC_5(VAR_4->vdev);

 VAR_4->todo_mask = 0;


 VAR_4->tty->driver_data = ((void*)0);
 VAR_4->tty = ((void*)0);

 VAR_4->open_count = 0;



 FUNC_2(&VAR_4->buffer[0], 0x00, VAR_0);
 VAR_4->chars_in_buffer = 0;

 VAR_7 = VAR_4->vdev->irq;

 FUNC_4(&VAR_4->lock, VAR_5);

 FUNC_0(VAR_7, VAR_4);






 while(VAR_6) {
  --VAR_6;





  FUNC_1(&VAR_4->kref, VAR_2);
 }
}
