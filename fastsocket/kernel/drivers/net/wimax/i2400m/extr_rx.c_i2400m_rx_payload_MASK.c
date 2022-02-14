
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct i2400m_pld {int dummy; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;
typedef enum i2400m_pt { ____Placeholder_i2400m_pt } i2400m_pt ;






 int FUNC_0 (int,struct device*,void const*,size_t) ;
 int FUNC_1 (int,struct device*,char*,size_t,...) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct device* FUNC_3 (struct i2400m*) ;
 int FUNC_4 (struct i2400m*,struct sk_buff*,unsigned int,void const*,size_t) ;
 size_t FUNC_5 (struct i2400m_pld const*) ;
 int FUNC_6 (struct i2400m_pld const*) ;
 int FUNC_7 (struct i2400m*,struct sk_buff*,void const*,size_t) ;
 int FUNC_8 (struct i2400m*,struct sk_buff*,unsigned int,void const*,size_t) ;
 int FUNC_9 (struct i2400m*,void const*,size_t) ;
 int FUNC_10 () ;

__attribute__((used)) static
void FUNC_11(struct i2400m *VAR_0, struct sk_buff *VAR_1,
         unsigned VAR_2, const struct i2400m_pld *VAR_3,
         const void *VAR_4)
{
 struct device *VAR_5 = FUNC_3(VAR_0);
 size_t VAR_6 = FUNC_5(VAR_3);
 enum i2400m_pt VAR_7 = FUNC_6(VAR_3);

 FUNC_1(7, VAR_5, "RX: received payload type %u, %zu bytes\n",
   VAR_7, VAR_6);
 FUNC_0(8, VAR_5, VAR_4, VAR_6);

 switch (VAR_7) {
 case 130:
  FUNC_1(3, VAR_5, "RX: data payload %zu bytes\n", VAR_6);
  FUNC_4(VAR_0, VAR_1, VAR_2, VAR_4, VAR_6);
  break;
 case 131:
  FUNC_7(VAR_0, VAR_1, VAR_4, VAR_6);
  break;
 case 128:
  FUNC_9(VAR_0, VAR_4, VAR_6);
  break;
 case 129:
  FUNC_1(3, VAR_5, "ERX: data payload %zu bytes\n", VAR_6);
  FUNC_8(VAR_0, VAR_1, VAR_2, VAR_4, VAR_6);
  break;
 default:
  if (FUNC_10())
   FUNC_2(VAR_5, "RX: HW BUG? unexpected payload type %u\n",
    VAR_7);
 }
}
