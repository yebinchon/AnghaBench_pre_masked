
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dma_desc {int dummy; } ;
struct TYPE_6__ {int ampdu_density; int ampdu_factor; int ampdu_commit_factor; int ampdu_commit_density; int vif_id; int assign_seq; } ;
struct TYPE_4__ {int i3e; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
struct carl9170_tx_superframe {TYPE_3__ s; TYPE_2__ f; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 struct carl9170_tx_superframe* FUNC_2 (struct dma_desc*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct dma_desc *VAR_4)
{
 struct carl9170_tx_superframe *VAR_5 = FUNC_2(VAR_4);

 if (FUNC_4(VAR_5->s.assign_seq))
  FUNC_5(&VAR_5->f.data.i3e, VAR_5->s.vif_id);

 if (FUNC_4(VAR_5->s.ampdu_commit_density)) {
  FUNC_3(VAR_2,
      FUNC_0(VAR_0,
       FUNC_1(VAR_2),
       VAR_5->s.ampdu_density));
 }

 if (FUNC_4(VAR_5->s.ampdu_commit_factor)) {
  FUNC_3(VAR_3,
      FUNC_0(VAR_1,
       FUNC_1(VAR_3),
       8 << VAR_5->s.ampdu_factor));
 }
}
