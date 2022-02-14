
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct fe_priv {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct fe_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_2, void *VAR_3)
{
 struct fe_priv *VAR_4 = FUNC_2(VAR_2);
 struct sockaddr *VAR_5 = (struct sockaddr*)VAR_3;

 if (!FUNC_0(VAR_5->sa_data))
  return -VAR_0;


 FUNC_1(VAR_2->dev_addr, VAR_5->sa_data, VAR_1);

 if (FUNC_5(VAR_2)) {
  FUNC_6(VAR_2);
  FUNC_3(VAR_2);
  FUNC_11(&VAR_4->lock);


  FUNC_10(VAR_2);


  FUNC_8(VAR_2);


  FUNC_9(VAR_2);
  FUNC_12(&VAR_4->lock);
  FUNC_4(VAR_2);
  FUNC_7(VAR_2);
 } else {
  FUNC_8(VAR_2);
 }
 return 0;
}
