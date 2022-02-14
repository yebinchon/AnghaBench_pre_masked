
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_6__ {void** addr; } ;
struct pch_gbe_hw {TYPE_3__ mac; TYPE_2__* reg; } ;
typedef int s32 ;
struct TYPE_5__ {TYPE_1__* mac_adr; } ;
struct TYPE_4__ {int low; int high; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,void**) ;

s32 FUNC_2(struct pch_gbe_hw *VAR_0)
{
 u32 VAR_1, VAR_2;

 VAR_1 = FUNC_0(&VAR_0->reg->mac_adr[0].high);
 VAR_2 = FUNC_0(&VAR_0->reg->mac_adr[0].low);

 VAR_0->mac.addr[0] = (u8)(VAR_1 & 0xFF);
 VAR_0->mac.addr[1] = (u8)((VAR_1 >> 8) & 0xFF);
 VAR_0->mac.addr[2] = (u8)((VAR_1 >> 16) & 0xFF);
 VAR_0->mac.addr[3] = (u8)((VAR_1 >> 24) & 0xFF);
 VAR_0->mac.addr[4] = (u8)(VAR_2 & 0xFF);
 VAR_0->mac.addr[5] = (u8)((VAR_2 >> 8) & 0xFF);

 FUNC_1("hw->mac.addr : %pM\n", VAR_0->mac.addr);
 return 0;
}
