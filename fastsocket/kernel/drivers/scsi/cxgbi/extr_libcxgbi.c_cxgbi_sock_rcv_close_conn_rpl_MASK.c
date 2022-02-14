
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cxgbi_sock {int state; int lock; int tid; int flags; scalar_t__ snd_una; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct cxgbi_sock*) ;
 scalar_t__ FUNC_1 (struct cxgbi_sock*,int ) ;
 int FUNC_2 (struct cxgbi_sock*) ;
 int FUNC_3 (struct cxgbi_sock*) ;
 int FUNC_4 (struct cxgbi_sock*,int) ;
 int FUNC_5 (int,char*,struct cxgbi_sock*,int,int ,int ) ;
 int FUNC_6 (char*,struct cxgbi_sock*,int,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct cxgbi_sock *VAR_2, u32 VAR_3)
{
 FUNC_5(1 << VAR_1, "csk 0x%p,%u,0x%lx,%u.\n",
  VAR_2, (VAR_2)->state, (VAR_2)->flags, (VAR_2)->tid);
 FUNC_2(VAR_2);
 FUNC_7(&VAR_2->lock);

 VAR_2->snd_una = VAR_3 - 1;
 if (FUNC_1(VAR_2, VAR_0))
  goto done;

 switch (VAR_2->state) {
 case 130:
  FUNC_4(VAR_2, 129);
  break;
 case 129:
 case 128:
  FUNC_0(VAR_2);
  break;
 case 131:
  break;
 default:
  FUNC_6("csk 0x%p,%u,0x%lx,%u, bad state.\n",
   VAR_2, VAR_2->state, VAR_2->flags, VAR_2->tid);
 }
done:
 FUNC_8(&VAR_2->lock);
 FUNC_3(VAR_2);
}
