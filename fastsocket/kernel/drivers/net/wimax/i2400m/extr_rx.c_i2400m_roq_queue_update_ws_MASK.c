
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int cb; } ;
struct i2400m_roq_data {int cs; } ;
struct i2400m_roq {unsigned int ws; int queue; } ;
struct i2400m {int (* bus_reset ) (struct i2400m*,int ) ;} ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct i2400m_roq*,unsigned int) ;
 int FUNC_1 (struct i2400m*,struct i2400m_roq*,struct sk_buff*,unsigned int,unsigned int) ;
 int FUNC_2 (struct i2400m*,struct i2400m_roq*,int ) ;
 int FUNC_3 (int,struct device*,char*,struct i2400m*,struct i2400m_roq*,struct sk_buff*,unsigned int) ;
 int FUNC_4 (int,struct device*,char*,struct i2400m*,struct i2400m_roq*,struct sk_buff*,unsigned int) ;
 int FUNC_5 (struct device*,char*,unsigned int,unsigned int,unsigned int) ;
 struct device* FUNC_6 (struct i2400m*) ;
 int FUNC_7 (struct i2400m*,struct sk_buff*,int ) ;
 int FUNC_8 (struct i2400m*,struct i2400m_roq*,int ,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_9 (struct i2400m*,struct i2400m_roq*) ;
 unsigned int FUNC_10 (int *) ;
 int FUNC_11 (struct i2400m*,int ) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static
void FUNC_13(struct i2400m *VAR_2, struct i2400m_roq *VAR_3,
    struct sk_buff * VAR_4, unsigned VAR_5)
{
 struct device *VAR_6 = FUNC_6(VAR_2);
 unsigned VAR_7, VAR_8, VAR_9;

 FUNC_4(2, VAR_6, "(i2400m %p roq %p skb %p sn %u)\n",
    VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_9 = FUNC_10(&VAR_3->queue);
 VAR_7 = FUNC_0(VAR_3, VAR_5);
 VAR_8 = VAR_3->ws;
 if (FUNC_12(VAR_7 >= 1024)) {
  FUNC_5(VAR_6, "SW BUG? queue_update_ws nsn %u (sn %u ws %u)\n",
   VAR_7, VAR_5, VAR_3->ws);
  FUNC_9(VAR_2, VAR_3);
  VAR_2->bus_reset(VAR_2, VAR_1);
 } else {


  if (VAR_9 == 0) {
   struct i2400m_roq_data *VAR_10;
   VAR_10 = (struct i2400m_roq_data *) &VAR_4->cb;
   FUNC_7(VAR_2, VAR_4, VAR_10->cs);
  }
  else
   FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_7);
  FUNC_2(VAR_2, VAR_3, VAR_5 + 1);
  FUNC_8(VAR_2, VAR_3, VAR_0,
       VAR_8, VAR_9, VAR_5, VAR_7, VAR_3->ws);
 }
 FUNC_3(2, VAR_6, "(i2400m %p roq %p skb %p sn %u) = void\n",
  VAR_2, VAR_3, VAR_4, VAR_5);
 return;
}
