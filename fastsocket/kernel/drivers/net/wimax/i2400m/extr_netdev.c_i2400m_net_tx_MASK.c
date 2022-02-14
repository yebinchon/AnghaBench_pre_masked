
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct net_device {int trans_start; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct device*,int ,int ) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*,struct net_device*,struct sk_buff*,int) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*,struct net_device*,struct sk_buff*) ;
 int FUNC_3 (int,struct device*,char*,struct sk_buff*,int ) ;
 struct device* FUNC_4 (struct i2400m*) ;
 int FUNC_5 (struct i2400m*,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int VAR_1 ;

__attribute__((used)) static
int FUNC_7(struct i2400m *VAR_2, struct net_device *VAR_3,
    struct sk_buff *VAR_4)
{
 int VAR_5;
 struct device *VAR_6 = FUNC_4(VAR_2);

 FUNC_2(3, VAR_6, "(i2400m %p net_dev %p skb %p)\n",
    VAR_2, VAR_3, VAR_4);

 VAR_3->trans_start = VAR_1;
 FUNC_6(VAR_4);
 FUNC_3(3, VAR_6, "NETTX: skb %p sending %d bytes to radio\n",
   VAR_4, VAR_4->len);
 FUNC_0(4, VAR_6, VAR_4->data, VAR_4->len);
 VAR_5 = FUNC_5(VAR_2, VAR_4->data, VAR_4->len, VAR_0);
 FUNC_1(3, VAR_6, "(i2400m %p net_dev %p skb %p) = %d\n",
  VAR_2, VAR_3, VAR_4, VAR_5);
 return VAR_5;
}
