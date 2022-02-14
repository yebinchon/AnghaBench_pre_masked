
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxgbi_sock {scalar_t__ state; int lock; TYPE_1__* cdev; int receive_queue; int dst; int tid; int flags; } ;
struct TYPE_2__ {int (* csk_send_close_req ) (struct cxgbi_sock*) ;int (* csk_send_abort_req ) (struct cxgbi_sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cxgbi_sock*,int ) ;
 int FUNC_2 (struct cxgbi_sock*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*,struct cxgbi_sock*,scalar_t__,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct cxgbi_sock*) ;
 int FUNC_9 (struct cxgbi_sock*) ;

__attribute__((used)) static void FUNC_10(struct cxgbi_sock *VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;

 FUNC_4(1 << VAR_6, "csk 0x%p,%u,0x%lx,%u.\n",
  VAR_7, (VAR_7)->state, (VAR_7)->flags, (VAR_7)->tid);
 FUNC_6(&VAR_7->lock);
 FUNC_3(VAR_7->dst);
 VAR_8 = FUNC_5(&VAR_7->receive_queue);
 FUNC_0(&VAR_7->receive_queue);

 if (VAR_7->state == VAR_2)
  FUNC_1(VAR_7, VAR_0);
 else if (VAR_7->state == VAR_4) {
  VAR_9 = 1;
  FUNC_2(VAR_7, VAR_1);
 } else if (VAR_7->state == VAR_5) {
  VAR_9 = 1;
  FUNC_2(VAR_7, VAR_3);
 }

 if (VAR_9) {
  if (VAR_8)
   VAR_7->cdev->csk_send_abort_req(VAR_7);
  else
   VAR_7->cdev->csk_send_close_req(VAR_7);
 }

 FUNC_7(&VAR_7->lock);
}
