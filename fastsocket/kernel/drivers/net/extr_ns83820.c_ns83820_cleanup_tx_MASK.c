
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ns83820 {int * tx_descs; int nr_tx_skbs; int pci_dev; struct sk_buff** tx_skbs; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,unsigned int) ;
 int FUNC_5 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_6(struct ns83820 *VAR_6)
{
 unsigned VAR_7;

 for (VAR_7=0; VAR_7<VAR_4; VAR_7++) {
  struct sk_buff *VAR_8 = VAR_6->tx_skbs[VAR_7];
  VAR_6->tx_skbs[VAR_7] = ((void*)0);
  if (VAR_8) {
   __le32 *VAR_9 = VAR_6->tx_descs + (VAR_7 * VAR_3);
   FUNC_5(VAR_6->pci_dev,
     FUNC_1(VAR_9 + VAR_1),
     FUNC_3(VAR_9[VAR_2]) & VAR_0,
     VAR_5);
   FUNC_2(VAR_8);
   FUNC_0(&VAR_6->nr_tx_skbs);
  }
 }

 FUNC_4(VAR_6->tx_descs, 0, VAR_4 * VAR_3 * 4);
}
