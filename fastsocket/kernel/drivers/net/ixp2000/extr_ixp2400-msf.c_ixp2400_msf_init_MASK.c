
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixp2400_msf_parameters {int rx_poll_ports; int rx_mode; int* rx_channel_mode; int tx_poll_ports; int tx_mode; int* tx_channel_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct ixp2400_msf_parameters*) ;
 int FUNC_3 (struct ixp2400_msf_parameters*) ;
 int FUNC_4 (struct ixp2400_msf_parameters*) ;
 int FUNC_5 (struct ixp2400_msf_parameters*) ;

void FUNC_6(struct ixp2400_msf_parameters *VAR_7)
{
 u32 VAR_8;
 int VAR_9;




 FUNC_5(VAR_7);




 VAR_8 = FUNC_0(VAR_6);
 FUNC_1(VAR_6, VAR_8 | 0x80);
 FUNC_1(VAR_6, VAR_8 & ~0x80);




 FUNC_1(VAR_1, VAR_7->rx_poll_ports - 1);
 FUNC_1(VAR_0, VAR_7->rx_mode);
 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  FUNC_1(VAR_2 + VAR_9,
      VAR_7->rx_channel_mode[VAR_9]);
 }
 FUNC_4(VAR_7);
 FUNC_2(VAR_7);




 FUNC_1(VAR_4, VAR_7->tx_poll_ports - 1);
 FUNC_1(VAR_3, VAR_7->tx_mode);
 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  FUNC_1(VAR_5 + VAR_9,
      VAR_7->tx_channel_mode[VAR_9]);
 }
 FUNC_3(VAR_7);
}
