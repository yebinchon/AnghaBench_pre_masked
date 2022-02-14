
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct hvc_struct* driver_data; } ;
struct hvc_struct {int count; int kref; int data; TYPE_1__* ops; int lock; int * tty; scalar_t__ n_outbuf; int tty_resize; } ;
struct TYPE_2__ {int (* notifier_hangup ) (struct hvc_struct*,int ) ;} ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct hvc_struct*,int ) ;
 int FUNC_5 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_1)
{
 struct hvc_struct *VAR_2 = VAR_1->driver_data;
 unsigned long VAR_3;
 int VAR_4;

 if (!VAR_2)
  return;


 FUNC_0(&VAR_2->tty_resize);

 FUNC_2(&VAR_2->lock, VAR_3);






 if (VAR_2->count <= 0) {
  FUNC_3(&VAR_2->lock, VAR_3);
  return;
 }

 VAR_4 = VAR_2->count;
 VAR_2->count = 0;
 VAR_2->n_outbuf = 0;
 VAR_2->tty = ((void*)0);

 FUNC_3(&VAR_2->lock, VAR_3);

 if (VAR_2->ops->notifier_hangup)
  VAR_2->ops->notifier_hangup(VAR_2, VAR_2->data);

 while(VAR_4) {
  --VAR_4;
  FUNC_5(VAR_1);
  FUNC_1(&VAR_2->kref, VAR_0);
 }
}
