
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdc_ncm_ctx {scalar_t__ tx_timer_pending; int mtx; int * netdev; } ;


 int FUNC_0 (struct cdc_ncm_ctx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_0)
{
 struct cdc_ncm_ctx *VAR_1 = (struct cdc_ncm_ctx *)VAR_0;

 FUNC_3(&VAR_1->mtx);
 if (VAR_1->tx_timer_pending != 0) {
  VAR_1->tx_timer_pending--;
  FUNC_0(VAR_1);
  FUNC_4(&VAR_1->mtx);
 } else if (VAR_1->netdev != ((void*)0)) {
  FUNC_4(&VAR_1->mtx);
  FUNC_1(VAR_1->netdev);
  FUNC_5(((void*)0), VAR_1->netdev);
  FUNC_2(VAR_1->netdev);
 } else {
  FUNC_4(&VAR_1->mtx);
 }
}
