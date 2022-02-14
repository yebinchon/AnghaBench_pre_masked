
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max2165_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct max2165_priv*,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct max2165_priv *VAR_2)
{
 u8 VAR_3, VAR_4;
 u8 VAR_5, VAR_6;
 u8 VAR_7;
 u8 VAR_8, VAR_9;
 u8 VAR_10;
 u8 VAR_11, VAR_12, VAR_13;

 FUNC_1(VAR_2, VAR_1, &VAR_3);
 FUNC_1(VAR_2, VAR_0, &VAR_4);

 VAR_5 = (VAR_3 >> 6) & 0x01;
 VAR_6 = (VAR_3 >> 5) & 0x01;
 VAR_7 = (VAR_3 >> 4) & 0x01;
 VAR_8 = (VAR_3 >> 3) & 0x01;
 VAR_9 = (VAR_3 >> 2) & 0x01;
 VAR_10 = VAR_3 & 0x01;

 VAR_11 = VAR_4 >> 6;
 VAR_12 = (VAR_4 >> 3) & 0x7;
 VAR_13 = VAR_4 & 0x7;

 FUNC_0("auto VCO active: %d, auto VCO success: %d\n",
  VAR_6, VAR_5);
 FUNC_0("PLL locked: %d\n", VAR_7);
 FUNC_0("DC offset low: %d, DC offset high: %d\n",
  VAR_8, VAR_9);
 FUNC_0("Signal lvl over threshold: %d\n", VAR_10);
 FUNC_0("VCO: %d, VCO Sub-band: %d, ADC: %d\n", VAR_11, VAR_12, VAR_13);
}
