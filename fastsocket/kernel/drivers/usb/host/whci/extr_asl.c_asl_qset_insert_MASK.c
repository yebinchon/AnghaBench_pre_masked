
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int link; } ;
struct whc_qset {int in_hw_list; int qset_dma; TYPE_1__ qh; } ;
struct whc {int dummy; } ;


 int FUNC_0 (struct whc*,struct whc_qset*) ;
 int FUNC_1 (struct whc*,struct whc_qset*,struct whc_qset**,struct whc_qset**) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct whc *VAR_0, struct whc_qset *VAR_1)
{
 struct whc_qset *VAR_2, *VAR_3;

 FUNC_0(VAR_0, VAR_1);


 FUNC_1(VAR_0, VAR_1, &VAR_2, &VAR_3);
 FUNC_2(&VAR_1->qh.link, VAR_2->qset_dma);
 FUNC_2(&VAR_3->qh.link, VAR_1->qset_dma);
 VAR_1->in_hw_list = 1;
}
