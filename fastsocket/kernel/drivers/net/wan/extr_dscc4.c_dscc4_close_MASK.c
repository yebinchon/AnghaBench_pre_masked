
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dscc4_dev_priv {int flags; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 struct dscc4_dev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int,int ,struct dscc4_dev_priv*,struct net_device*,int ) ;
 int FUNC_5 (int,struct dscc4_dev_priv*,struct net_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6)
{
 struct dscc4_dev_priv *VAR_7 = FUNC_1(VAR_6);

 FUNC_0(&VAR_7->timer);
 FUNC_3(VAR_6);

 FUNC_4(VAR_4 | VAR_5, 0, VAR_7, VAR_6, VAR_0);
 FUNC_4(0x00050000, 0, VAR_7, VAR_6, VAR_1);
 FUNC_5(0xffffffff, VAR_7, VAR_6, VAR_3);

 VAR_7->flags |= VAR_2;

 FUNC_2(VAR_6);

 return 0;
}
