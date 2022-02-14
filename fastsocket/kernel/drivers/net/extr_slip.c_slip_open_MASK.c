
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {int receive_room; struct slip* disc_data; TYPE_1__* ops; } ;
struct TYPE_8__ {void* expires; } ;
struct slip {scalar_t__ magic; int keepalive; int outfill; int flags; struct tty_struct* tty; TYPE_2__* dev; TYPE_4__ outfill_timer; TYPE_4__ keepalive_timer; int pid; int line; } ;
struct TYPE_7__ {int pid; } ;
struct TYPE_6__ {int base_addr; } ;
struct TYPE_5__ {int * write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 TYPE_3__* VAR_9 ;
 void* VAR_10 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;
 struct slip* FUNC_7 (int ) ;
 int FUNC_8 (struct slip*,int ) ;
 int FUNC_9 (struct slip*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_13(struct tty_struct *VAR_11)
{
 struct slip *VAR_12;
 int VAR_13;

 if (!FUNC_1(VAR_0))
  return -VAR_4;

 if (VAR_11->ops->write == ((void*)0))
  return -VAR_3;





 FUNC_4();


 FUNC_10();

 VAR_12 = VAR_11->disc_data;

 VAR_13 = -VAR_1;

 if (VAR_12 && VAR_12->magic == VAR_7)
  goto err_exit;


 VAR_13 = -VAR_2;
 VAR_12 = FUNC_7(FUNC_12(VAR_11));
 if (VAR_12 == ((void*)0))
  goto err_exit;

 VAR_12->tty = VAR_11;
 VAR_11->disc_data = VAR_12;
 VAR_12->line = FUNC_12(VAR_11);
 VAR_12->pid = VAR_9->pid;

 if (!FUNC_11(VAR_6, &VAR_12->flags)) {

  VAR_13 = FUNC_8(VAR_12, VAR_8);
  if (VAR_13)
   goto err_free_chan;

  FUNC_6(VAR_6, &VAR_12->flags);

  VAR_13 = FUNC_3(VAR_12->dev);
  if (VAR_13)
   goto err_free_bufs;
 }
 FUNC_5();
 VAR_11->receive_room = 65536;
 return VAR_12->dev->base_addr;

err_free_bufs:
 FUNC_9(VAR_12);

err_free_chan:
 VAR_12->tty = ((void*)0);
 VAR_11->disc_data = ((void*)0);
 FUNC_2(VAR_6, &VAR_12->flags);

err_exit:
 FUNC_5();


 return VAR_13;
}
