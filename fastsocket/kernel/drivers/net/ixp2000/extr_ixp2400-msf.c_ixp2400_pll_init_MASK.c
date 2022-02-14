
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixp2400_msf_parameters {int rx_mode; int tx_mode; int rxclk01_multiplier; int rxclk23_multiplier; int txclk01_multiplier; int txclk23_multiplier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ixp2400_msf_parameters *VAR_3)
{
 int VAR_4;
 int VAR_5;
 u32 VAR_6;





 VAR_4 = !!(VAR_3->rx_mode & VAR_1);
 VAR_5 = !!(VAR_3->tx_mode & VAR_2);




 VAR_6 = FUNC_0(VAR_0);




 VAR_6 |= 0x0000f0f0;
 FUNC_1(VAR_0, VAR_6);




 VAR_6 &= ~0x03000000;
 VAR_6 |= (VAR_4 << 24) | (VAR_5 << 25);




 VAR_6 &= ~0x00ff0000;
 VAR_6 |= VAR_3->rxclk01_multiplier << 16;
 VAR_6 |= VAR_3->rxclk23_multiplier << 18;
 VAR_6 |= VAR_3->txclk01_multiplier << 20;
 VAR_6 |= VAR_3->txclk23_multiplier << 22;




 FUNC_1(VAR_0, VAR_6);




 VAR_6 &= ~(0x00005000 | VAR_4 << 13 | VAR_5 << 15);
 FUNC_1(VAR_0, VAR_6);




 VAR_6 &= ~(0x00000050 | VAR_4 << 5 | VAR_5 << 7);
 FUNC_1(VAR_0, VAR_6);






 FUNC_2(100);
}
