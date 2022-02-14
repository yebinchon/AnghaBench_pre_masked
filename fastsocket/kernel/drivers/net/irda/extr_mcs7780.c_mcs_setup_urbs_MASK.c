
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcs_cb {int * rx_urb; void* tx_urb; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct mcs_cb *VAR_1)
{
 VAR_1->rx_urb = ((void*)0);

 VAR_1->tx_urb = FUNC_0(0, VAR_0);
 if (!VAR_1->tx_urb)
  return 0;

 VAR_1->rx_urb = FUNC_0(0, VAR_0);
 if (!VAR_1->rx_urb)
  return 0;

 return 1;
}
