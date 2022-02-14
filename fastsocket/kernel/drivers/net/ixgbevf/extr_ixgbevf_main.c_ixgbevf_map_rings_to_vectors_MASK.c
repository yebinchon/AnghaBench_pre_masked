
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbevf_adapter {int num_rx_queues; int num_tx_queues; int num_msix_vectors; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ixgbevf_adapter*,int,int) ;
 int FUNC_2 (struct ixgbevf_adapter*,int,int) ;

__attribute__((used)) static int FUNC_3(struct ixgbevf_adapter *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;
 int VAR_4 = 0, VAR_5 = 0;
 int VAR_6 = VAR_1->num_rx_queues;
 int VAR_7 = VAR_1->num_tx_queues;
 int VAR_8, VAR_9;
 int VAR_10, VAR_11;
 int VAR_12 = 0;

 VAR_2 = VAR_1->num_msix_vectors - VAR_0;





 if (VAR_2 == VAR_1->num_rx_queues + VAR_1->num_tx_queues) {
  for (; VAR_4 < VAR_6; VAR_3++, VAR_4++)
   FUNC_1(VAR_1, VAR_3, VAR_4);

  for (; VAR_5 < VAR_7; VAR_3++, VAR_5++)
   FUNC_2(VAR_1, VAR_3, VAR_5);
  goto out;
 }







 for (VAR_8 = VAR_3; VAR_8 < VAR_2; VAR_8++) {
  VAR_10 = FUNC_0(VAR_6, VAR_2 - VAR_8);
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
   FUNC_1(VAR_1, VAR_8, VAR_4);
   VAR_4++;
   VAR_6--;
  }
 }
 for (VAR_8 = VAR_3; VAR_8 < VAR_2; VAR_8++) {
  VAR_11 = FUNC_0(VAR_7, VAR_2 - VAR_8);
  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
   FUNC_2(VAR_1, VAR_8, VAR_5);
   VAR_5++;
   VAR_7--;
  }
 }

out:
 return VAR_12;
}
