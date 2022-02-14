
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int receive_room; struct asyncppp* disc_data; TYPE_1__* ops; } ;
struct TYPE_4__ {int speed; void* mtu; int * ops; struct asyncppp* private; } ;
struct asyncppp {unsigned int* xaccm; unsigned int raccm; int lcp_fcs; TYPE_2__ chan; int dead_sem; int refcnt; int tsk; int rqueue; int obuf; int olim; int optr; int recv_lock; int xmit_lock; void* mru; struct tty_struct* tty; } ;
struct TYPE_3__ {int * write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct asyncppp*) ;
 struct asyncppp* FUNC_3 (int,int ) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,unsigned long) ;
 int FUNC_8 (struct tty_struct*) ;

__attribute__((used)) static int
FUNC_9(struct tty_struct *VAR_6)
{
 struct asyncppp *VAR_7;
 int VAR_8;
 int VAR_9;

 if (VAR_6->ops->write == ((void*)0))
  return -VAR_1;

 VAR_8 = -VAR_0;
 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  goto out;


 VAR_7->tty = VAR_6;
 VAR_7->mru = VAR_3;
 FUNC_6(&VAR_7->xmit_lock);
 FUNC_6(&VAR_7->recv_lock);
 VAR_7->xaccm[0] = ~0U;
 VAR_7->xaccm[3] = 0x60000000U;
 VAR_7->raccm = ~0U;
 VAR_7->optr = VAR_7->obuf;
 VAR_7->olim = VAR_7->obuf;
 VAR_7->lcp_fcs = -1;

 FUNC_5(&VAR_7->rqueue);
 FUNC_7(&VAR_7->tsk, VAR_5, (unsigned long) VAR_7);

 FUNC_0(&VAR_7->refcnt, 1);
 FUNC_1(&VAR_7->dead_sem);

 VAR_7->chan.private = VAR_7;
 VAR_7->chan.ops = &VAR_4;
 VAR_7->chan.mtu = VAR_3;
 VAR_9 = FUNC_8(VAR_6);
 VAR_7->chan.speed = VAR_9;
 VAR_8 = FUNC_4(&VAR_7->chan);
 if (VAR_8)
  goto out_free;

 VAR_6->disc_data = VAR_7;
 VAR_6->receive_room = 65536;
 return 0;

 out_free:
 FUNC_2(VAR_7);
 out:
 return VAR_8;
}
