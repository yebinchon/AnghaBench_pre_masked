
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

int FUNC_3(void)
{
 int VAR_3;

 VAR_3 = FUNC_2(&VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(&VAR_0);
 if (VAR_3)
  goto free_tx_ring;

 VAR_3 = FUNC_0(&VAR_1);
 if (VAR_3)
  goto free_rx_ring;

 return 0;
free_rx_ring:
 FUNC_1(&VAR_0);
free_tx_ring:
 FUNC_1(&VAR_2);

 return VAR_3;
}
