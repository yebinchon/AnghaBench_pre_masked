
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct efx_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int offload_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct efx_nic*,int ) ;
 int FUNC_1 (struct net_device*,int) ;
 struct efx_nic* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, u32 VAR_5)
{
 struct efx_nic *VAR_6 = FUNC_2(VAR_4);
 u32 VAR_7 = (VAR_6->type->offload_features &
    (VAR_3 | VAR_2));
 int VAR_8;

 if (VAR_5 & ~VAR_7)
  VAR_8 = -VAR_1;
 else
  VAR_8 = FUNC_1(VAR_4, VAR_5);
 if (VAR_8)
  return VAR_8;

 if (!(VAR_5 & VAR_2))
  FUNC_0(VAR_6, VAR_0);

 return 0;
}
