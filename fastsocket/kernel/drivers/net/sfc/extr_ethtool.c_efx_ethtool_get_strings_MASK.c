
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_string {int name; } ;
struct efx_nic {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;


 int FUNC_0 (struct efx_nic*,int *,struct ethtool_string*,int *) ;
 TYPE_1__* VAR_1 ;
 struct efx_nic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
        u32 VAR_3, u8 *VAR_4)
{
 struct efx_nic *VAR_5 = FUNC_1(VAR_2);
 struct ethtool_string *VAR_6 =
  (struct ethtool_string *)VAR_4;
 int VAR_7;

 switch (VAR_3) {
 case 129:
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   FUNC_2(VAR_6[VAR_7].name,
    VAR_1[VAR_7].name,
    sizeof(VAR_6[VAR_7].name));
  break;
 case 128:
  FUNC_0(VAR_5, ((void*)0),
         VAR_6, ((void*)0));
  break;
 default:

  break;
 }
}
