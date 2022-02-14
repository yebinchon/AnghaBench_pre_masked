
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int max_q_vectors; int num_q_vectors; int flags; int * msix_entries; int netdev; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ixgbe_adapter*,int ,int ,int ,char*) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_5,
           int VAR_6)
{
 int VAR_7, VAR_8;





 VAR_8 = VAR_2;







 while (VAR_6 >= VAR_8) {
  VAR_7 = FUNC_3(VAR_5->pdev, VAR_5->msix_entries,
          VAR_6);
  if (!VAR_7)
   break;
  else if (VAR_7 < 0)
   VAR_6 = 0;
  else
   VAR_6 = VAR_7;
 }

 if (VAR_6 < VAR_8) {




  FUNC_2(VAR_5, VAR_4, VAR_1, VAR_5->netdev,
        "Unable to allocate MSI-X interrupts\n");
  VAR_5->flags &= ~VAR_0;
  FUNC_0(VAR_5->msix_entries);
  VAR_5->msix_entries = ((void*)0);
 } else {
  VAR_5->flags |= VAR_0;





  VAR_6 -= VAR_3;
  VAR_5->num_q_vectors = FUNC_1(VAR_6, VAR_5->max_q_vectors);
 }
}
