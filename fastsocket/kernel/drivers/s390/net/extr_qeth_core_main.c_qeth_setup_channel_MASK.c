
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_channel {int wait_q; int iob_lock; int irq_pending; scalar_t__ io_buf_no; scalar_t__ buf_no; TYPE_1__* iob; } ;
struct TYPE_2__ {char* data; scalar_t__ rc; int callback; struct qeth_channel* channel; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int VAR_7 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct qeth_channel *VAR_8)
{
 int VAR_9;

 FUNC_0(VAR_6, 2, "setupch");
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_8->iob[VAR_9].data = (char *)
   FUNC_4(VAR_4, VAR_2|VAR_3);
  if (VAR_8->iob[VAR_9].data == ((void*)0))
   break;
  VAR_8->iob[VAR_9].state = VAR_0;
  VAR_8->iob[VAR_9].channel = VAR_8;
  VAR_8->iob[VAR_9].callback = VAR_7;
  VAR_8->iob[VAR_9].rc = 0;
 }
 if (VAR_9 < VAR_5) {
  while (VAR_9-- > 0)
   FUNC_3(VAR_8->iob[VAR_9].data);
  return -VAR_1;
 }
 VAR_8->buf_no = 0;
 VAR_8->io_buf_no = 0;
 FUNC_1(&VAR_8->irq_pending, 0);
 FUNC_5(&VAR_8->iob_lock);

 FUNC_2(&VAR_8->wait_q);
 return 0;
}
