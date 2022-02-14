
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union efx_multicast_hash {int * oword; } ;
struct efx_nic {int mac_lock; union efx_multicast_hash multicast_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct efx_nic*,int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct efx_nic *VAR_2)
{
 union efx_multicast_hash *VAR_3 = &VAR_2->multicast_hash;

 FUNC_0(!FUNC_2(&VAR_2->mac_lock));

 FUNC_1(VAR_2, &VAR_3->oword[0], VAR_0);
 FUNC_1(VAR_2, &VAR_3->oword[1], VAR_1);
}
