
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nes_cm_core {int mtu; int free_tx_pkt_max; } ;


 int VAR_0 ;



__attribute__((used)) static int FUNC_0(struct nes_cm_core *VAR_1, u32 VAR_2, u32 VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_2) {
 case 128:
  VAR_1->mtu = VAR_3;
  break;
 case 129:
  VAR_1->free_tx_pkt_max = VAR_3;
  break;
 default:

  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
