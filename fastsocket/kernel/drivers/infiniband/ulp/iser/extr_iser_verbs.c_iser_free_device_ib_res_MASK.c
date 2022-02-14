
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_device {int cqs_used; int * pd; int * mr; int cq_desc; int event_handler; int ** rx_cq; int ** tx_cq; int * cq_tasklet; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct iser_device *VAR_0)
{
 int VAR_1;
 FUNC_0(VAR_0->mr == ((void*)0));

 for (VAR_1 = 0; VAR_1 < VAR_0->cqs_used; VAR_1++) {
  FUNC_6(&VAR_0->cq_tasklet[VAR_1]);
  (void)FUNC_3(VAR_0->tx_cq[VAR_1]);
  (void)FUNC_3(VAR_0->rx_cq[VAR_1]);
  VAR_0->tx_cq[VAR_1] = ((void*)0);
  VAR_0->rx_cq[VAR_1] = ((void*)0);
 }

 (void)FUNC_4(&VAR_0->event_handler);
 (void)FUNC_2(VAR_0->mr);
 (void)FUNC_1(VAR_0->pd);

 FUNC_5(VAR_0->cq_desc);

 VAR_0->mr = ((void*)0);
 VAR_0->pd = ((void*)0);
}
