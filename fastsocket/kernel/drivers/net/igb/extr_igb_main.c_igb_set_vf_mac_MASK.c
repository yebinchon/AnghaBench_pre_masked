
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rar_entry_count; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {TYPE_2__* vf_data; struct e1000_hw hw; } ;
struct TYPE_4__ {int vf_mac_addresses; } ;


 int VAR_0 ;
 int FUNC_0 (struct igb_adapter*,unsigned char*,int,int) ;
 int FUNC_1 (int ,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_2(struct igb_adapter *VAR_1,
     int VAR_2, unsigned char *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_1->hw;



 int VAR_5 = VAR_4->mac.rar_entry_count - (VAR_2 + 1);

 FUNC_1(VAR_1->vf_data[VAR_2].vf_mac_addresses, VAR_3, VAR_0);

 FUNC_0(VAR_1, VAR_3, VAR_5, VAR_2);

 return 0;
}
