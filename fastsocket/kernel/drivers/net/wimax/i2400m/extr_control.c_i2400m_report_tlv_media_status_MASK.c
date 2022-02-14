
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {struct net_device* net_dev; } ;
struct net_device {int dummy; } ;
struct i2400m_tlv_media_status {int media_status; } ;
struct i2400m {struct wimax_dev wimax_dev; } ;
struct device {int dummy; } ;
typedef enum i2400m_media_status { ____Placeholder_i2400m_media_status } i2400m_media_status ;





 int FUNC_0 (int,struct device*,char*,struct i2400m*,struct i2400m_tlv_media_status const*,int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*,struct i2400m_tlv_media_status const*,int) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct device* FUNC_3 (struct i2400m*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static
void FUNC_7(struct i2400m *VAR_0,
        const struct i2400m_tlv_media_status *VAR_1)
{
 struct device *VAR_2 = FUNC_3(VAR_0);
 struct wimax_dev *VAR_3 = &VAR_0->wimax_dev;
 struct net_device *VAR_4 = VAR_3->net_dev;
 enum i2400m_media_status VAR_5 = FUNC_4(VAR_1->media_status);

 FUNC_1(3, VAR_2, "(i2400m %p ms %p [%u])\n", VAR_0, VAR_1, VAR_5);

 switch (VAR_5) {
 case 128:
  FUNC_6(VAR_4);
  break;
 case 130:
  FUNC_5(VAR_4);
  break;





 case 129:
  FUNC_6(VAR_4);
  break;
 default:
  FUNC_2(VAR_2, "HW BUG? unknown media status %u\n",
   VAR_5);
 };
 FUNC_0(3, VAR_2, "(i2400m %p ms %p [%u]) = void\n",
  VAR_0, VAR_1, VAR_5);
}
