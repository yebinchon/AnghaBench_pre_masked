
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dev_addr; } ;
struct bmac_data {int lock; scalar_t__ sleeping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct bmac_data*) ;
 int FUNC_3 (struct bmac_data*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 int FUNC_6 (struct net_device*,int ,int ) ;
 struct sk_buff* FUNC_7 (int ) ;
 int FUNC_8 (unsigned char*,int ,int) ;
 int FUNC_9 (unsigned char*,int ,int ) ;
 struct bmac_data* FUNC_10 (struct net_device*) ;
 unsigned char* FUNC_11 (struct sk_buff*,int ) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_14(struct net_device *VAR_3)
{
 struct bmac_data *VAR_4 = FUNC_10(VAR_3);
 unsigned long VAR_5;
 struct sk_buff *VAR_6;
 unsigned char *VAR_7;

 FUNC_12(&VAR_4->lock, VAR_5);
 FUNC_0(VAR_3);
 FUNC_3(VAR_4);
 FUNC_2(VAR_4);
 FUNC_1(VAR_3);
 FUNC_4(VAR_3);
 FUNC_6(VAR_3, VAR_2, VAR_1);
 VAR_4->sleeping = 0;





 VAR_6 = FUNC_7(VAR_0);
 if (VAR_6 != ((void*)0)) {
  VAR_7 = FUNC_11(VAR_6, VAR_0);
  FUNC_9(VAR_7, 0, VAR_0);
  FUNC_8(VAR_7, VAR_3->dev_addr, 6);
  FUNC_8(VAR_7+6, VAR_3->dev_addr, 6);
  FUNC_5(VAR_6, VAR_3);
 }
 FUNC_13(&VAR_4->lock, VAR_5);
}
