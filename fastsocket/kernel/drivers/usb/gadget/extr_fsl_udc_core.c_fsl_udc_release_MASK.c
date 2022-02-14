
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int parent; } ;
struct TYPE_3__ {int ep_qh_dma; int ep_qh; int ep_qh_size; int done; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1)
{
 FUNC_0(VAR_0->done);
 FUNC_1(VAR_1->parent, VAR_0->ep_qh_size,
   VAR_0->ep_qh, VAR_0->ep_qh_dma);
 FUNC_2(VAR_0);
}
