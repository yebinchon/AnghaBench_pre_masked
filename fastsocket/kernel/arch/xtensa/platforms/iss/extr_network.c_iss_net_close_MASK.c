
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int (* close ) (struct iss_net_private*) ;} ;
struct iss_net_private {int lock; TYPE_1__ tp; int timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct iss_net_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct iss_net_private*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2)
{
 struct iss_net_private *VAR_3 = FUNC_2(VAR_2);
FUNC_4("iss_net_close!\n");
 FUNC_3(VAR_2);
 FUNC_5(&VAR_3->lock);

 FUNC_5(&VAR_1);
 FUNC_1(&VAR_0);
 FUNC_6(&VAR_1);

 FUNC_0(&VAR_3->timer);

 VAR_3->tp.close(VAR_3);

 FUNC_6(&VAR_3->lock);
 return 0;
}
