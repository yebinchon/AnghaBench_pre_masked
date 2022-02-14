
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int num_q_vectors; int num_rx_queues; int num_tx_queues; int flags; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_adapter*,int,int,int,int,int,int) ;
 int FUNC_2 (struct ixgbe_adapter*,int) ;

__attribute__((used)) static int FUNC_3(struct ixgbe_adapter *VAR_2)
{
 int VAR_3 = VAR_2->num_q_vectors;
 int VAR_4 = VAR_2->num_rx_queues;
 int VAR_5 = VAR_2->num_tx_queues;
 int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 int VAR_9;


 if (!(VAR_2->flags & VAR_1))
  VAR_3 = 1;

 if (VAR_3 >= (VAR_4 + VAR_5)) {
  for (; VAR_4; VAR_8++) {
   VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_8,
         0, 0, 1, VAR_6);

   if (VAR_9)
    goto err_out;


   VAR_4--;
   VAR_6++;
  }
 }

 for (; VAR_8 < VAR_3; VAR_8++) {
  int VAR_10 = FUNC_0(VAR_4, VAR_3 - VAR_8);
  int VAR_11 = FUNC_0(VAR_5, VAR_3 - VAR_8);
  VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_8,
        VAR_11, VAR_7,
        VAR_10, VAR_6);

  if (VAR_9)
   goto err_out;


  VAR_4 -= VAR_10;
  VAR_5 -= VAR_11;
  VAR_6++;
  VAR_7++;
 }

 return 0;

err_out:
 VAR_2->num_tx_queues = 0;
 VAR_2->num_rx_queues = 0;
 VAR_2->num_q_vectors = 0;

 while (VAR_8--)
  FUNC_2(VAR_2, VAR_8);

 return -VAR_0;
}
