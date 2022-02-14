
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ipw_priv {int rates_mask; TYPE_1__* ieee; } ;
struct ipw_fixed_rate {int tx_rates; } ;
struct TYPE_2__ {int freq_band; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ipw_priv*,int ) ;
 int FUNC_3 (struct ipw_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ipw_priv *VAR_8, int VAR_9)
{

 struct ipw_fixed_rate VAR_10;
 u32 VAR_11;
 u16 VAR_12 = 0;
 u16 VAR_13 = VAR_8->rates_mask;




 switch (VAR_8->ieee->freq_band) {
 case 128:

  if (VAR_8->rates_mask & ~VAR_3) {

   FUNC_0
       ("invalid fixed rate mask in ipw_set_fixed_rate\n");
   VAR_13 = 0;
   break;
  }

  VAR_13 >>= VAR_7;
  break;

 default:

  if (VAR_9 == VAR_0) {
   if (VAR_13 & ~VAR_2) {

    FUNC_0
        ("invalid fixed rate mask in ipw_set_fixed_rate\n");
    VAR_13 = 0;
   }
   break;
  }


  if (VAR_13 & ~(VAR_2 |
        VAR_3)) {

   FUNC_0
       ("invalid fixed rate mask in ipw_set_fixed_rate\n");
   VAR_13 = 0;
   break;
  }

  if (VAR_5 & VAR_13) {
   VAR_12 |= (VAR_5 >> 1);
   VAR_13 &= ~VAR_5;
  }

  if (VAR_6 & VAR_13) {
   VAR_12 |= (VAR_6 >> 1);
   VAR_13 &= ~VAR_6;
  }

  if (VAR_4 & VAR_13) {
   VAR_12 |= (VAR_4 >> 1);
   VAR_13 &= ~VAR_4;
  }

  VAR_13 |= VAR_12;
  break;
 }

 VAR_10.tx_rates = FUNC_1(VAR_13);

 VAR_11 = FUNC_2(VAR_8, VAR_1);
 FUNC_3(VAR_8, VAR_11, *(u32 *) & VAR_10);
}
