
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct ks_net {int lock; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct ks_net*) ;
 int FUNC_2 (struct ks_net*,char*,int ) ;
 int FUNC_3 (struct ks_net*,int ) ;
 int FUNC_4 (struct ks_net*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct ks_net* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct ks_net*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3)
{
 struct ks_net *VAR_4 = FUNC_7(VAR_3);

 if (FUNC_8(VAR_4))
  FUNC_2(VAR_4, "%s: shutting down\n", VAR_3->name);

 FUNC_9(VAR_3);

 FUNC_5(&VAR_4->lock);


 FUNC_4(VAR_4, VAR_0, 0x0000);
 FUNC_4(VAR_4, VAR_1, 0xffff);


 FUNC_1(VAR_4);


 FUNC_3(VAR_4, VAR_2);
 FUNC_0(VAR_4->irq, VAR_3);
 FUNC_6(&VAR_4->lock);
 return 0;
}
