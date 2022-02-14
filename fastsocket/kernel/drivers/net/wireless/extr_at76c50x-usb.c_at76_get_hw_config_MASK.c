
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int regulatory_domain; int mac_addr; } ;
struct TYPE_6__ {int regulatory_domain; int mac_addr; } ;
struct TYPE_5__ {int regulatory_domain; int mac_addr; } ;
union at76_hwcfg {TYPE_3__ r5; TYPE_2__ r3; TYPE_1__ i; } ;
struct at76_priv {TYPE_4__* hw; int regulatory_domain; int mac_addr; int udev; int board_type; } ;
struct TYPE_8__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,union at76_hwcfg*,int) ;
 int FUNC_1 (int ,union at76_hwcfg*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (union at76_hwcfg*) ;
 union at76_hwcfg* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static int FUNC_8(struct at76_priv *VAR_3)
{
 int VAR_4;
 union at76_hwcfg *VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_2);

 if (!VAR_5)
  return -VAR_0;

 if (FUNC_3(VAR_3->board_type)) {
  VAR_4 = FUNC_1(VAR_3->udev, VAR_5,
            sizeof(VAR_5->i));
  if (VAR_4 < 0)
   goto exit;
  FUNC_6(VAR_3->mac_addr, VAR_5->i.mac_addr, VAR_1);
  VAR_3->regulatory_domain = VAR_5->i.regulatory_domain;
 } else if (FUNC_2(VAR_3->board_type)) {
  VAR_4 = FUNC_0(VAR_3->udev, VAR_5, sizeof(VAR_5->r3));
  if (VAR_4 < 0)
   goto exit;
  FUNC_6(VAR_3->mac_addr, VAR_5->r3.mac_addr, VAR_1);
  VAR_3->regulatory_domain = VAR_5->r3.regulatory_domain;
 } else {
  VAR_4 = FUNC_0(VAR_3->udev, VAR_5, sizeof(VAR_5->r5));
  if (VAR_4 < 0)
   goto exit;
  FUNC_6(VAR_3->mac_addr, VAR_5->r5.mac_addr, VAR_1);
  VAR_3->regulatory_domain = VAR_5->r5.regulatory_domain;
 }

exit:
 FUNC_4(VAR_5);
 if (VAR_4 < 0)
  FUNC_7(VAR_3->hw->wiphy, "cannot get HW Config (error %d)\n",
     VAR_4);

 return VAR_4;
}
