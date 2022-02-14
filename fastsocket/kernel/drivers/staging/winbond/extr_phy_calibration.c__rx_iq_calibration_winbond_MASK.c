
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct hw_data {int txvga_setting_for_cal; int revision; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct hw_data*) ;
 scalar_t__ FUNC_2 (struct hw_data*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct hw_data*,int,int*) ;
 int FUNC_7 (struct hw_data*,int,int) ;

void FUNC_8(struct hw_data *VAR_0, u32 VAR_1)
{






 u8 VAR_2;

 FUNC_0(("[CAL] -> [5]_rx_iq_calibration()\n"));



 FUNC_7(VAR_0, 1, (1<<24)|0xEFBFC2);

 FUNC_7(VAR_0, 11, (11<<24)|0x1A05D6);

 FUNC_7(VAR_0, 5, (5<<24)| VAR_0->txvga_setting_for_cal);

 FUNC_7(VAR_0, 6, (6<<24)|0x06834C);

 FUNC_7(VAR_0, 0, (0<<24)|0xFFF1C0);





 VAR_2 = FUNC_2(VAR_0, 12589, VAR_1);

 if (VAR_2 > 0)
 {
  FUNC_1(VAR_0);
  VAR_2 = FUNC_2(VAR_0, 7943, VAR_1);

  if (VAR_2 > 0)
  {
   FUNC_1(VAR_0);
   VAR_2 = FUNC_2(VAR_0, 5011, VAR_1);

   if (VAR_2 > 0)
   {
    FUNC_0(("[CAL] ** <_rx_iq_calibration> **************\n"));
    FUNC_0(("[CAL] ** RX_IQ_CALIBRATION FAILURE !!\n"));
    FUNC_0(("[CAL] **************************************\n"));
    FUNC_1(VAR_0);
   }
  }
 }
}
