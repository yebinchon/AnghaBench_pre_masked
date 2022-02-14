
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int byte; } ;
struct efx_nic {TYPE_1__ multicast_hash; int mac_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct efx_nic*,int ,int ,int,int *,int ,int *) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct efx_nic *VAR_1)
{
 int VAR_2;

 FUNC_0(!FUNC_3(&VAR_1->mac_lock));

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 != 0)
  return VAR_2;

 return FUNC_1(VAR_1, VAR_0,
       VAR_1->multicast_hash.byte,
       sizeof(VAR_1->multicast_hash),
       ((void*)0), 0, ((void*)0));
}
