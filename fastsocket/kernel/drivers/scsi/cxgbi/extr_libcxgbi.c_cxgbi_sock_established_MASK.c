
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {unsigned int write_seq; unsigned int snd_nxt; unsigned int snd_una; int dst; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxgbi_sock*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

void FUNC_3(struct cxgbi_sock *VAR_1, unsigned int VAR_2,
   unsigned int VAR_3)
{
 VAR_1->write_seq = VAR_1->snd_nxt = VAR_1->snd_una = VAR_2;
 FUNC_1(VAR_1->dst);
 FUNC_2();
 FUNC_0(VAR_1, VAR_0);
}
