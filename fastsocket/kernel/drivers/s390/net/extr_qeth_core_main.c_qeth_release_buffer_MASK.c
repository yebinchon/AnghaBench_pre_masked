
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {scalar_t__ rc; int callback; int state; int data; } ;
struct qeth_channel {int wait_q; int iob_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct qeth_channel *VAR_4,
  struct qeth_cmd_buffer *VAR_5)
{
 unsigned long VAR_6;

 FUNC_0(VAR_2, 6, "relbuff");
 FUNC_2(&VAR_4->iob_lock, VAR_6);
 FUNC_1(VAR_5->data, 0, VAR_1);
 VAR_5->state = VAR_0;
 VAR_5->callback = VAR_3;
 VAR_5->rc = 0;
 FUNC_3(&VAR_4->iob_lock, VAR_6);
 FUNC_4(&VAR_4->wait_q);
}
