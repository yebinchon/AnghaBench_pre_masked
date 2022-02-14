
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfil_queue {size_t q_end; int q_mq; } ;
typedef int mbuf_t ;


 int FUNC_0 (struct cfil_queue*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct cfil_queue *VAR_0, mbuf_t VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_0);

 FUNC_1(&VAR_0->q_mq, VAR_1);
 VAR_0->q_end += VAR_2;

 FUNC_0(VAR_0);
}
