
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_vf {int rx_filtering; TYPE_1__* efx; } ;
struct TYPE_2__ {int peer_work; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_vf*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct efx_vf *VAR_2)
{
 VAR_2->rx_filtering = 0;
 FUNC_0(VAR_2);
 FUNC_1(VAR_1, &VAR_2->efx->peer_work);

 return VAR_0;
}
