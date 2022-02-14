
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsp_que {int length_fx00; int length; int dma; scalar_t__ ring; int dma_fx00; scalar_t__ ring_fx00; } ;
struct qla_hw_data {TYPE_1__* pdev; } ;
typedef int response_t ;
typedef int request_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (int *,int,scalar_t__,int ) ;
 int FUNC_2 (struct rsp_que*) ;

__attribute__((used)) static void FUNC_3(struct qla_hw_data *VAR_0, struct rsp_que *VAR_1)
{
 if (FUNC_0(VAR_0)) {
  if (VAR_1 && VAR_1->ring)
   FUNC_1(&VAR_0->pdev->dev,
       (VAR_1->length_fx00 + 1) * sizeof(request_t),
       VAR_1->ring_fx00, VAR_1->dma_fx00);
 } else if (VAR_1 && VAR_1->ring) {
  FUNC_1(&VAR_0->pdev->dev,
  (VAR_1->length + 1) * sizeof(response_t),
  VAR_1->ring, VAR_1->dma);
 }
 FUNC_2(VAR_1);
 VAR_1 = ((void*)0);
}
