
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_tlv_rf_switches_status {int hw_rf_switch; int sw_rf_switch; } ;
struct i2400m {int wimax_dev; } ;
struct device {int dummy; } ;
typedef enum wimax_st { ____Placeholder_wimax_st } wimax_st ;
typedef enum i2400m_rf_switch_status { ____Placeholder_i2400m_rf_switch_status } i2400m_rf_switch_status ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct device*,char*,struct i2400m*,struct i2400m_tlv_rf_switches_status const*,int,int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*,struct i2400m_tlv_rf_switches_status const*,int,int) ;
 int FUNC_2 (int,struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct device* FUNC_4 (struct i2400m*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

void FUNC_9(
 struct i2400m *VAR_3,
 const struct i2400m_tlv_rf_switches_status *VAR_4)
{
 struct device *VAR_5 = FUNC_4(VAR_3);
 enum i2400m_rf_switch_status VAR_6, VAR_7;
 enum wimax_st VAR_8;

 VAR_7 = FUNC_5(VAR_4->sw_rf_switch);
 VAR_6 = FUNC_5(VAR_4->hw_rf_switch);

 FUNC_1(3, VAR_5, "(i2400m %p rfss %p [hw %u sw %u])\n",
    VAR_3, VAR_4, VAR_6, VAR_7);


 VAR_8 = FUNC_8(&VAR_3->wimax_dev);
 if (VAR_8 < VAR_2) {
  FUNC_2(3, VAR_5, "ignoring RF switches report, state %u\n",
    VAR_8);
  goto out;
 }
 switch (VAR_7) {
 case 128:
  FUNC_7(&VAR_3->wimax_dev, VAR_1);
  break;
 case 129:
  FUNC_7(&VAR_3->wimax_dev, VAR_0);
  break;
 default:
  FUNC_3(VAR_5, "HW BUG? Unknown RF SW state 0x%x\n", VAR_7);
 }

 switch (VAR_6) {
 case 128:
  FUNC_6(&VAR_3->wimax_dev, VAR_1);
  break;
 case 129:
  FUNC_6(&VAR_3->wimax_dev, VAR_0);
  break;
 default:
  FUNC_3(VAR_5, "HW BUG? Unknown RF HW state 0x%x\n", VAR_6);
 }
out:
 FUNC_0(3, VAR_5, "(i2400m %p rfss %p [hw %u sw %u]) = void\n",
  VAR_3, VAR_4, VAR_6, VAR_7);
}
