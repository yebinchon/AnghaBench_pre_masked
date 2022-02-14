
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dvb_net_priv {int in_use; } ;


 int FUNC_0 (struct net_device*) ;
 struct dvb_net_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct dvb_net_priv *VAR_1 = FUNC_1(VAR_0);

 VAR_1->in_use++;
 FUNC_0(VAR_0);
 return 0;
}
