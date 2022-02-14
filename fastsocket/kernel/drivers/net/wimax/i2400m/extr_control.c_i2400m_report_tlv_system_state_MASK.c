
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int dummy; } ;
struct i2400m_tlv_system_state {int state; } ;
struct i2400m {int state; int (* bus_reset ) (struct i2400m*,int ) ;int state_wq; struct wimax_dev wimax_dev; } ;
struct device {int dummy; } ;
typedef enum i2400m_system_state { ____Placeholder_i2400m_system_state } i2400m_system_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct device*,char*,struct i2400m*,struct i2400m_tlv_system_state const*,int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*,struct i2400m_tlv_system_state const*,int) ;
 int FUNC_2 (int,struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct device* FUNC_4 (struct i2400m*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct i2400m*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct wimax_dev*,int ) ;

__attribute__((used)) static
void FUNC_9(struct i2400m *VAR_6,
        const struct i2400m_tlv_system_state *VAR_7)
{
 struct device *VAR_8 = FUNC_4(VAR_6);
 struct wimax_dev *VAR_9 = &VAR_6->wimax_dev;
 enum i2400m_system_state VAR_10 = FUNC_5(VAR_7->state);

 FUNC_1(3, VAR_8, "(i2400m %p ss %p [%u])\n", VAR_6, VAR_7, VAR_10);

 if (VAR_6->state != VAR_10) {
  VAR_6->state = VAR_10;
  FUNC_7(&VAR_6->state_wq);
 }
 switch (VAR_10) {
 case 129:
 case 138:
 case 143:
 case 136:
  FUNC_8(VAR_9, VAR_5);
  break;

 case 134:
 case 133:
  FUNC_8(VAR_9, VAR_2);
  break;

 case 135:
 case 130:
 case 131:
  FUNC_8(VAR_9, VAR_3);
  break;

 case 142:
 case 128:
  FUNC_8(VAR_9, VAR_3);
  break;

 case 132:
 case 137:
  FUNC_8(VAR_9, VAR_4);
  break;

 case 139:
  FUNC_2(1, VAR_8, "entering BS-negotiated idle mode\n");
 case 140:
 case 141:
  FUNC_8(VAR_9, VAR_1);
  break;

 default:

  FUNC_3(VAR_8, "HW BUG? unknown state %u: shutting down\n",
   VAR_10);
  VAR_6->bus_reset(VAR_6, VAR_0);
  break;
 };
 FUNC_0(3, VAR_8, "(i2400m %p ss %p [%u]) = void\n",
  VAR_6, VAR_7, VAR_10);
}
