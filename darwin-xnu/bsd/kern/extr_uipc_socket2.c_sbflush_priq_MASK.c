
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_priq {scalar_t__ msgq_flags; scalar_t__ msgq_bytes; int * msgq_lastmsg; struct mbuf* msgq_tail; struct mbuf* msgq_head; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_1(struct msg_priq *VAR_0)
{
 struct mbuf *VAR_1;
 VAR_1 = VAR_0->msgq_head;
 if (VAR_1 != ((void*)0))
  FUNC_0(VAR_1);
 VAR_0->msgq_head = VAR_0->msgq_tail = VAR_0->msgq_lastmsg = ((void*)0);
 VAR_0->msgq_bytes = VAR_0->msgq_flags = 0;
}
