
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_3__ {size_t rar_entry_count; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {TYPE_2__* vf_data; struct e1000_hw hw; } ;
struct TYPE_4__ {unsigned char* vf_mac_addresses; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct igb_adapter*,unsigned char*,int,size_t) ;
 int FUNC_1 (struct igb_adapter*,size_t) ;
 int FUNC_2 (struct e1000_hw*,size_t*,int,size_t) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ,size_t) ;

__attribute__((used)) static void FUNC_6(struct igb_adapter *VAR_5, u32 VAR_6)
{
 struct e1000_hw *VAR_7 = &VAR_5->hw;
 unsigned char *VAR_8 = VAR_5->vf_data[VAR_6].vf_mac_addresses;
 int VAR_9 = VAR_7->mac.rar_entry_count - (VAR_6 + 1);
 u32 VAR_10, VAR_11[3];
 u8 *VAR_12 = (u8 *)(&VAR_11[1]);


 FUNC_1(VAR_5, VAR_6);


 FUNC_0(VAR_5, VAR_8, VAR_9, VAR_6);


 VAR_10 = FUNC_4(VAR_1);
 FUNC_5(VAR_1, VAR_10 | (1 << VAR_6));
 VAR_10 = FUNC_4(VAR_0);
 FUNC_5(VAR_0, VAR_10 | (1 << VAR_6));

 VAR_5->vf_data[VAR_6].flags |= VAR_4;


 VAR_11[0] = VAR_2 | VAR_3;
 FUNC_3(VAR_12, VAR_8, 6);
 FUNC_2(VAR_7, VAR_11, 3, VAR_6);
}
