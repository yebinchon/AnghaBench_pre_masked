
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxq {int * bd; scalar_t__ bd_dma; void* rb_stts; scalar_t__ rb_stts_dma; int lock; } ;
struct iwl_trans_pcie {struct iwl_rxq rxq; } ;
struct iwl_trans {struct device* dev; } ;
struct device {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct device*,int,int *,scalar_t__) ;
 void* FUNC_3 (struct device*,int,scalar_t__*,int ) ;
 int FUNC_4 (struct iwl_rxq*,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iwl_trans *VAR_4)
{
 struct iwl_trans_pcie *VAR_5 = FUNC_0(VAR_4);
 struct iwl_rxq *VAR_6 = &VAR_5->rxq;
 struct device *VAR_7 = VAR_4->dev;

 FUNC_4(&VAR_5->rxq, 0, sizeof(VAR_5->rxq));

 FUNC_5(&VAR_6->lock);

 if (FUNC_1(VAR_6->bd || VAR_6->rb_stts))
  return -VAR_0;


 VAR_6->bd = FUNC_3(VAR_7, sizeof(__le32) * VAR_3,
          &VAR_6->bd_dma, VAR_2);
 if (!VAR_6->bd)
  goto err_bd;


 VAR_6->rb_stts = FUNC_3(VAR_7, sizeof(*VAR_6->rb_stts),
        &VAR_6->rb_stts_dma, VAR_2);
 if (!VAR_6->rb_stts)
  goto err_rb_stts;

 return 0;

err_rb_stts:
 FUNC_2(VAR_7, sizeof(__le32) * VAR_3,
     VAR_6->bd, VAR_6->bd_dma);
 VAR_6->bd_dma = 0;
 VAR_6->bd = ((void*)0);
err_bd:
 return -VAR_1;
}
