
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_8__ {TYPE_3__* reg; TYPE_1__ mac; } ;
struct pch_gbe_adapter {TYPE_4__ hw; } ;
struct net_device {int dev_addr; int addr_len; } ;
struct TYPE_7__ {TYPE_2__* mac_adr; } ;
struct TYPE_6__ {int low; int high; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct pch_gbe_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;
 int FUNC_5 (char*,int,...) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, void *VAR_2)
{
 struct pch_gbe_adapter *VAR_3 = FUNC_3(VAR_1);
 struct sockaddr *VAR_4 = VAR_2;
 int VAR_5;

 if (!FUNC_1(VAR_4->sa_data)) {
  VAR_5 = -VAR_0;
 } else {
  FUNC_2(VAR_1->dev_addr, VAR_4->sa_data, VAR_1->addr_len);
  FUNC_2(VAR_3->hw.mac.addr, VAR_4->sa_data, VAR_1->addr_len);
  FUNC_4(&VAR_3->hw, VAR_3->hw.mac.addr, 0);
  VAR_5 = 0;
 }
 FUNC_5("ret_val : 0x%08x\n", VAR_5);
 FUNC_5("dev_addr : %pM\n", VAR_1->dev_addr);
 FUNC_5("mac_addr : %pM\n", VAR_3->hw.mac.addr);
 FUNC_5("MAC_ADR1AB reg : 0x%08x 0x%08x\n",
   FUNC_0(&VAR_3->hw.reg->mac_adr[0].high),
   FUNC_0(&VAR_3->hw.reg->mac_adr[0].low));
 return VAR_5;
}
