
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_dmae_chan {scalar_t__ descs_allocated; int desc_lock; int common; } ;
struct TYPE_2__ {int flags; int tx_submit; } ;
struct sh_desc {int tx_list; TYPE_1__ async_tx; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 struct sh_desc* FUNC_2 (int,int ) ;
 int FUNC_3 (struct sh_dmae_chan*,struct sh_desc*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sh_dmae_chan* FUNC_6 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_7(struct dma_chan *VAR_4)
{
 struct sh_dmae_chan *VAR_5 = FUNC_6(VAR_4);
 struct sh_desc *VAR_6;

 FUNC_4(&VAR_5->desc_lock);
 while (VAR_5->descs_allocated < VAR_2) {
  FUNC_5(&VAR_5->desc_lock);
  VAR_6 = FUNC_2(sizeof(struct sh_desc), VAR_1);
  if (!VAR_6) {
   FUNC_4(&VAR_5->desc_lock);
   break;
  }
  FUNC_1(&VAR_6->async_tx,
     &VAR_5->common);
  VAR_6->async_tx.tx_submit = VAR_3;
  VAR_6->async_tx.flags = VAR_0;
  FUNC_0(&VAR_6->tx_list);
  FUNC_3(VAR_5, VAR_6);

  FUNC_4(&VAR_5->desc_lock);
  VAR_5->descs_allocated++;
 }
 FUNC_5(&VAR_5->desc_lock);

 return VAR_5->descs_allocated;
}
