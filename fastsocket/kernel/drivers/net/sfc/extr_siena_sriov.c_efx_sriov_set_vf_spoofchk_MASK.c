
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct efx_vf {scalar_t__ txq_count; int txq_lock; int tx_filter_mode; } ;
struct efx_nic {int vf_init_count; struct efx_vf* vf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct efx_nic* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_4, int VAR_5,
         bool VAR_6)
{
 struct efx_nic *VAR_7 = FUNC_2(VAR_4);
 struct efx_vf *VAR_8;
 int VAR_9;

 if (VAR_5 >= VAR_7->vf_init_count)
  return -VAR_1;
 VAR_8 = VAR_7->vf + VAR_5;

 FUNC_0(&VAR_8->txq_lock);
 if (VAR_8->txq_count == 0) {
  VAR_8->tx_filter_mode =
   VAR_6 ? VAR_3 : VAR_2;
  VAR_9 = 0;
 } else {

  VAR_9 = -VAR_0;
 }
 FUNC_1(&VAR_8->txq_lock);
 return VAR_9;
}
