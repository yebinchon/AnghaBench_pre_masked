
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct libipw_hdr_4addr {int addr1; int addr2; int addr3; } ;
struct ipw_priv {TYPE_2__* net_dev; int bssid; TYPE_1__* ieee; } ;
struct TYPE_4__ {int dev_addr; } ;
struct TYPE_3__ {int iw_mode; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ipw_priv *VAR_1,
        struct libipw_hdr_4addr *VAR_2)
{


 switch (VAR_1->ieee->iw_mode) {
 case 129:

  if (!FUNC_1(VAR_2->addr2, VAR_1->net_dev->dev_addr, VAR_0))
   return 0;


  if (FUNC_0(VAR_2->addr1))
   return !FUNC_1(VAR_2->addr3, VAR_1->bssid, VAR_0);


  return !FUNC_1(VAR_2->addr1, VAR_1->net_dev->dev_addr,
          VAR_0);

 case 128:

  if (!FUNC_1(VAR_2->addr3, VAR_1->net_dev->dev_addr, VAR_0))
   return 0;


  if (FUNC_0(VAR_2->addr1))
   return !FUNC_1(VAR_2->addr2, VAR_1->bssid, VAR_0);


  return !FUNC_1(VAR_2->addr1, VAR_1->net_dev->dev_addr,
          VAR_0);
 }

 return 1;
}
