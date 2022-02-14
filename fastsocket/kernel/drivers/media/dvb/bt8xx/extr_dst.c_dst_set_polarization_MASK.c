
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int voltage; int* tx_tuna; } ;


 int VAR_0 ;



 int FUNC_0 (int ,int ,int,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct dst_state *VAR_2)
{
 switch (VAR_2->voltage) {
 case 130:
  FUNC_0(VAR_1, VAR_0, 1, "Polarization=[Vertical]");
  VAR_2->tx_tuna[8] &= ~0x40;
  break;
 case 129:
  FUNC_0(VAR_1, VAR_0, 1, "Polarization=[Horizontal]");
  VAR_2->tx_tuna[8] |= 0x40;
  break;
 case 128:
  break;
 }

 return 0;
}
