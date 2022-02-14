
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;
typedef enum n_rssi_type { ____Placeholder_n_rssi_type } n_rssi_type ;


 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_0, u8 VAR_1,
     enum n_rssi_type VAR_2)
{
 if (VAR_0->phy.rev >= 3)
  FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
