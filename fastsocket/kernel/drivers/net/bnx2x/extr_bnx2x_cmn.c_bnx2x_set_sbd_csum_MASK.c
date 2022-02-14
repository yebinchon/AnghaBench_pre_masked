
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int as_bitfield; } ;
struct eth_tx_start_bd {TYPE_1__ bd_flags; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct bnx2x *VAR_5, struct sk_buff *VAR_6,
          struct eth_tx_start_bd *VAR_7,
          u32 VAR_8)
{
 VAR_7->bd_flags.as_bitfield |= VAR_2;

 if (VAR_8 & VAR_4)
  VAR_7->bd_flags.as_bitfield |= VAR_0;

 if (!(VAR_8 & VAR_3))
  VAR_7->bd_flags.as_bitfield |= VAR_1;
}
