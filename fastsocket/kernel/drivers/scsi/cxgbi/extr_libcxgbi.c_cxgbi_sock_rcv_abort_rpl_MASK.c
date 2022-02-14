
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {int lock; int tid; int flags; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cxgbi_sock*,int ) ;
 int FUNC_1 (struct cxgbi_sock*) ;
 scalar_t__ FUNC_2 (struct cxgbi_sock*,int ) ;
 int FUNC_3 (struct cxgbi_sock*) ;
 int FUNC_4 (struct cxgbi_sock*) ;
 int FUNC_5 (struct cxgbi_sock*,int ) ;
 int FUNC_6 (char*,struct cxgbi_sock*,int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct cxgbi_sock *VAR_3)
{
 FUNC_3(VAR_3);
 FUNC_7(&VAR_3->lock);
 if (FUNC_2(VAR_3, VAR_1)) {
  if (!FUNC_2(VAR_3, VAR_2))
   FUNC_5(VAR_3, VAR_2);
  else {
   FUNC_0(VAR_3, VAR_2);
   FUNC_0(VAR_3, VAR_1);
   if (FUNC_2(VAR_3, VAR_0))
    FUNC_6("csk 0x%p,%u,0x%lx,%u,ABT_RPL_RSS.\n",
     VAR_3, VAR_3->state, VAR_3->flags, VAR_3->tid);
   FUNC_1(VAR_3);
  }
 }
 FUNC_8(&VAR_3->lock);
 FUNC_4(VAR_3);
}
