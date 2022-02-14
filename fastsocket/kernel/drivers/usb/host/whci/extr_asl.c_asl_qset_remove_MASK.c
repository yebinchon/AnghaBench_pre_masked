
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int link; } ;
struct whc_qset {int in_sw_list; int in_hw_list; int qset_dma; TYPE_1__ qh; int list_node; } ;
struct whc {int async_list; int async_removed_list; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct whc*,struct whc_qset*,struct whc_qset**,struct whc_qset**) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct whc *VAR_0, struct whc_qset *VAR_1)
{
 struct whc_qset *VAR_2, *VAR_3;

 FUNC_2(VAR_0, VAR_1, &VAR_3, &VAR_2);

 FUNC_1(&VAR_1->list_node, &VAR_0->async_removed_list);
 VAR_1->in_sw_list = 0;





 if (FUNC_0(&VAR_0->async_list))
  return;


 FUNC_3(&VAR_2->qh.link, VAR_3->qset_dma);
 VAR_1->in_hw_list = 0;
}
