
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int inversion; int* tx_tuna; } ;
typedef int fe_spectral_inversion_t ;


 int VAR_0 ;



__attribute__((used)) static int FUNC_0(struct dst_state *VAR_1, fe_spectral_inversion_t VAR_2)
{
 VAR_1->inversion = VAR_2;
 switch (VAR_2) {
 case 129:
  VAR_1->tx_tuna[8] &= ~0x80;
  break;
 case 128:
  VAR_1->tx_tuna[8] |= 0x80;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
