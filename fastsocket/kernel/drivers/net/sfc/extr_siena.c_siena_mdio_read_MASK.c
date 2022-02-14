
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct efx_nic {int mdio_bus; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct efx_nic*,int ,int,int,int ,scalar_t__*,scalar_t__*) ;
 struct efx_nic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
      int VAR_3, int VAR_4, u16 VAR_5)
{
 struct efx_nic *VAR_6 = FUNC_1(VAR_2);
 uint16_t VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_6, VAR_6->mdio_bus, VAR_3, VAR_4,
    VAR_5, &VAR_7, &VAR_8);
 if (VAR_9)
  return VAR_9;
 if (VAR_8 != VAR_1)
  return -VAR_0;

 return (int)VAR_7;
}
