
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_user_sdma_queue {int header_cache; int pkt_slab; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct qib_user_sdma_queue*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct qib_user_sdma_queue *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_2(VAR_0->pkt_slab);
 FUNC_0(VAR_0->header_cache);
 FUNC_1(VAR_0);
}
