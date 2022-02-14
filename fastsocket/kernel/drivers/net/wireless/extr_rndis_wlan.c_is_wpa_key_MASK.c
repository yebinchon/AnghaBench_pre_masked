
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rndis_wlan_private {TYPE_1__* encr_keys; } ;
struct TYPE_2__ {int cipher; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct rndis_wlan_private *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_2->encr_keys[VAR_3].cipher;

 return (VAR_4 == VAR_0 ||
  VAR_4 == VAR_1);
}
