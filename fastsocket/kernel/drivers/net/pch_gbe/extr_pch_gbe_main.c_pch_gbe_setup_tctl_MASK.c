
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pch_gbe_hw {TYPE_1__* reg; } ;
struct pch_gbe_adapter {struct pch_gbe_hw hw; } ;
struct TYPE_2__ {int TCPIP_ACC; int TX_MODE; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct pch_gbe_adapter *VAR_7)
{
 struct pch_gbe_hw *VAR_8 = &VAR_7->hw;
 u32 VAR_9, VAR_10;

 VAR_9 = VAR_0 |
  VAR_2 |
  VAR_1 |
  VAR_5 |
  VAR_3 | VAR_4;

 FUNC_1(VAR_9, &VAR_8->reg->TX_MODE);

 VAR_10 = FUNC_0(&VAR_8->reg->TCPIP_ACC);
 VAR_10 |= VAR_6;
 FUNC_1(VAR_10, &VAR_8->reg->TCPIP_ACC);
 return;
}
