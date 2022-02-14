
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_dmae_chan {int desc_lock; int ld_free; } ;
struct sh_desc {int node; int tx_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sh_dmae_chan *VAR_0, struct sh_desc *VAR_1)
{
 if (VAR_1) {
  FUNC_2(&VAR_0->desc_lock);

  FUNC_1(&VAR_1->tx_list, &VAR_0->ld_free);
  FUNC_0(&VAR_1->node, &VAR_0->ld_free);

  FUNC_3(&VAR_0->desc_lock);
 }
}
