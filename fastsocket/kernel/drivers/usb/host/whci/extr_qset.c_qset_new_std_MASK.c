
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whc_std {int list_node; int * qtd; struct urb* urb; } ;
struct whc_qset {int stds; } ;
struct whc {int dummy; } ;
struct urb {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct whc_std* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static struct whc_std *FUNC_3(struct whc *VAR_0, struct whc_qset *VAR_1,
        struct urb *VAR_2, gfp_t VAR_3)
{
 struct whc_std *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct whc_std), VAR_3);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->urb = VAR_2;
 VAR_4->qtd = ((void*)0);

 FUNC_0(&VAR_4->list_node);
 FUNC_2(&VAR_4->list_node, &VAR_1->stds);

 return VAR_4;
}
